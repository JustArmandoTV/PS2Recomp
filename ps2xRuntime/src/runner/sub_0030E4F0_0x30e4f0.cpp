#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030E4F0
// Address: 0x30e4f0 - 0x30e760
void sub_0030E4F0_0x30e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E4F0_0x30e4f0");
#endif

    switch (ctx->pc) {
        case 0x30e5fcu: goto label_30e5fc;
        default: break;
    }

    ctx->pc = 0x30e4f0u;

    // 0x30e4f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30e4f4: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x30e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x30e4f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30e4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30e4fc: 0x1236024  and         $t4, $t1, $v1
    ctx->pc = 0x30e4fcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x30e500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30e500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30e504: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x30e504u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x30e508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30e508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30e50c: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x30e50cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e510: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x30e510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e514: 0x8c8a00cc  lw          $t2, 0xCC($a0)
    ctx->pc = 0x30e514u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x30e518: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x30e518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e51c: 0x848d0066  lh          $t5, 0x66($a0)
    ctx->pc = 0x30e51cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 102)));
    // 0x30e520: 0x914e0002  lbu         $t6, 0x2($t2)
    ctx->pc = 0x30e520u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x30e524: 0xc543000c  lwc1        $f3, 0xC($t2)
    ctx->pc = 0x30e524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e528: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x30e528u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30e52c: 0x91490003  lbu         $t1, 0x3($t2)
    ctx->pc = 0x30e52cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x30e530: 0x29a10002  slti        $at, $t5, 0x2
    ctx->pc = 0x30e530u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30e534: 0x18e1825  or          $v1, $t4, $t6
    ctx->pc = 0x30e534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) | GPR_U64(ctx, 14));
    // 0x30e538: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x30e538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e53c: 0xc5440010  lwc1        $f4, 0x10($t2)
    ctx->pc = 0x30e53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e540: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30e540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30e544: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x30e544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x30e548: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x30e548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e54c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x30e54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e550: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x30e550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e554: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x30e554u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30e558: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30e558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30e55c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x30e55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x30e560: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x30e560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e564: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x30e564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e568: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x30e568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e56c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x30e56cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30e570: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30e570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30e574: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x30e574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x30e578: 0xe4a40010  swc1        $f4, 0x10($a1)
    ctx->pc = 0x30e578u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x30e57c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x30e57cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x30e580: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x30e580u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x30e584: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x30e584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e588: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x30e588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e58c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x30e58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e590: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30e590u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30e594: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30e594u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30e598: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x30e598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x30e59c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x30e59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e5a0: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x30e5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e5a4: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x30e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e5a8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30e5a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30e5ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30e5acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30e5b0: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x30e5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x30e5b4: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x30e5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e5b8: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x30e5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e5bc: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x30e5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e5c0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30e5c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30e5c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30e5c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30e5c8: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x30e5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x30e5cc: 0xe4a40028  swc1        $f4, 0x28($a1)
    ctx->pc = 0x30e5ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x30e5d0: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x30e5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x30e5d4: 0x1420005a  bnez        $at, . + 4 + (0x5A << 2)
    ctx->pc = 0x30E5D4u;
    {
        const bool branch_taken_0x30e5d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E5D4u;
            // 0x30e5d8: 0xacab002c  sw          $t3, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e5d4) {
            ctx->pc = 0x30E740u;
            goto label_30e740;
        }
    }
    ctx->pc = 0x30E5DCu;
    // 0x30e5dc: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x30e5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x30e5e0: 0x24180002  addiu       $t8, $zero, 0x2
    ctx->pc = 0x30e5e0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30e5e4: 0x25a9ffff  addiu       $t1, $t5, -0x1
    ctx->pc = 0x30e5e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x30e5e8: 0x6e5023  subu        $t2, $v1, $t6
    ctx->pc = 0x30e5e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x30e5ec: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x30e5ecu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e5f0: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x30e5f0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e5f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x30e5f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30e5f8: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x30e5f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_30e5fc:
    // 0x30e5fc: 0x1398023  subu        $s0, $t1, $t9
    ctx->pc = 0x30e5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 25)));
    // 0x30e600: 0x2723ffff  addiu       $v1, $t9, -0x1
    ctx->pc = 0x30e600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x30e604: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x30e604u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e608: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x30e608u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x30e60c: 0x38040  sll         $s0, $v1, 1
    ctx->pc = 0x30e60cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30e610: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30e610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30e614: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x30e614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x30e618: 0x181840  sll         $v1, $t8, 1
    ctx->pc = 0x30e618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x30e61c: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x30e61cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30e620: 0x788021  addu        $s0, $v1, $t8
    ctx->pc = 0x30e620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x30e624: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x30e624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x30e628: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x30e628u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x30e62c: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x30e62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x30e630: 0xb09021  addu        $s2, $a1, $s0
    ctx->pc = 0x30e630u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x30e634: 0xc46600d8  lwc1        $f6, 0xD8($v1)
    ctx->pc = 0x30e634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30e638: 0x32d802a  slt         $s0, $t9, $t5
    ctx->pc = 0x30e638u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x30e63c: 0x1e9001a  div         $zero, $t7, $t1
    ctx->pc = 0x30e63cu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30e640: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x30e640u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x30e644: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30e644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30e648: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x30e648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30e64c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x30e64cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x30e650: 0x8812  mflo        $s1
    ctx->pc = 0x30e650u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x30e654: 0x1ea7821  addu        $t7, $t7, $t2
    ctx->pc = 0x30e654u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x30e658: 0x1d18821  addu        $s1, $t6, $s1
    ctx->pc = 0x30e658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x30e65c: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x30e65cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x30e660: 0x1918825  or          $s1, $t4, $s1
    ctx->pc = 0x30e660u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 12) | GPR_U64(ctx, 17));
    // 0x30e664: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x30e664u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x30e668: 0xc5050000  lwc1        $f5, 0x0($t0)
    ctx->pc = 0x30e668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e66c: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x30e66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e670: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x30e670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x30e674: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x30e674u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x30e678: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x30e678u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x30e67c: 0xe6440000  swc1        $f4, 0x0($s2)
    ctx->pc = 0x30e67cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x30e680: 0xc4c70004  lwc1        $f7, 0x4($a2)
    ctx->pc = 0x30e680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x30e684: 0xc46600dc  lwc1        $f6, 0xDC($v1)
    ctx->pc = 0x30e684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30e688: 0xc5050004  lwc1        $f5, 0x4($t0)
    ctx->pc = 0x30e688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e68c: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x30e68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e690: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x30e690u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x30e694: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x30e694u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x30e698: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x30e698u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x30e69c: 0xe6440004  swc1        $f4, 0x4($s2)
    ctx->pc = 0x30e69cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x30e6a0: 0xc4c70008  lwc1        $f7, 0x8($a2)
    ctx->pc = 0x30e6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x30e6a4: 0xc46600e0  lwc1        $f6, 0xE0($v1)
    ctx->pc = 0x30e6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30e6a8: 0xc5050008  lwc1        $f5, 0x8($t0)
    ctx->pc = 0x30e6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e6ac: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x30e6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e6b0: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x30e6b0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x30e6b4: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x30e6b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x30e6b8: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x30e6b8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x30e6bc: 0xe6440008  swc1        $f4, 0x8($s2)
    ctx->pc = 0x30e6bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x30e6c0: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x30e6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
    // 0x30e6c4: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x30e6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x30e6c8: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x30e6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x30e6cc: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x30e6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x30e6d0: 0xc46600e4  lwc1        $f6, 0xE4($v1)
    ctx->pc = 0x30e6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30e6d4: 0xc5050000  lwc1        $f5, 0x0($t0)
    ctx->pc = 0x30e6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e6d8: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x30e6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e6dc: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x30e6dcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x30e6e0: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x30e6e0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x30e6e4: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30e6e4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30e6e8: 0xe6440018  swc1        $f4, 0x18($s2)
    ctx->pc = 0x30e6e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x30e6ec: 0xc4c70004  lwc1        $f7, 0x4($a2)
    ctx->pc = 0x30e6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x30e6f0: 0xc46600e8  lwc1        $f6, 0xE8($v1)
    ctx->pc = 0x30e6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30e6f4: 0xc5050004  lwc1        $f5, 0x4($t0)
    ctx->pc = 0x30e6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e6f8: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x30e6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e6fc: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x30e6fcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x30e700: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x30e700u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x30e704: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30e704u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30e708: 0xe644001c  swc1        $f4, 0x1C($s2)
    ctx->pc = 0x30e708u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x30e70c: 0xc46600ec  lwc1        $f6, 0xEC($v1)
    ctx->pc = 0x30e70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30e710: 0xc4c70008  lwc1        $f7, 0x8($a2)
    ctx->pc = 0x30e710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x30e714: 0xc5050008  lwc1        $f5, 0x8($t0)
    ctx->pc = 0x30e714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e718: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x30e718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e71c: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x30e71cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x30e720: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x30e720u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x30e724: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30e724u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30e728: 0xe6440020  swc1        $f4, 0x20($s2)
    ctx->pc = 0x30e728u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x30e72c: 0xae510024  sw          $s1, 0x24($s2)
    ctx->pc = 0x30e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 17));
    // 0x30e730: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x30e730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x30e734: 0x1600ffb1  bnez        $s0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x30E734u;
    {
        const bool branch_taken_0x30e734 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E734u;
            // 0x30e738: 0xae4b002c  sw          $t3, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e734) {
            ctx->pc = 0x30E5FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30e5fc;
        }
    }
    ctx->pc = 0x30E73Cu;
    // 0x30e73c: 0x0  nop
    ctx->pc = 0x30e73cu;
    // NOP
label_30e740:
    // 0x30e740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30e740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30e744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30e748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e74c: 0x3e00008  jr          $ra
    ctx->pc = 0x30E74Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E74Cu;
            // 0x30e750: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E754u;
    // 0x30e754: 0x0  nop
    ctx->pc = 0x30e754u;
    // NOP
    // 0x30e758: 0x0  nop
    ctx->pc = 0x30e758u;
    // NOP
    // 0x30e75c: 0x0  nop
    ctx->pc = 0x30e75cu;
    // NOP
}
