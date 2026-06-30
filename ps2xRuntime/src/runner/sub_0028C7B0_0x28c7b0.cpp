#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028C7B0
// Address: 0x28c7b0 - 0x28c8d0
void sub_0028C7B0_0x28c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C7B0_0x28c7b0");
#endif

    ctx->pc = 0x28c7b0u;

    // 0x28c7b0: 0x46006085  abs.s       $f2, $f12
    ctx->pc = 0x28c7b0u;
    ctx->f[2] = FPU_ABS_S(ctx->f[12]);
    // 0x28c7b4: 0x46006845  abs.s       $f1, $f13
    ctx->pc = 0x28c7b4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[13]);
    // 0x28c7b8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x28c7b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c7bc: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x28C7BCu;
    {
        const bool branch_taken_0x28c7bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c7bc) {
            ctx->pc = 0x28C7C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C7BCu;
            // 0x28c7c0: 0x3c033400  lui         $v1, 0x3400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C81Cu;
            goto label_28c81c;
        }
    }
    ctx->pc = 0x28C7C4u;
    // 0x28c7c4: 0x3c033400  lui         $v1, 0x3400
    ctx->pc = 0x28c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
    // 0x28c7c8: 0x3c02bdf7  lui         $v0, 0xBDF7
    ctx->pc = 0x28c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48631 << 16));
    // 0x28c7cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c7ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c7d0: 0x0  nop
    ctx->pc = 0x28c7d0u;
    // NOP
    // 0x28c7d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28c7d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28c7d8: 0x3443f844  ori         $v1, $v0, 0xF844
    ctx->pc = 0x28c7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63556);
    // 0x28c7dc: 0x3c02bdbf  lui         $v0, 0xBDBF
    ctx->pc = 0x28c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48575 << 16));
    // 0x28c7e0: 0x344288e4  ori         $v0, $v0, 0x88E4
    ctx->pc = 0x28c7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35044);
    // 0x28c7e4: 0x460010c3  div.s       $f3, $f2, $f0
    ctx->pc = 0x28c7e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[0];
    // 0x28c7e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c7e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c7ec: 0x0  nop
    ctx->pc = 0x28c7ecu;
    // NOP
    // 0x28c7f0: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x28c7f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28c7f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c7f8: 0x0  nop
    ctx->pc = 0x28c7f8u;
    // NOP
    // 0x28c7fc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28c7fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28c800: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x28c800u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x28c804: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x28c804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c808: 0x0  nop
    ctx->pc = 0x28c808u;
    // NOP
    // 0x28c80c: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x28c80cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x28c810: 0x4602181e  madda.s     $f3, $f2
    ctx->pc = 0x28c810u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x28c814: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x28C814u;
    {
        const bool branch_taken_0x28c814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C814u;
            // 0x28c818: 0x4600181c  madd.s      $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c814) {
            ctx->pc = 0x28C87Cu;
            goto label_28c87c;
        }
    }
    ctx->pc = 0x28C81Cu;
label_28c81c:
    // 0x28c81c: 0x3c02bdf7  lui         $v0, 0xBDF7
    ctx->pc = 0x28c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48631 << 16));
    // 0x28c820: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c824: 0x3444f844  ori         $a0, $v0, 0xF844
    ctx->pc = 0x28c824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63556);
    // 0x28c828: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x28c828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28c82c: 0x3c02bdbf  lui         $v0, 0xBDBF
    ctx->pc = 0x28c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48575 << 16));
    // 0x28c830: 0x344388e4  ori         $v1, $v0, 0x88E4
    ctx->pc = 0x28c830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35044);
    // 0x28c834: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x28c834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x28c838: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x28c838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x28c83c: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x28c83cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[0];
    // 0x28c840: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28c840u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c844: 0x0  nop
    ctx->pc = 0x28c844u;
    // NOP
    // 0x28c848: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x28c848u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28c84c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c84cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c850: 0x0  nop
    ctx->pc = 0x28c850u;
    // NOP
    // 0x28c854: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x28c854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28c858: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x28c858u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x28c85c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x28c85cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28c860: 0x0  nop
    ctx->pc = 0x28c860u;
    // NOP
    // 0x28c864: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x28c864u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x28c868: 0x4603201e  madda.s     $f4, $f3
    ctx->pc = 0x28c868u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x28c86c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c870: 0x0  nop
    ctx->pc = 0x28c870u;
    // NOP
    // 0x28c874: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x28c874u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x28c878: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28c878u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_28c87c:
    // 0x28c87c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x28c87cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c880: 0x0  nop
    ctx->pc = 0x28c880u;
    // NOP
    // 0x28c884: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x28c884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c888: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x28C888u;
    {
        const bool branch_taken_0x28c888 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c888) {
            ctx->pc = 0x28C8A4u;
            goto label_28c8a4;
        }
    }
    ctx->pc = 0x28C890u;
    // 0x28c890: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x28c890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x28c894: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x28c894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x28c898: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28c898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c89c: 0x0  nop
    ctx->pc = 0x28c89cu;
    // NOP
    // 0x28c8a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28c8a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_28c8a4:
    // 0x28c8a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x28c8a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c8a8: 0x0  nop
    ctx->pc = 0x28c8a8u;
    // NOP
    // 0x28c8ac: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x28c8acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c8b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28C8B0u;
    {
        const bool branch_taken_0x28c8b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c8b0) {
            ctx->pc = 0x28C8BCu;
            goto label_28c8bc;
        }
    }
    ctx->pc = 0x28C8B8u;
    // 0x28c8b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x28c8b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_28c8bc:
    // 0x28c8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x28C8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C8C4u;
    // 0x28c8c4: 0x0  nop
    ctx->pc = 0x28c8c4u;
    // NOP
    // 0x28c8c8: 0x0  nop
    ctx->pc = 0x28c8c8u;
    // NOP
    // 0x28c8cc: 0x0  nop
    ctx->pc = 0x28c8ccu;
    // NOP
}
