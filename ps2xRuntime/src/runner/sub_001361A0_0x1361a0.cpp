#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001361A0
// Address: 0x1361a0 - 0x136250
void sub_001361A0_0x1361a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001361A0_0x1361a0");
#endif

    switch (ctx->pc) {
        case 0x1361b4u: goto label_1361b4;
        default: break;
    }

    ctx->pc = 0x1361a0u;

    // 0x1361a0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1361a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1361a4: 0x2d010002  sltiu       $at, $t0, 0x2
    ctx->pc = 0x1361a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1361a8: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1361A8u;
    {
        const bool branch_taken_0x1361a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1361ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1361A8u;
            // 0x1361ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1361a8) {
            ctx->pc = 0x1361F0u;
            goto label_1361f0;
        }
    }
    ctx->pc = 0x1361B0u;
    // 0x1361b0: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x1361b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_1361b4:
    // 0x1361b4: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x1361b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1361b8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1361b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1361bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1361bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1361c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1361c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1361c4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1361c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1361c8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1361C8u;
    {
        const bool branch_taken_0x1361c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1361c8) {
            ctx->pc = 0x1361D8u;
            goto label_1361d8;
        }
    }
    ctx->pc = 0x1361D0u;
    // 0x1361d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1361D0u;
    {
        const bool branch_taken_0x1361d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1361D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1361D0u;
            // 0x1361d4: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1361d0) {
            ctx->pc = 0x1361E0u;
            goto label_1361e0;
        }
    }
    ctx->pc = 0x1361D8u;
label_1361d8:
    // 0x1361d8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1361d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1361dc: 0x0  nop
    ctx->pc = 0x1361dcu;
    // NOP
label_1361e0:
    // 0x1361e0: 0x1091823  subu        $v1, $t0, $t1
    ctx->pc = 0x1361e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1361e4: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x1361e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1361e8: 0x5020fff2  beql        $at, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1361E8u;
    {
        const bool branch_taken_0x1361e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1361e8) {
            ctx->pc = 0x1361ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1361E8u;
            // 0x1361ec: 0x1281821  addu        $v1, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1361B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1361b4;
        }
    }
    ctx->pc = 0x1361F0u;
label_1361f0:
    // 0x1361f0: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1361f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1361f4: 0x928c0  sll         $a1, $t1, 3
    ctx->pc = 0x1361f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1361f8: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x1361f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1361fc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1361FCu;
    {
        const bool branch_taken_0x1361fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x136200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1361FCu;
            // 0x136200: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1361fc) {
            ctx->pc = 0x136210u;
            goto label_136210;
        }
    }
    ctx->pc = 0x136204u;
    // 0x136204: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x136204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136208: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x136208u;
    {
        const bool branch_taken_0x136208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13620Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136208u;
            // 0x13620c: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136208) {
            ctx->pc = 0x136244u;
            goto label_136244;
        }
    }
    ctx->pc = 0x136210u;
label_136210:
    // 0x136210: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x136210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x136214: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x136214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x136218: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x136218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13621c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13621cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136220: 0x46036081  sub.s       $f2, $f12, $f3
    ctx->pc = 0x136220u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x136224: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x136224u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x136228: 0x460110c3  div.s       $f3, $f2, $f1
    ctx->pc = 0x136228u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[1];
    // 0x13622c: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x13622cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x136230: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x136230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136234: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x136234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x136238: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x136238u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13623c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x13623cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x136240: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x136240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_136244:
    // 0x136244: 0x3e00008  jr          $ra
    ctx->pc = 0x136244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13624Cu;
    // 0x13624c: 0x0  nop
    ctx->pc = 0x13624cu;
    // NOP
}
