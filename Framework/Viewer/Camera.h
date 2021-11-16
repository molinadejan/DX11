#pragma once
class Camera
{
public:
	Camera();
	virtual ~Camera();

private:
	Vector3 position;
	Vector3 forward;
	Vector3 up;
	Vector3 right;
	Matrix matView;

public:
	virtual void Update();
	void Position(float x, float y, float z);
	void Position(Vector3& vec);
	void Position(Vector3* vec);
	void GetMatrix(Matrix* matrix);

	Vector3& Forward() { return forward; }
	Vector3& Up() { return up; }
	Vector3& Right() { return right; }

protected:
	void View();
	virtual void Move();
};

