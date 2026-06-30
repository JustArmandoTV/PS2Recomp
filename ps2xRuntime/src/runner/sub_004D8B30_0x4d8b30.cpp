#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D8B30
// Address: 0x4d8b30 - 0x4da0b0
void sub_004D8B30_0x4d8b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D8B30_0x4d8b30");
#endif

    switch (ctx->pc) {
        case 0x4d8bd4u: goto label_4d8bd4;
        case 0x4d8bdcu: goto label_4d8bdc;
        case 0x4d8c24u: goto label_4d8c24;
        case 0x4d8c58u: goto label_4d8c58;
        case 0x4d8c7cu: goto label_4d8c7c;
        case 0x4d8c94u: goto label_4d8c94;
        case 0x4d8cb4u: goto label_4d8cb4;
        case 0x4d8d44u: goto label_4d8d44;
        case 0x4d8d78u: goto label_4d8d78;
        case 0x4d8d94u: goto label_4d8d94;
        case 0x4d8dc0u: goto label_4d8dc0;
        case 0x4d8df4u: goto label_4d8df4;
        case 0x4d8e3cu: goto label_4d8e3c;
        case 0x4d8e84u: goto label_4d8e84;
        case 0x4d8eccu: goto label_4d8ecc;
        case 0x4d8f14u: goto label_4d8f14;
        case 0x4d8f5cu: goto label_4d8f5c;
        case 0x4d9024u: goto label_4d9024;
        case 0x4d9038u: goto label_4d9038;
        case 0x4d904cu: goto label_4d904c;
        case 0x4d9060u: goto label_4d9060;
        case 0x4d9088u: goto label_4d9088;
        case 0x4d909cu: goto label_4d909c;
        case 0x4d90c0u: goto label_4d90c0;
        case 0x4d90e0u: goto label_4d90e0;
        case 0x4d9148u: goto label_4d9148;
        case 0x4d9178u: goto label_4d9178;
        case 0x4d91a0u: goto label_4d91a0;
        case 0x4d9234u: goto label_4d9234;
        case 0x4d92a8u: goto label_4d92a8;
        case 0x4d92b8u: goto label_4d92b8;
        case 0x4d930cu: goto label_4d930c;
        case 0x4d931cu: goto label_4d931c;
        case 0x4d9330u: goto label_4d9330;
        case 0x4d93a0u: goto label_4d93a0;
        case 0x4d93acu: goto label_4d93ac;
        case 0x4d93c4u: goto label_4d93c4;
        case 0x4d93d0u: goto label_4d93d0;
        case 0x4d93d8u: goto label_4d93d8;
        case 0x4d9418u: goto label_4d9418;
        case 0x4d9428u: goto label_4d9428;
        case 0x4d9454u: goto label_4d9454;
        case 0x4d946cu: goto label_4d946c;
        case 0x4d9488u: goto label_4d9488;
        case 0x4d9494u: goto label_4d9494;
        case 0x4d949cu: goto label_4d949c;
        case 0x4d94dcu: goto label_4d94dc;
        case 0x4d9504u: goto label_4d9504;
        case 0x4d952cu: goto label_4d952c;
        case 0x4d9538u: goto label_4d9538;
        case 0x4d9540u: goto label_4d9540;
        case 0x4d957cu: goto label_4d957c;
        case 0x4d95e4u: goto label_4d95e4;
        case 0x4d9608u: goto label_4d9608;
        case 0x4d963cu: goto label_4d963c;
        case 0x4d9658u: goto label_4d9658;
        case 0x4d9664u: goto label_4d9664;
        case 0x4d966cu: goto label_4d966c;
        case 0x4d96a8u: goto label_4d96a8;
        case 0x4d9714u: goto label_4d9714;
        case 0x4d9728u: goto label_4d9728;
        case 0x4d974cu: goto label_4d974c;
        case 0x4d9764u: goto label_4d9764;
        case 0x4d9770u: goto label_4d9770;
        case 0x4d9778u: goto label_4d9778;
        case 0x4d97b4u: goto label_4d97b4;
        case 0x4d981cu: goto label_4d981c;
        case 0x4d9848u: goto label_4d9848;
        case 0x4d987cu: goto label_4d987c;
        case 0x4d9888u: goto label_4d9888;
        case 0x4d9890u: goto label_4d9890;
        case 0x4d98ccu: goto label_4d98cc;
        case 0x4d9934u: goto label_4d9934;
        case 0x4d995cu: goto label_4d995c;
        case 0x4d9990u: goto label_4d9990;
        case 0x4d999cu: goto label_4d999c;
        case 0x4d99a4u: goto label_4d99a4;
        case 0x4d99e0u: goto label_4d99e0;
        case 0x4d9a44u: goto label_4d9a44;
        case 0x4d9a6cu: goto label_4d9a6c;
        case 0x4d9aa0u: goto label_4d9aa0;
        case 0x4d9aacu: goto label_4d9aac;
        case 0x4d9ab4u: goto label_4d9ab4;
        case 0x4d9af0u: goto label_4d9af0;
        case 0x4d9b54u: goto label_4d9b54;
        case 0x4d9b7cu: goto label_4d9b7c;
        case 0x4d9bb0u: goto label_4d9bb0;
        case 0x4d9bccu: goto label_4d9bcc;
        case 0x4d9bd8u: goto label_4d9bd8;
        case 0x4d9be0u: goto label_4d9be0;
        case 0x4d9c1cu: goto label_4d9c1c;
        case 0x4d9c84u: goto label_4d9c84;
        case 0x4d9cacu: goto label_4d9cac;
        case 0x4d9ce0u: goto label_4d9ce0;
        case 0x4d9cfcu: goto label_4d9cfc;
        case 0x4d9d08u: goto label_4d9d08;
        case 0x4d9d10u: goto label_4d9d10;
        case 0x4d9d4cu: goto label_4d9d4c;
        case 0x4d9db4u: goto label_4d9db4;
        case 0x4d9ddcu: goto label_4d9ddc;
        case 0x4d9e10u: goto label_4d9e10;
        case 0x4d9e1cu: goto label_4d9e1c;
        case 0x4d9e24u: goto label_4d9e24;
        case 0x4d9e60u: goto label_4d9e60;
        case 0x4d9ec4u: goto label_4d9ec4;
        case 0x4d9ee8u: goto label_4d9ee8;
        case 0x4d9f34u: goto label_4d9f34;
        case 0x4d9f48u: goto label_4d9f48;
        case 0x4d9f98u: goto label_4d9f98;
        case 0x4d9facu: goto label_4d9fac;
        case 0x4d9fd8u: goto label_4d9fd8;
        case 0x4d9fecu: goto label_4d9fec;
        case 0x4da01cu: goto label_4da01c;
        case 0x4da048u: goto label_4da048;
        case 0x4da074u: goto label_4da074;
        case 0x4da078u: goto label_4da078;
        default: break;
    }

    ctx->pc = 0x4d8b30u;

    // 0x4d8b30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4d8b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4d8b34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d8b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4d8b38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4d8b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4d8b3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4d8b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4d8b40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4d8b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4d8b44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d8b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8b48: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4d8b48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4d8b4c: 0x8c8400f4  lw          $a0, 0xF4($a0)
    ctx->pc = 0x4d8b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x4d8b50: 0x2c81000d  sltiu       $at, $a0, 0xD
    ctx->pc = 0x4d8b50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x4d8b54: 0x1020010e  beqz        $at, . + 4 + (0x10E << 2)
    ctx->pc = 0x4D8B54u;
    {
        const bool branch_taken_0x4d8b54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8B54u;
            // 0x4d8b58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8b54) {
            ctx->pc = 0x4D8F90u;
            goto label_4d8f90;
        }
    }
    ctx->pc = 0x4D8B5Cu;
    // 0x4d8b5c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4d8b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4d8b60: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4d8b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4d8b64: 0x24a57f80  addiu       $a1, $a1, 0x7F80
    ctx->pc = 0x4d8b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32640));
    // 0x4d8b68: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4d8b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d8b6c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4d8b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d8b70: 0x800008  jr          $a0
    ctx->pc = 0x4D8B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4D8B78u: goto label_4d8b78;
            case 0x4D8C08u: goto label_4d8c08;
            case 0x4D8C50u: goto label_4d8c50;
            case 0x4D8CB0u: goto label_4d8cb0;
            case 0x4D8D60u: goto label_4d8d60;
            case 0x4D8DBCu: goto label_4d8dbc;
            case 0x4D8DE8u: goto label_4d8de8;
            case 0x4D8E30u: goto label_4d8e30;
            case 0x4D8E78u: goto label_4d8e78;
            case 0x4D8EC0u: goto label_4d8ec0;
            case 0x4D8F08u: goto label_4d8f08;
            case 0x4D8F50u: goto label_4d8f50;
            case 0x4D8F90u: goto label_4d8f90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x4D8B78u;
label_4d8b78:
    // 0x4d8b78: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x4d8b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d8b7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4d8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4d8b80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4d8b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4d8b84: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4d8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4d8b88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4d8b88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4d8b8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4d8b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d8b90: 0x0  nop
    ctx->pc = 0x4d8b90u;
    // NOP
    // 0x4d8b94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4d8b94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8b98: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x4D8B98u;
    {
        const bool branch_taken_0x4d8b98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8b98) {
            ctx->pc = 0x4D8B9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8B98u;
            // 0x4d8b9c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D8BB0u;
            goto label_4d8bb0;
        }
    }
    ctx->pc = 0x4D8BA0u;
    // 0x4d8ba0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d8ba0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d8ba4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4d8ba4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4d8ba8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4D8BA8u;
    {
        const bool branch_taken_0x4d8ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8ba8) {
            ctx->pc = 0x4D8BC4u;
            goto label_4d8bc4;
        }
    }
    ctx->pc = 0x4D8BB0u;
label_4d8bb0:
    // 0x4d8bb0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4d8bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4d8bb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d8bb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d8bb8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4d8bb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4d8bbc: 0x0  nop
    ctx->pc = 0x4d8bbcu;
    // NOP
    // 0x4d8bc0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4d8bc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_4d8bc4:
    // 0x4d8bc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d8bc8: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4d8bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x4d8bcc: 0xc0c2bcc  jal         func_30AF30
    ctx->pc = 0x4D8BCCu;
    SET_GPR_U32(ctx, 31, 0x4D8BD4u);
    ctx->pc = 0x4D8BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8BCCu;
            // 0x4d8bd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AF30u;
    if (runtime->hasFunction(0x30AF30u)) {
        auto targetFn = runtime->lookupFunction(0x30AF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D8BD4u; }
        if (ctx->pc != 0x4D8BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030AF30_0x30af30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D8BD4u; }
        if (ctx->pc != 0x4D8BD4u) { return; }
    }
    ctx->pc = 0x4D8BD4u;
label_4d8bd4:
    // 0x4d8bd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d8bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8bd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4d8bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d8bdc:
    // 0x4d8bdc: 0x8e23016c  lw          $v1, 0x16C($s1)
    ctx->pc = 0x4d8bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
    // 0x4d8be0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8BE0u;
    {
        const bool branch_taken_0x4d8be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8be0) {
            ctx->pc = 0x4D8BF0u;
            goto label_4d8bf0;
        }
    }
    ctx->pc = 0x4D8BE8u;
    // 0x4d8be8: 0xa064004e  sb          $a0, 0x4E($v1)
    ctx->pc = 0x4d8be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d8bec: 0x0  nop
    ctx->pc = 0x4d8becu;
    // NOP
label_4d8bf0:
    // 0x4d8bf0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4d8bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4d8bf4: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x4d8bf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d8bf8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4D8BF8u;
    {
        const bool branch_taken_0x4d8bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8BF8u;
            // 0x4d8bfc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8bf8) {
            ctx->pc = 0x4D8BDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8bdc;
        }
    }
    ctx->pc = 0x4D8C00u;
    // 0x4d8c00: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x4D8C00u;
    {
        const bool branch_taken_0x4d8c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8c00) {
            ctx->pc = 0x4D8F90u;
            goto label_4d8f90;
        }
    }
    ctx->pc = 0x4D8C08u;
label_4d8c08:
    // 0x4d8c08: 0x8e2400f8  lw          $a0, 0xF8($s1)
    ctx->pc = 0x4d8c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x4d8c0c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D8C0Cu;
    {
        const bool branch_taken_0x4d8c0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8c0c) {
            ctx->pc = 0x4D8C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8C0Cu;
            // 0x4d8c10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D8C20u;
            goto label_4d8c20;
        }
    }
    ctx->pc = 0x4D8C14u;
    // 0x4d8c14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4d8c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d8c18: 0xa083004e  sb          $v1, 0x4E($a0)
    ctx->pc = 0x4d8c18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d8c1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d8c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d8c20:
    // 0x4d8c20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4d8c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d8c24:
    // 0x4d8c24: 0x8e230158  lw          $v1, 0x158($s1)
    ctx->pc = 0x4d8c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x4d8c28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8C28u;
    {
        const bool branch_taken_0x4d8c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8c28) {
            ctx->pc = 0x4D8C38u;
            goto label_4d8c38;
        }
    }
    ctx->pc = 0x4D8C30u;
    // 0x4d8c30: 0xa064004e  sb          $a0, 0x4E($v1)
    ctx->pc = 0x4d8c30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d8c34: 0x0  nop
    ctx->pc = 0x4d8c34u;
    // NOP
label_4d8c38:
    // 0x4d8c38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4d8c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4d8c3c: 0x2ca30005  sltiu       $v1, $a1, 0x5
    ctx->pc = 0x4d8c3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4d8c40: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4D8C40u;
    {
        const bool branch_taken_0x4d8c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8C40u;
            // 0x4d8c44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8c40) {
            ctx->pc = 0x4D8C24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8c24;
        }
    }
    ctx->pc = 0x4D8C48u;
    // 0x4d8c48: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x4D8C48u;
    {
        const bool branch_taken_0x4d8c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8c48) {
            ctx->pc = 0x4D8F90u;
            goto label_4d8f90;
        }
    }
    ctx->pc = 0x4D8C50u;
label_4d8c50:
    // 0x4d8c50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4d8c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8c54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d8c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d8c58:
    // 0x4d8c58: 0x8cc400fc  lw          $a0, 0xFC($a2)
    ctx->pc = 0x4d8c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 252)));
    // 0x4d8c5c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4D8C5Cu;
    {
        const bool branch_taken_0x4d8c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8c5c) {
            ctx->pc = 0x4D8C68u;
            goto label_4d8c68;
        }
    }
    ctx->pc = 0x4D8C64u;
    // 0x4d8c64: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x4d8c64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
label_4d8c68:
    // 0x4d8c68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4d8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4d8c6c: 0x2c640002  sltiu       $a0, $v1, 0x2
    ctx->pc = 0x4d8c6cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d8c70: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4D8C70u;
    {
        const bool branch_taken_0x4d8c70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8C70u;
            // 0x4d8c74: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8c70) {
            ctx->pc = 0x4D8C58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8c58;
        }
    }
    ctx->pc = 0x4D8C78u;
    // 0x4d8c78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4d8c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d8c7c:
    // 0x4d8c7c: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x4d8c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x4d8c80: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D8C80u;
    {
        const bool branch_taken_0x4d8c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8c80) {
            ctx->pc = 0x4D8C98u;
            goto label_4d8c98;
        }
    }
    ctx->pc = 0x4D8C88u;
    // 0x4d8c88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d8c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d8c8c: 0xc13c78c  jal         func_4F1E30
    ctx->pc = 0x4D8C8Cu;
    SET_GPR_U32(ctx, 31, 0x4D8C94u);
    ctx->pc = 0x4D8C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8C8Cu;
            // 0x4d8c90: 0xa085004e  sb          $a1, 0x4E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F1E30u;
    if (runtime->hasFunction(0x4F1E30u)) {
        auto targetFn = runtime->lookupFunction(0x4F1E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D8C94u; }
        if (ctx->pc != 0x4D8C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F1E30_0x4f1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D8C94u; }
        if (ctx->pc != 0x4D8C94u) { return; }
    }
    ctx->pc = 0x4D8C94u;
label_4d8c94:
    // 0x4d8c94: 0x0  nop
    ctx->pc = 0x4d8c94u;
    // NOP
label_4d8c98:
    // 0x4d8c98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4d8c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4d8c9c: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x4d8c9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4d8ca0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x4D8CA0u;
    {
        const bool branch_taken_0x4d8ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8CA0u;
            // 0x4d8ca4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8ca0) {
            ctx->pc = 0x4D8C7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8c7c;
        }
    }
    ctx->pc = 0x4D8CA8u;
    // 0x4d8ca8: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x4D8CA8u;
    {
        const bool branch_taken_0x4d8ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8ca8) {
            ctx->pc = 0x4D8F90u;
            goto label_4d8f90;
        }
    }
    ctx->pc = 0x4D8CB0u;
label_4d8cb0:
    // 0x4d8cb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4d8cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d8cb4:
    // 0x4d8cb4: 0x8e260104  lw          $a2, 0x104($s1)
    ctx->pc = 0x4d8cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x4d8cb8: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x4D8CB8u;
    {
        const bool branch_taken_0x4d8cb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8cb8) {
            ctx->pc = 0x4D8D48u;
            goto label_4d8d48;
        }
    }
    ctx->pc = 0x4D8CC0u;
    // 0x4d8cc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4d8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d8cc4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4d8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x4d8cc8: 0xa0c4004e  sb          $a0, 0x4E($a2)
    ctx->pc = 0x4d8cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d8ccc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4d8cccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d8cd0: 0xc4c10038  lwc1        $f1, 0x38($a2)
    ctx->pc = 0x4d8cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d8cd4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d8cd4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8cd8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x4D8CD8u;
    {
        const bool branch_taken_0x4d8cd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8cd8) {
            ctx->pc = 0x4D8D48u;
            goto label_4d8d48;
        }
    }
    ctx->pc = 0x4D8CE0u;
    // 0x4d8ce0: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x4d8ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d8ce4: 0x8cc2003c  lw          $v0, 0x3C($a2)
    ctx->pc = 0x4d8ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x4d8ce8: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x4d8ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d8cec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d8cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d8cf0: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x4d8cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d8cf4: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x4d8cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x4d8cf8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4d8cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x4d8cfc: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x4d8cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d8d00: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x4d8d00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x4d8d04: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x4d8d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x4d8d08: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x4d8d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x4d8d0c: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x4d8d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d8d10: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x4d8d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d8d14: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x4d8d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d8d18: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x4d8d18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4d8d1c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x4d8d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x4d8d20: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x4d8d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4d8d24: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x4d8d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d8d28: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x4d8d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d8d2c: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x4d8d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d8d30: 0xc7af0060  lwc1        $f15, 0x60($sp)
    ctx->pc = 0x4d8d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d8d34: 0xc7b00064  lwc1        $f16, 0x64($sp)
    ctx->pc = 0x4d8d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x4d8d38: 0xc7b10068  lwc1        $f17, 0x68($sp)
    ctx->pc = 0x4d8d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x4d8d3c: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x4D8D3Cu;
    SET_GPR_U32(ctx, 31, 0x4D8D44u);
    ctx->pc = 0x4D8D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8D3Cu;
            // 0x4d8d40: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D8D44u; }
        if (ctx->pc != 0x4D8D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D8D44u; }
        if (ctx->pc != 0x4D8D44u) { return; }
    }
    ctx->pc = 0x4D8D44u;
label_4d8d44:
    // 0x4d8d44: 0x0  nop
    ctx->pc = 0x4d8d44u;
    // NOP
label_4d8d48:
    // 0x4d8d48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4d8d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4d8d4c: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x4d8d4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4d8d50: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x4D8D50u;
    {
        const bool branch_taken_0x4d8d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8D50u;
            // 0x4d8d54: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8d50) {
            ctx->pc = 0x4D8CB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8cb4;
        }
    }
    ctx->pc = 0x4D8D58u;
    // 0x4d8d58: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x4D8D58u;
    {
        const bool branch_taken_0x4d8d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8d58) {
            ctx->pc = 0x4D8F90u;
            goto label_4d8f90;
        }
    }
    ctx->pc = 0x4D8D60u;
label_4d8d60:
    // 0x4d8d60: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4d8d64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d8d64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8d68: 0x8c42aa30  lw          $v0, -0x55D0($v0)
    ctx->pc = 0x4d8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945328)));
    // 0x4d8d6c: 0xc6340030  lwc1        $f20, 0x30($s1)
    ctx->pc = 0x4d8d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d8d70: 0x8c500070  lw          $s0, 0x70($v0)
    ctx->pc = 0x4d8d70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x4d8d74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d8d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d8d78:
    // 0x4d8d78: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4d8d7c: 0x8c42aa30  lw          $v0, -0x55D0($v0)
    ctx->pc = 0x4d8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945328)));
    // 0x4d8d80: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4d8d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x4d8d84: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4d8d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x4d8d88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d8d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d8d8c: 0xc134618  jal         func_4D1860
    ctx->pc = 0x4D8D8Cu;
    SET_GPR_U32(ctx, 31, 0x4D8D94u);
    ctx->pc = 0x4D8D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8D8Cu;
            // 0x4d8d90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D1860u;
    if (runtime->hasFunction(0x4D1860u)) {
        auto targetFn = runtime->lookupFunction(0x4D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D8D94u; }
        if (ctx->pc != 0x4D8D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D1860_0x4d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D8D94u; }
        if (ctx->pc != 0x4D8D94u) { return; }
    }
    ctx->pc = 0x4D8D94u;
label_4d8d94:
    // 0x4d8d94: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x4d8d94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4d8d98: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4d8d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x4d8d9c: 0x1060007c  beqz        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x4D8D9Cu;
    {
        const bool branch_taken_0x4d8d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8d9c) {
            ctx->pc = 0x4D8F90u;
            goto label_4d8f90;
        }
    }
    ctx->pc = 0x4D8DA4u;
    // 0x4d8da4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4d8da4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4d8da8: 0x230182b  sltu        $v1, $s1, $s0
    ctx->pc = 0x4d8da8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4d8dac: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x4D8DACu;
    {
        const bool branch_taken_0x4d8dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8DACu;
            // 0x4d8db0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8dac) {
            ctx->pc = 0x4D8D78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8d78;
        }
    }
    ctx->pc = 0x4D8DB4u;
    // 0x4d8db4: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x4D8DB4u;
    {
        const bool branch_taken_0x4d8db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8db4) {
            ctx->pc = 0x4D8F90u;
            goto label_4d8f90;
        }
    }
    ctx->pc = 0x4D8DBCu;
label_4d8dbc:
    // 0x4d8dbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d8dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d8dc0:
    // 0x4d8dc0: 0x8e2400fc  lw          $a0, 0xFC($s1)
    ctx->pc = 0x4d8dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x4d8dc4: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4D8DC4u;
    {
        const bool branch_taken_0x4d8dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8dc4) {
            ctx->pc = 0x4D8DD0u;
            goto label_4d8dd0;
        }
    }
    ctx->pc = 0x4D8DCCu;
    // 0x4d8dcc: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x4d8dccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
label_4d8dd0:
    // 0x4d8dd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4d8dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4d8dd4: 0x2c640002  sltiu       $a0, $v1, 0x2
    ctx->pc = 0x4d8dd4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d8dd8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4D8DD8u;
    {
        const bool branch_taken_0x4d8dd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8DD8u;
            // 0x4d8ddc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8dd8) {
            ctx->pc = 0x4D8DC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8dc0;
        }
    }
    ctx->pc = 0x4D8DE0u;
    // 0x4d8de0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x4D8DE0u;
    {
        const bool branch_taken_0x4d8de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8de0) {
            ctx->pc = 0x4D8F90u;
            goto label_4d8f90;
        }
    }
    ctx->pc = 0x4D8DE8u;
label_4d8de8:
    // 0x4d8de8: 0x3c044110  lui         $a0, 0x4110
    ctx->pc = 0x4d8de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16656 << 16));
    // 0x4d8dec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d8decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d8df0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4d8df0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d8df4:
    // 0x4d8df4: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x4d8df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x4d8df8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D8DF8u;
    {
        const bool branch_taken_0x4d8df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8df8) {
            ctx->pc = 0x4D8E18u;
            goto label_4d8e18;
        }
    }
    ctx->pc = 0x4D8E00u;
    // 0x4d8e00: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x4d8e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d8e04: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d8e04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8e08: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8E08u;
    {
        const bool branch_taken_0x4d8e08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8e08) {
            ctx->pc = 0x4D8E18u;
            goto label_4d8e18;
        }
    }
    ctx->pc = 0x4D8E10u;
    // 0x4d8e10: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x4d8e10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d8e14: 0x0  nop
    ctx->pc = 0x4d8e14u;
    // NOP
label_4d8e18:
    // 0x4d8e18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4d8e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4d8e1c: 0x2c64000c  sltiu       $a0, $v1, 0xC
    ctx->pc = 0x4d8e1cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d8e20: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4D8E20u;
    {
        const bool branch_taken_0x4d8e20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8E20u;
            // 0x4d8e24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8e20) {
            ctx->pc = 0x4D8DF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8df4;
        }
    }
    ctx->pc = 0x4D8E28u;
    // 0x4d8e28: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x4D8E28u;
    {
        const bool branch_taken_0x4d8e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8e28) {
            ctx->pc = 0x4D8F90u;
            goto label_4d8f90;
        }
    }
    ctx->pc = 0x4D8E30u;
label_4d8e30:
    // 0x4d8e30: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x4d8e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x4d8e34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d8e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d8e38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4d8e38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d8e3c:
    // 0x4d8e3c: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x4d8e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x4d8e40: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D8E40u;
    {
        const bool branch_taken_0x4d8e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8e40) {
            ctx->pc = 0x4D8E60u;
            goto label_4d8e60;
        }
    }
    ctx->pc = 0x4D8E48u;
    // 0x4d8e48: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x4d8e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d8e4c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d8e4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8e50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8E50u;
    {
        const bool branch_taken_0x4d8e50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8e50) {
            ctx->pc = 0x4D8E60u;
            goto label_4d8e60;
        }
    }
    ctx->pc = 0x4D8E58u;
    // 0x4d8e58: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x4d8e58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d8e5c: 0x0  nop
    ctx->pc = 0x4d8e5cu;
    // NOP
label_4d8e60:
    // 0x4d8e60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4d8e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4d8e64: 0x2c64000c  sltiu       $a0, $v1, 0xC
    ctx->pc = 0x4d8e64u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d8e68: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4D8E68u;
    {
        const bool branch_taken_0x4d8e68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8E68u;
            // 0x4d8e6c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8e68) {
            ctx->pc = 0x4D8E3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8e3c;
        }
    }
    ctx->pc = 0x4D8E70u;
    // 0x4d8e70: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x4D8E70u;
    {
        const bool branch_taken_0x4d8e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8e70) {
            ctx->pc = 0x4D8F90u;
            goto label_4d8f90;
        }
    }
    ctx->pc = 0x4D8E78u;
label_4d8e78:
    // 0x4d8e78: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x4d8e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x4d8e7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d8e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d8e80: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4d8e80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d8e84:
    // 0x4d8e84: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x4d8e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x4d8e88: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D8E88u;
    {
        const bool branch_taken_0x4d8e88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8e88) {
            ctx->pc = 0x4D8EA8u;
            goto label_4d8ea8;
        }
    }
    ctx->pc = 0x4D8E90u;
    // 0x4d8e90: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x4d8e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d8e94: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d8e94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8e98: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8E98u;
    {
        const bool branch_taken_0x4d8e98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8e98) {
            ctx->pc = 0x4D8EA8u;
            goto label_4d8ea8;
        }
    }
    ctx->pc = 0x4D8EA0u;
    // 0x4d8ea0: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x4d8ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d8ea4: 0x0  nop
    ctx->pc = 0x4d8ea4u;
    // NOP
label_4d8ea8:
    // 0x4d8ea8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4d8ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4d8eac: 0x2c64000c  sltiu       $a0, $v1, 0xC
    ctx->pc = 0x4d8eacu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d8eb0: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4D8EB0u;
    {
        const bool branch_taken_0x4d8eb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8EB0u;
            // 0x4d8eb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8eb0) {
            ctx->pc = 0x4D8E84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8e84;
        }
    }
    ctx->pc = 0x4D8EB8u;
    // 0x4d8eb8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x4D8EB8u;
    {
        const bool branch_taken_0x4d8eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8eb8) {
            ctx->pc = 0x4D8F90u;
            goto label_4d8f90;
        }
    }
    ctx->pc = 0x4D8EC0u;
label_4d8ec0:
    // 0x4d8ec0: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x4d8ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x4d8ec4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d8ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d8ec8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4d8ec8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d8ecc:
    // 0x4d8ecc: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x4d8eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x4d8ed0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D8ED0u;
    {
        const bool branch_taken_0x4d8ed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8ed0) {
            ctx->pc = 0x4D8EF0u;
            goto label_4d8ef0;
        }
    }
    ctx->pc = 0x4D8ED8u;
    // 0x4d8ed8: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x4d8ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d8edc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d8edcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8ee0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8EE0u;
    {
        const bool branch_taken_0x4d8ee0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8ee0) {
            ctx->pc = 0x4D8EF0u;
            goto label_4d8ef0;
        }
    }
    ctx->pc = 0x4D8EE8u;
    // 0x4d8ee8: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x4d8ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d8eec: 0x0  nop
    ctx->pc = 0x4d8eecu;
    // NOP
label_4d8ef0:
    // 0x4d8ef0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4d8ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4d8ef4: 0x2c64000c  sltiu       $a0, $v1, 0xC
    ctx->pc = 0x4d8ef4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d8ef8: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4D8EF8u;
    {
        const bool branch_taken_0x4d8ef8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8EF8u;
            // 0x4d8efc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8ef8) {
            ctx->pc = 0x4D8ECCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8ecc;
        }
    }
    ctx->pc = 0x4D8F00u;
    // 0x4d8f00: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4D8F00u;
    {
        const bool branch_taken_0x4d8f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8f00) {
            ctx->pc = 0x4D8F90u;
            goto label_4d8f90;
        }
    }
    ctx->pc = 0x4D8F08u;
label_4d8f08:
    // 0x4d8f08: 0x3c0440c0  lui         $a0, 0x40C0
    ctx->pc = 0x4d8f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16576 << 16));
    // 0x4d8f0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d8f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d8f10: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4d8f10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d8f14:
    // 0x4d8f14: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x4d8f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x4d8f18: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D8F18u;
    {
        const bool branch_taken_0x4d8f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8f18) {
            ctx->pc = 0x4D8F38u;
            goto label_4d8f38;
        }
    }
    ctx->pc = 0x4D8F20u;
    // 0x4d8f20: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x4d8f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d8f24: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d8f24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8f28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8F28u;
    {
        const bool branch_taken_0x4d8f28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8f28) {
            ctx->pc = 0x4D8F38u;
            goto label_4d8f38;
        }
    }
    ctx->pc = 0x4D8F30u;
    // 0x4d8f30: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x4d8f30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d8f34: 0x0  nop
    ctx->pc = 0x4d8f34u;
    // NOP
label_4d8f38:
    // 0x4d8f38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4d8f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4d8f3c: 0x2c64000c  sltiu       $a0, $v1, 0xC
    ctx->pc = 0x4d8f3cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d8f40: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4D8F40u;
    {
        const bool branch_taken_0x4d8f40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8F40u;
            // 0x4d8f44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8f40) {
            ctx->pc = 0x4D8F14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8f14;
        }
    }
    ctx->pc = 0x4D8F48u;
    // 0x4d8f48: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4D8F48u;
    {
        const bool branch_taken_0x4d8f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8f48) {
            ctx->pc = 0x4D8F90u;
            goto label_4d8f90;
        }
    }
    ctx->pc = 0x4D8F50u;
label_4d8f50:
    // 0x4d8f50: 0x3c044130  lui         $a0, 0x4130
    ctx->pc = 0x4d8f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16688 << 16));
    // 0x4d8f54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d8f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d8f58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4d8f58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d8f5c:
    // 0x4d8f5c: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x4d8f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x4d8f60: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D8F60u;
    {
        const bool branch_taken_0x4d8f60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8f60) {
            ctx->pc = 0x4D8F80u;
            goto label_4d8f80;
        }
    }
    ctx->pc = 0x4D8F68u;
    // 0x4d8f68: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x4d8f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d8f6c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d8f6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8f70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8F70u;
    {
        const bool branch_taken_0x4d8f70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8f70) {
            ctx->pc = 0x4D8F80u;
            goto label_4d8f80;
        }
    }
    ctx->pc = 0x4D8F78u;
    // 0x4d8f78: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x4d8f78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d8f7c: 0x0  nop
    ctx->pc = 0x4d8f7cu;
    // NOP
label_4d8f80:
    // 0x4d8f80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4d8f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4d8f84: 0x2c64000c  sltiu       $a0, $v1, 0xC
    ctx->pc = 0x4d8f84u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d8f88: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4D8F88u;
    {
        const bool branch_taken_0x4d8f88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8F88u;
            // 0x4d8f8c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8f88) {
            ctx->pc = 0x4D8F5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8f5c;
        }
    }
    ctx->pc = 0x4D8F90u;
label_4d8f90:
    // 0x4d8f90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d8f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d8f94: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4d8f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d8f98: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4d8f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d8f9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4d8f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d8fa0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4d8fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d8fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x4D8FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D8FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8FA4u;
            // 0x4d8fa8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D8FACu;
    // 0x4d8fac: 0x0  nop
    ctx->pc = 0x4d8facu;
    // NOP
    // 0x4d8fb0: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x4d8fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x4d8fb4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d8fb8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4d8fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4d8fbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d8fbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d8fc0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4d8fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x4d8fc4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4d8fc4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4d8fc8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4d8fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4d8fcc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4d8fccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x4d8fd0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4d8fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4d8fd4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4d8fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4d8fd8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4d8fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4d8fdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4d8fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4d8fe0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4d8fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4d8fe4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4d8fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8fe8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4d8fe8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4d8fec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d8fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8ff0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4d8ff0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4d8ff4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4d8ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x4d8ff8: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x4d8ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x4d8ffc: 0x8c73000c  lw          $s3, 0xC($v1)
    ctx->pc = 0x4d8ffcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4d9000: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4d9000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4d9004: 0xa7a20194  sh          $v0, 0x194($sp)
    ctx->pc = 0x4d9004u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 404), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d9008: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x4d9008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x4d900c: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x4d900cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
    // 0x4d9010: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x4d9010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x4d9014: 0xa7a00190  sh          $zero, 0x190($sp)
    ctx->pc = 0x4d9014u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 400), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d9018: 0xa7a00192  sh          $zero, 0x192($sp)
    ctx->pc = 0x4d9018u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 402), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d901c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4D901Cu;
    SET_GPR_U32(ctx, 31, 0x4D9024u);
    ctx->pc = 0x4D9020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D901Cu;
            // 0x4d9020: 0xa7a00196  sh          $zero, 0x196($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 406), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9024u; }
        if (ctx->pc != 0x4D9024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9024u; }
        if (ctx->pc != 0x4D9024u) { return; }
    }
    ctx->pc = 0x4D9024u;
label_4d9024:
    // 0x4d9024: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d9024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d9028: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4d9028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x4d902c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4d902cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4d9030: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4D9030u;
    SET_GPR_U32(ctx, 31, 0x4D9038u);
    ctx->pc = 0x4D9034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9030u;
            // 0x4d9034: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9038u; }
        if (ctx->pc != 0x4D9038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9038u; }
        if (ctx->pc != 0x4D9038u) { return; }
    }
    ctx->pc = 0x4D9038u;
label_4d9038:
    // 0x4d9038: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d9038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d903c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4d903cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x4d9040: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4d9040u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4d9044: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4D9044u;
    SET_GPR_U32(ctx, 31, 0x4D904Cu);
    ctx->pc = 0x4D9048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9044u;
            // 0x4d9048: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D904Cu; }
        if (ctx->pc != 0x4D904Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D904Cu; }
        if (ctx->pc != 0x4D904Cu) { return; }
    }
    ctx->pc = 0x4D904Cu;
label_4d904c:
    // 0x4d904c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d904cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d9050: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x4d9050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x4d9054: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4d9054u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4d9058: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4D9058u;
    SET_GPR_U32(ctx, 31, 0x4D9060u);
    ctx->pc = 0x4D905Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9058u;
            // 0x4d905c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9060u; }
        if (ctx->pc != 0x4D9060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9060u; }
        if (ctx->pc != 0x4D9060u) { return; }
    }
    ctx->pc = 0x4D9060u;
label_4d9060:
    // 0x4d9060: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x4d9060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x4d9064: 0x546003a1  bnel        $v1, $zero, . + 4 + (0x3A1 << 2)
    ctx->pc = 0x4D9064u;
    {
        const bool branch_taken_0x4d9064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d9064) {
            ctx->pc = 0x4D9068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9064u;
            // 0x4d9068: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D9EECu;
            goto label_4d9eec;
        }
    }
    ctx->pc = 0x4D906Cu;
    // 0x4d906c: 0x3c03421c  lui         $v1, 0x421C
    ctx->pc = 0x4d906cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16924 << 16));
    // 0x4d9070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d9070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d9074: 0xae0300ec  sw          $v1, 0xEC($s0)
    ctx->pc = 0x4d9074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 3));
    // 0x4d9078: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x4d9078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x4d907c: 0x82250e3f  lb          $a1, 0xE3F($s1)
    ctx->pc = 0x4d907cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3647)));
    // 0x4d9080: 0xc135ff4  jal         func_4D7FD0
    ctx->pc = 0x4D9080u;
    SET_GPR_U32(ctx, 31, 0x4D9088u);
    ctx->pc = 0x4D9084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9080u;
            // 0x4d9084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D7FD0u;
    if (runtime->hasFunction(0x4D7FD0u)) {
        auto targetFn = runtime->lookupFunction(0x4D7FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9088u; }
        if (ctx->pc != 0x4D9088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D7FD0_0x4d7fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9088u; }
        if (ctx->pc != 0x4D9088u) { return; }
    }
    ctx->pc = 0x4D9088u;
label_4d9088:
    // 0x4d9088: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4d9088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d908c: 0x14430026  bne         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x4D908Cu;
    {
        const bool branch_taken_0x4d908c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4D9090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D908Cu;
            // 0x4d9090: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d908c) {
            ctx->pc = 0x4D9128u;
            goto label_4d9128;
        }
    }
    ctx->pc = 0x4D9094u;
    // 0x4d9094: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x4D9094u;
    SET_GPR_U32(ctx, 31, 0x4D909Cu);
    ctx->pc = 0x4D9098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9094u;
            // 0x4d9098: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D909Cu; }
        if (ctx->pc != 0x4D909Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D909Cu; }
        if (ctx->pc != 0x4D909Cu) { return; }
    }
    ctx->pc = 0x4D909Cu;
label_4d909c:
    // 0x4d909c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x4d909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4d90a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4d90a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4d90a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D90A4u;
    {
        const bool branch_taken_0x4d90a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d90a4) {
            ctx->pc = 0x4D90A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D90A4u;
            // 0x4d90a8: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D90B8u;
            goto label_4d90b8;
        }
    }
    ctx->pc = 0x4D90ACu;
    // 0x4d90ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d90acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d90b0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4D90B0u;
    {
        const bool branch_taken_0x4d90b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D90B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D90B0u;
            // 0x4d90b4: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d90b0) {
            ctx->pc = 0x4D9128u;
            goto label_4d9128;
        }
    }
    ctx->pc = 0x4D90B8u;
label_4d90b8:
    // 0x4d90b8: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x4D90B8u;
    SET_GPR_U32(ctx, 31, 0x4D90C0u);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D90C0u; }
        if (ctx->pc != 0x4D90C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D90C0u; }
        if (ctx->pc != 0x4D90C0u) { return; }
    }
    ctx->pc = 0x4D90C0u;
label_4d90c0:
    // 0x4d90c0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x4d90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4d90c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4d90c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4d90c8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D90C8u;
    {
        const bool branch_taken_0x4d90c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d90c8) {
            ctx->pc = 0x4D90CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D90C8u;
            // 0x4d90cc: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D90D8u;
            goto label_4d90d8;
        }
    }
    ctx->pc = 0x4D90D0u;
    // 0x4d90d0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4D90D0u;
    {
        const bool branch_taken_0x4d90d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D90D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D90D0u;
            // 0x4d90d4: 0xae0000f4  sw          $zero, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d90d0) {
            ctx->pc = 0x4D9128u;
            goto label_4d9128;
        }
    }
    ctx->pc = 0x4D90D8u;
label_4d90d8:
    // 0x4d90d8: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x4D90D8u;
    SET_GPR_U32(ctx, 31, 0x4D90E0u);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D90E0u; }
        if (ctx->pc != 0x4D90E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D90E0u; }
        if (ctx->pc != 0x4D90E0u) { return; }
    }
    ctx->pc = 0x4D90E0u;
label_4d90e0:
    // 0x4d90e0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x4d90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4d90e4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4d90e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x4d90e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D90E8u;
    {
        const bool branch_taken_0x4d90e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d90e8) {
            ctx->pc = 0x4D90ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D90E8u;
            // 0x4d90ec: 0x8e230db0  lw          $v1, 0xDB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D90FCu;
            goto label_4d90fc;
        }
    }
    ctx->pc = 0x4D90F0u;
    // 0x4d90f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4d90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d90f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4D90F4u;
    {
        const bool branch_taken_0x4d90f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D90F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D90F4u;
            // 0x4d90f8: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d90f4) {
            ctx->pc = 0x4D9128u;
            goto label_4d9128;
        }
    }
    ctx->pc = 0x4D90FCu;
label_4d90fc:
    // 0x4d90fc: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x4d90fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x4d9100: 0x54200008  bnel        $at, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D9100u;
    {
        const bool branch_taken_0x4d9100 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d9100) {
            ctx->pc = 0x4D9104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9100u;
            // 0x4d9104: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D9124u;
            goto label_4d9124;
        }
    }
    ctx->pc = 0x4D9108u;
    // 0x4d9108: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x4d9108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4d910c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D910Cu;
    {
        const bool branch_taken_0x4d910c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4d910c) {
            ctx->pc = 0x4D9120u;
            goto label_4d9120;
        }
    }
    ctx->pc = 0x4D9114u;
    // 0x4d9114: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4d9114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4d9118: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4D9118u;
    {
        const bool branch_taken_0x4d9118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D911Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9118u;
            // 0x4d911c: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9118) {
            ctx->pc = 0x4D9128u;
            goto label_4d9128;
        }
    }
    ctx->pc = 0x4D9120u;
label_4d9120:
    // 0x4d9120: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4d9120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4d9124:
    // 0x4d9124: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x4d9124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_4d9128:
    // 0x4d9128: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d9128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4d912c: 0x8c43aa30  lw          $v1, -0x55D0($v0)
    ctx->pc = 0x4d912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945328)));
    // 0x4d9130: 0xc6140030  lwc1        $f20, 0x30($s0)
    ctx->pc = 0x4d9130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d9134: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x4d9134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x4d9138: 0x8c710070  lw          $s1, 0x70($v1)
    ctx->pc = 0x4d9138u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x4d913c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4D913Cu;
    {
        const bool branch_taken_0x4d913c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D913Cu;
            // 0x4d9140: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d913c) {
            ctx->pc = 0x4D91B8u;
            goto label_4d91b8;
        }
    }
    ctx->pc = 0x4D9144u;
    // 0x4d9144: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d9144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d9148:
    // 0x4d9148: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x4d9148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x4d914c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4d914cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d9150: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4D9150u;
    {
        const bool branch_taken_0x4d9150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4d9150) {
            ctx->pc = 0x4D9180u;
            goto label_4d9180;
        }
    }
    ctx->pc = 0x4D9158u;
    // 0x4d9158: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d9158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4d915c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d915cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d9160: 0x8c42aa30  lw          $v0, -0x55D0($v0)
    ctx->pc = 0x4d9160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945328)));
    // 0x4d9164: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4d9164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x4d9168: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4d9168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x4d916c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d916cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d9170: 0xc1346b4  jal         func_4D1AD0
    ctx->pc = 0x4D9170u;
    SET_GPR_U32(ctx, 31, 0x4D9178u);
    ctx->pc = 0x4D9174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9170u;
            // 0x4d9174: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D1AD0u;
    if (runtime->hasFunction(0x4D1AD0u)) {
        auto targetFn = runtime->lookupFunction(0x4D1AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9178u; }
        if (ctx->pc != 0x4D9178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D1AD0_0x4d1ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9178u; }
        if (ctx->pc != 0x4D9178u) { return; }
    }
    ctx->pc = 0x4D9178u;
label_4d9178:
    // 0x4d9178: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4D9178u;
    {
        const bool branch_taken_0x4d9178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9178) {
            ctx->pc = 0x4D91A8u;
            goto label_4d91a8;
        }
    }
    ctx->pc = 0x4D9180u;
label_4d9180:
    // 0x4d9180: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d9180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4d9184: 0x8c42aa30  lw          $v0, -0x55D0($v0)
    ctx->pc = 0x4d9184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945328)));
    // 0x4d9188: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4d9188u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4d918c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4d918cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x4d9190: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4d9190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x4d9194: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d9194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d9198: 0xc1346b4  jal         func_4D1AD0
    ctx->pc = 0x4D9198u;
    SET_GPR_U32(ctx, 31, 0x4D91A0u);
    ctx->pc = 0x4D919Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9198u;
            // 0x4d919c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D1AD0u;
    if (runtime->hasFunction(0x4D1AD0u)) {
        auto targetFn = runtime->lookupFunction(0x4D1AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D91A0u; }
        if (ctx->pc != 0x4D91A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D1AD0_0x4d1ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D91A0u; }
        if (ctx->pc != 0x4D91A0u) { return; }
    }
    ctx->pc = 0x4D91A0u;
label_4d91a0:
    // 0x4d91a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D91A0u;
    {
        const bool branch_taken_0x4d91a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d91a0) {
            ctx->pc = 0x4D91B8u;
            goto label_4d91b8;
        }
    }
    ctx->pc = 0x4D91A8u;
label_4d91a8:
    // 0x4d91a8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4d91a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4d91ac: 0x291102b  sltu        $v0, $s4, $s1
    ctx->pc = 0x4d91acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4d91b0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x4D91B0u;
    {
        const bool branch_taken_0x4d91b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D91B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D91B0u;
            // 0x4d91b4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d91b0) {
            ctx->pc = 0x4D9148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d9148;
        }
    }
    ctx->pc = 0x4D91B8u;
label_4d91b8:
    // 0x4d91b8: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x4d91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x4d91bc: 0x2c41000d  sltiu       $at, $v0, 0xD
    ctx->pc = 0x4d91bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x4d91c0: 0x10200345  beqz        $at, . + 4 + (0x345 << 2)
    ctx->pc = 0x4D91C0u;
    {
        const bool branch_taken_0x4d91c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d91c0) {
            ctx->pc = 0x4D9ED8u;
            goto label_4d9ed8;
        }
    }
    ctx->pc = 0x4D91C8u;
    // 0x4d91c8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4d91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4d91cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d91ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d91d0: 0x24637fc0  addiu       $v1, $v1, 0x7FC0
    ctx->pc = 0x4d91d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32704));
    // 0x4d91d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d91d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4d91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d91dc: 0x400008  jr          $v0
    ctx->pc = 0x4D91DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4D91E4u: goto label_4d91e4;
            case 0x4D9324u: goto label_4d9324;
            case 0x4D9444u: goto label_4d9444;
            case 0x4D9600u: goto label_4d9600;
            case 0x4D9740u: goto label_4d9740;
            case 0x4D983Cu: goto label_4d983c;
            case 0x4D9950u: goto label_4d9950;
            case 0x4D9A60u: goto label_4d9a60;
            case 0x4D9B70u: goto label_4d9b70;
            case 0x4D9CA0u: goto label_4d9ca0;
            case 0x4D9DD0u: goto label_4d9dd0;
            case 0x4D9ED8u: goto label_4d9ed8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x4D91E4u;
label_4d91e4:
    // 0x4d91e4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x4d91e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d91e8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4d91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4d91ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4d91ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d91f0: 0x0  nop
    ctx->pc = 0x4d91f0u;
    // NOP
    // 0x4d91f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4d91f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d91f8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x4D91F8u;
    {
        const bool branch_taken_0x4d91f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d91f8) {
            ctx->pc = 0x4D91FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D91F8u;
            // 0x4d91fc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D9210u;
            goto label_4d9210;
        }
    }
    ctx->pc = 0x4D9200u;
    // 0x4d9200: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d9200u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d9204: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4d9204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4d9208: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4D9208u;
    {
        const bool branch_taken_0x4d9208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D920Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9208u;
            // 0x4d920c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9208) {
            ctx->pc = 0x4D9228u;
            goto label_4d9228;
        }
    }
    ctx->pc = 0x4D9210u;
label_4d9210:
    // 0x4d9210: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4d9210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4d9214: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d9214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d9218: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4d9218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4d921c: 0x0  nop
    ctx->pc = 0x4d921cu;
    // NOP
    // 0x4d9220: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4d9220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4d9224: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4d9224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d9228:
    // 0x4d9228: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4d9228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x4d922c: 0xc0b89e4  jal         func_2E2790
    ctx->pc = 0x4D922Cu;
    SET_GPR_U32(ctx, 31, 0x4D9234u);
    ctx->pc = 0x4D9230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D922Cu;
            // 0x4d9230: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9234u; }
        if (ctx->pc != 0x4D9234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9234u; }
        if (ctx->pc != 0x4D9234u) { return; }
    }
    ctx->pc = 0x4D9234u;
label_4d9234:
    // 0x4d9234: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x4d9234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x4d9238: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d9238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d923c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x4d923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x4d9240: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x4d9240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x4d9244: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4d9244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d9248: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4d9248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d924c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x4d924cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9250: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4d9250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4d9254: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x4d9254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d9258: 0xe7a20240  swc1        $f2, 0x240($sp)
    ctx->pc = 0x4d9258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x4d925c: 0xe7a10244  swc1        $f1, 0x244($sp)
    ctx->pc = 0x4d925cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x4d9260: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x4d9260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x4d9264: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x4d9264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d9268: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x4d9268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d926c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4d926cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9270: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x4d9270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d9274: 0xc7b50248  lwc1        $f21, 0x248($sp)
    ctx->pc = 0x4d9274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4d9278: 0xc7b40244  lwc1        $f20, 0x244($sp)
    ctx->pc = 0x4d9278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d927c: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x4d927cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x4d9280: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x4d9280u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x4d9284: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x4d9284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x4d9288: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x4d9288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x4d928c: 0xc7af0240  lwc1        $f15, 0x240($sp)
    ctx->pc = 0x4d928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d9290: 0xc7ac0130  lwc1        $f12, 0x130($sp)
    ctx->pc = 0x4d9290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d9294: 0xc7ad0134  lwc1        $f13, 0x134($sp)
    ctx->pc = 0x4d9294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d9298: 0xc7ae0138  lwc1        $f14, 0x138($sp)
    ctx->pc = 0x4d9298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d929c: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x4d929cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
    // 0x4d92a0: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x4D92A0u;
    SET_GPR_U32(ctx, 31, 0x4D92A8u);
    ctx->pc = 0x4D92A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D92A0u;
            // 0x4d92a4: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D92A8u; }
        if (ctx->pc != 0x4D92A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D92A8u; }
        if (ctx->pc != 0x4D92A8u) { return; }
    }
    ctx->pc = 0x4D92A8u;
label_4d92a8:
    // 0x4d92a8: 0x8e040300  lw          $a0, 0x300($s0)
    ctx->pc = 0x4d92a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x4d92ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d92acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d92b0: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x4D92B0u;
    SET_GPR_U32(ctx, 31, 0x4D92B8u);
    ctx->pc = 0x4D92B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D92B0u;
            // 0x4d92b4: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D92B8u; }
        if (ctx->pc != 0x4D92B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D92B8u; }
        if (ctx->pc != 0x4D92B8u) { return; }
    }
    ctx->pc = 0x4D92B8u;
label_4d92b8:
    // 0x4d92b8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x4d92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x4d92bc: 0xc7af0240  lwc1        $f15, 0x240($sp)
    ctx->pc = 0x4d92bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d92c0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x4d92c0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x4d92c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d92c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d92c8: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x4d92c8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
    // 0x4d92cc: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x4d92ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x4d92d0: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x4d92d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x4d92d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4d92d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d92d8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4d92d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4d92dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4d92dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4d92e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4d92e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4d92e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d92e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d92e8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x4d92e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d92ec: 0xe7ac0130  swc1        $f12, 0x130($sp)
    ctx->pc = 0x4d92ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x4d92f0: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x4d92f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d92f4: 0xe7ad0134  swc1        $f13, 0x134($sp)
    ctx->pc = 0x4d92f4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x4d92f8: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x4d92f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d92fc: 0xe7ae0138  swc1        $f14, 0x138($sp)
    ctx->pc = 0x4d92fcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x4d9300: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x4d9300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d9304: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x4D9304u;
    SET_GPR_U32(ctx, 31, 0x4D930Cu);
    ctx->pc = 0x4D9308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9304u;
            // 0x4d9308: 0xe7a0013c  swc1        $f0, 0x13C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D930Cu; }
        if (ctx->pc != 0x4D930Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D930Cu; }
        if (ctx->pc != 0x4D930Cu) { return; }
    }
    ctx->pc = 0x4D930Cu;
label_4d930c:
    // 0x4d930c: 0x8e040300  lw          $a0, 0x300($s0)
    ctx->pc = 0x4d930cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x4d9310: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d9310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d9314: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x4D9314u;
    SET_GPR_U32(ctx, 31, 0x4D931Cu);
    ctx->pc = 0x4D9318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9314u;
            // 0x4d9318: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D931Cu; }
        if (ctx->pc != 0x4D931Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D931Cu; }
        if (ctx->pc != 0x4D931Cu) { return; }
    }
    ctx->pc = 0x4D931Cu;
label_4d931c:
    // 0x4d931c: 0x100002ee  b           . + 4 + (0x2EE << 2)
    ctx->pc = 0x4D931Cu;
    {
        const bool branch_taken_0x4d931c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d931c) {
            ctx->pc = 0x4D9ED8u;
            goto label_4d9ed8;
        }
    }
    ctx->pc = 0x4D9324u;
label_4d9324:
    // 0x4d9324: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d9324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9328: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x4d9328u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d932c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4d932cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d9330:
    // 0x4d9330: 0x8e910158  lw          $s1, 0x158($s4)
    ctx->pc = 0x4d9330u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 344)));
    // 0x4d9334: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x4D9334u;
    {
        const bool branch_taken_0x4d9334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9334) {
            ctx->pc = 0x4D9428u;
            goto label_4d9428;
        }
    }
    ctx->pc = 0x4D933Cu;
    // 0x4d933c: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x4d933cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d9340: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x4d9340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x4d9344: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4d9344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9348: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d9348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d934c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x4d934cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d9350: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x4d9350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4d9354: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x4d9354u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x4d9358: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x4d9358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x4d935c: 0xc4430018  lwc1        $f3, 0x18($v0)
    ctx->pc = 0x4d935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d9360: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x4d9360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x4d9364: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x4d9364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d9368: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x4d9368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d936c: 0xe7a30230  swc1        $f3, 0x230($sp)
    ctx->pc = 0x4d936cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x4d9370: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x4d9370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x4d9374: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x4d9374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9378: 0xe7a20234  swc1        $f2, 0x234($sp)
    ctx->pc = 0x4d9378u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
    // 0x4d937c: 0xc7ac0120  lwc1        $f12, 0x120($sp)
    ctx->pc = 0x4d937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d9380: 0xe7a10238  swc1        $f1, 0x238($sp)
    ctx->pc = 0x4d9380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x4d9384: 0xc7ad0124  lwc1        $f13, 0x124($sp)
    ctx->pc = 0x4d9384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d9388: 0xc7ae0128  lwc1        $f14, 0x128($sp)
    ctx->pc = 0x4d9388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d938c: 0xc7af0230  lwc1        $f15, 0x230($sp)
    ctx->pc = 0x4d938cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d9390: 0xc7b00234  lwc1        $f16, 0x234($sp)
    ctx->pc = 0x4d9390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x4d9394: 0xc7b10238  lwc1        $f17, 0x238($sp)
    ctx->pc = 0x4d9394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x4d9398: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x4D9398u;
    SET_GPR_U32(ctx, 31, 0x4D93A0u);
    ctx->pc = 0x4D939Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9398u;
            // 0x4d939c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D93A0u; }
        if (ctx->pc != 0x4D93A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D93A0u; }
        if (ctx->pc != 0x4D93A0u) { return; }
    }
    ctx->pc = 0x4D93A0u;
label_4d93a0:
    // 0x4d93a0: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d93a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d93a4: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x4D93A4u;
    SET_GPR_U32(ctx, 31, 0x4D93ACu);
    ctx->pc = 0x4D93A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D93A4u;
            // 0x4d93a8: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D93ACu; }
        if (ctx->pc != 0x4D93ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D93ACu; }
        if (ctx->pc != 0x4D93ACu) { return; }
    }
    ctx->pc = 0x4D93ACu;
label_4d93ac:
    // 0x4d93ac: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x4d93acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d93b0: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d93b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d93b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4d93b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d93b8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4d93b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4d93bc: 0xc04ce50  jal         func_133940
    ctx->pc = 0x4D93BCu;
    SET_GPR_U32(ctx, 31, 0x4D93C4u);
    ctx->pc = 0x4D93C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D93BCu;
            // 0x4d93c0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D93C4u; }
        if (ctx->pc != 0x4D93C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D93C4u; }
        if (ctx->pc != 0x4D93C4u) { return; }
    }
    ctx->pc = 0x4D93C4u;
label_4d93c4:
    // 0x4d93c4: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d93c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d93c8: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4D93C8u;
    SET_GPR_U32(ctx, 31, 0x4D93D0u);
    ctx->pc = 0x4D93CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D93C8u;
            // 0x4d93cc: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D93D0u; }
        if (ctx->pc != 0x4D93D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D93D0u; }
        if (ctx->pc != 0x4D93D0u) { return; }
    }
    ctx->pc = 0x4D93D0u;
label_4d93d0:
    // 0x4d93d0: 0xc040180  jal         func_100600
    ctx->pc = 0x4D93D0u;
    SET_GPR_U32(ctx, 31, 0x4D93D8u);
    ctx->pc = 0x4D93D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D93D0u;
            // 0x4d93d4: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D93D8u; }
        if (ctx->pc != 0x4D93D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D93D8u; }
        if (ctx->pc != 0x4D93D8u) { return; }
    }
    ctx->pc = 0x4D93D8u;
label_4d93d8:
    // 0x4d93d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4D93D8u;
    {
        const bool branch_taken_0x4d93d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d93d8) {
            ctx->pc = 0x4D9418u;
            goto label_4d9418;
        }
    }
    ctx->pc = 0x4D93E0u;
    // 0x4d93e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d93e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d93e4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4d93e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4d93e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d93e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d93ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d93ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d93f0: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x4d93f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4d93f4: 0x26290010  addiu       $t1, $s1, 0x10
    ctx->pc = 0x4d93f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4d93f8: 0x266a0180  addiu       $t2, $s3, 0x180
    ctx->pc = 0x4d93f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d93fc: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x4d93fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d9400: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x4d9400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x4d9404: 0x24670618  addiu       $a3, $v1, 0x618
    ctx->pc = 0x4d9404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1560));
    // 0x4d9408: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4d9408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d940c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4d940cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4d9410: 0xc13d944  jal         func_4F6510
    ctx->pc = 0x4D9410u;
    SET_GPR_U32(ctx, 31, 0x4D9418u);
    ctx->pc = 0x4D9414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9410u;
            // 0x4d9414: 0x3445abd8  ori         $a1, $v0, 0xABD8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43992);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9418u; }
        if (ctx->pc != 0x4D9418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9418u; }
        if (ctx->pc != 0x4D9418u) { return; }
    }
    ctx->pc = 0x4D9418u;
label_4d9418:
    // 0x4d9418: 0x8e040300  lw          $a0, 0x300($s0)
    ctx->pc = 0x4d9418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x4d941c: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x4d941cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4d9420: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x4D9420u;
    SET_GPR_U32(ctx, 31, 0x4D9428u);
    ctx->pc = 0x4D9424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9420u;
            // 0x4d9424: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9428u; }
        if (ctx->pc != 0x4D9428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9428u; }
        if (ctx->pc != 0x4D9428u) { return; }
    }
    ctx->pc = 0x4D9428u;
label_4d9428:
    // 0x4d9428: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d9428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4d942c: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x4d942cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4d9430: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4d9430u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x4d9434: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x4D9434u;
    {
        const bool branch_taken_0x4d9434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9434u;
            // 0x4d9438: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9434) {
            ctx->pc = 0x4D9330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d9330;
        }
    }
    ctx->pc = 0x4D943Cu;
    // 0x4d943c: 0x100002a6  b           . + 4 + (0x2A6 << 2)
    ctx->pc = 0x4D943Cu;
    {
        const bool branch_taken_0x4d943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d943c) {
            ctx->pc = 0x4D9ED8u;
            goto label_4d9ed8;
        }
    }
    ctx->pc = 0x4D9444u;
label_4d9444:
    // 0x4d9444: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d9444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9448: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4d9448u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d944c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x4d944cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9450: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4d9450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d9454:
    // 0x4d9454: 0x8e910148  lw          $s1, 0x148($s4)
    ctx->pc = 0x4d9454u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x4d9458: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x4D9458u;
    {
        const bool branch_taken_0x4d9458 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9458) {
            ctx->pc = 0x4D94E8u;
            goto label_4d94e8;
        }
    }
    ctx->pc = 0x4D9460u;
    // 0x4d9460: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9464: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x4D9464u;
    SET_GPR_U32(ctx, 31, 0x4D946Cu);
    ctx->pc = 0x4D9468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9464u;
            // 0x4d9468: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D946Cu; }
        if (ctx->pc != 0x4D946Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D946Cu; }
        if (ctx->pc != 0x4D946Cu) { return; }
    }
    ctx->pc = 0x4D946Cu;
label_4d946c:
    // 0x4d946c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4d946cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x4d9470: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4d9474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d9478: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4d9478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d947c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4d947cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4d9480: 0xc04ce50  jal         func_133940
    ctx->pc = 0x4D9480u;
    SET_GPR_U32(ctx, 31, 0x4D9488u);
    ctx->pc = 0x4D9484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9480u;
            // 0x4d9484: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9488u; }
        if (ctx->pc != 0x4D9488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9488u; }
        if (ctx->pc != 0x4D9488u) { return; }
    }
    ctx->pc = 0x4D9488u;
label_4d9488:
    // 0x4d9488: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d948c: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4D948Cu;
    SET_GPR_U32(ctx, 31, 0x4D9494u);
    ctx->pc = 0x4D9490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D948Cu;
            // 0x4d9490: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9494u; }
        if (ctx->pc != 0x4D9494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9494u; }
        if (ctx->pc != 0x4D9494u) { return; }
    }
    ctx->pc = 0x4D9494u;
label_4d9494:
    // 0x4d9494: 0xc040180  jal         func_100600
    ctx->pc = 0x4D9494u;
    SET_GPR_U32(ctx, 31, 0x4D949Cu);
    ctx->pc = 0x4D9498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9494u;
            // 0x4d9498: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D949Cu; }
        if (ctx->pc != 0x4D949Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D949Cu; }
        if (ctx->pc != 0x4D949Cu) { return; }
    }
    ctx->pc = 0x4D949Cu;
label_4d949c:
    // 0x4d949c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4D949Cu;
    {
        const bool branch_taken_0x4d949c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d949c) {
            ctx->pc = 0x4D94E0u;
            goto label_4d94e0;
        }
    }
    ctx->pc = 0x4D94A4u;
    // 0x4d94a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d94a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d94a8: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x4d94a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x4d94ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d94acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d94b0: 0x26290010  addiu       $t1, $s1, 0x10
    ctx->pc = 0x4d94b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4d94b4: 0x8c470e80  lw          $a3, 0xE80($v0)
    ctx->pc = 0x4d94b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4d94b8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4d94b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d94bc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4d94bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4d94c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d94c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d94c4: 0x266a0180  addiu       $t2, $s3, 0x180
    ctx->pc = 0x4d94c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d94c8: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x4d94c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d94cc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4d94ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4d94d0: 0x24e70638  addiu       $a3, $a3, 0x638
    ctx->pc = 0x4d94d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1592));
    // 0x4d94d4: 0xc13d944  jal         func_4F6510
    ctx->pc = 0x4D94D4u;
    SET_GPR_U32(ctx, 31, 0x4D94DCu);
    ctx->pc = 0x4D94D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D94D4u;
            // 0x4d94d8: 0x3445abd8  ori         $a1, $v0, 0xABD8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43992);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D94DCu; }
        if (ctx->pc != 0x4D94DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D94DCu; }
        if (ctx->pc != 0x4D94DCu) { return; }
    }
    ctx->pc = 0x4D94DCu;
label_4d94dc:
    // 0x4d94dc: 0x0  nop
    ctx->pc = 0x4d94dcu;
    // NOP
label_4d94e0:
    // 0x4d94e0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4d94e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x4d94e4: 0x0  nop
    ctx->pc = 0x4d94e4u;
    // NOP
label_4d94e8:
    // 0x4d94e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d94e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4d94ec: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x4d94ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4d94f0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4d94f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x4d94f4: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x4D94F4u;
    {
        const bool branch_taken_0x4d94f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D94F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D94F4u;
            // 0x4d94f8: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d94f4) {
            ctx->pc = 0x4D9454u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d9454;
        }
    }
    ctx->pc = 0x4D94FCu;
    // 0x4d94fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d94fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9500: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x4d9500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d9504:
    // 0x4d9504: 0x8e9100fc  lw          $s1, 0xFC($s4)
    ctx->pc = 0x4d9504u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
    // 0x4d9508: 0x12200037  beqz        $s1, . + 4 + (0x37 << 2)
    ctx->pc = 0x4D9508u;
    {
        const bool branch_taken_0x4d9508 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9508) {
            ctx->pc = 0x4D95E8u;
            goto label_4d95e8;
        }
    }
    ctx->pc = 0x4D9510u;
    // 0x4d9510: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x4d9510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x4d9514: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x4d9514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x4d9518: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x4d9518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x4d951c: 0x202b021  addu        $s6, $s0, $v0
    ctx->pc = 0x4d951cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4d9520: 0x26d30180  addiu       $s3, $s6, 0x180
    ctx->pc = 0x4d9520u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 384));
    // 0x4d9524: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x4D9524u;
    SET_GPR_U32(ctx, 31, 0x4D952Cu);
    ctx->pc = 0x4D9528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9524u;
            // 0x4d9528: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D952Cu; }
        if (ctx->pc != 0x4D952Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D952Cu; }
        if (ctx->pc != 0x4D952Cu) { return; }
    }
    ctx->pc = 0x4D952Cu;
label_4d952c:
    // 0x4d952c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4d952cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9530: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4D9530u;
    SET_GPR_U32(ctx, 31, 0x4D9538u);
    ctx->pc = 0x4D9534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9530u;
            // 0x4d9534: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9538u; }
        if (ctx->pc != 0x4D9538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9538u; }
        if (ctx->pc != 0x4D9538u) { return; }
    }
    ctx->pc = 0x4D9538u;
label_4d9538:
    // 0x4d9538: 0xc040180  jal         func_100600
    ctx->pc = 0x4D9538u;
    SET_GPR_U32(ctx, 31, 0x4D9540u);
    ctx->pc = 0x4D953Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9538u;
            // 0x4d953c: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9540u; }
        if (ctx->pc != 0x4D9540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9540u; }
        if (ctx->pc != 0x4D9540u) { return; }
    }
    ctx->pc = 0x4D9540u;
label_4d9540:
    // 0x4d9540: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4D9540u;
    {
        const bool branch_taken_0x4d9540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9540) {
            ctx->pc = 0x4D9580u;
            goto label_4d9580;
        }
    }
    ctx->pc = 0x4D9548u;
    // 0x4d9548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d9548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d954c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x4d954cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x4d9550: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d9550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d9554: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x4d9554u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9558: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4d9558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4d955c: 0x3465abd8  ori         $a1, $v1, 0xABD8
    ctx->pc = 0x4d955cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43992);
    // 0x4d9560: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d9560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d9564: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4d9564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4d9568: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d9568u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d956c: 0x26290010  addiu       $t1, $s1, 0x10
    ctx->pc = 0x4d956cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4d9570: 0x244706d8  addiu       $a3, $v0, 0x6D8
    ctx->pc = 0x4d9570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1752));
    // 0x4d9574: 0xc13d944  jal         func_4F6510
    ctx->pc = 0x4D9574u;
    SET_GPR_U32(ctx, 31, 0x4D957Cu);
    ctx->pc = 0x4D9578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9574u;
            // 0x4d9578: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D957Cu; }
        if (ctx->pc != 0x4D957Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D957Cu; }
        if (ctx->pc != 0x4D957Cu) { return; }
    }
    ctx->pc = 0x4D957Cu;
label_4d957c:
    // 0x4d957c: 0x0  nop
    ctx->pc = 0x4d957cu;
    // NOP
label_4d9580:
    // 0x4d9580: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x4d9580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x4d9584: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x4d9584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9588: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d9588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d958c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x4d958cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d9590: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x4d9590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x4d9594: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x4d9594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d9598: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x4d9598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x4d959c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x4d959cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x4d95a0: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x4d95a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d95a4: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x4d95a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d95a8: 0xe7a40220  swc1        $f4, 0x220($sp)
    ctx->pc = 0x4d95a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x4d95ac: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x4d95acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d95b0: 0xe7a30224  swc1        $f3, 0x224($sp)
    ctx->pc = 0x4d95b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
    // 0x4d95b4: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x4d95b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d95b8: 0xe7a20228  swc1        $f2, 0x228($sp)
    ctx->pc = 0x4d95b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x4d95bc: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x4d95bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x4d95c0: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x4d95c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x4d95c4: 0xc7ac0110  lwc1        $f12, 0x110($sp)
    ctx->pc = 0x4d95c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d95c8: 0xc7ad0114  lwc1        $f13, 0x114($sp)
    ctx->pc = 0x4d95c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d95cc: 0xc7ae0118  lwc1        $f14, 0x118($sp)
    ctx->pc = 0x4d95ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d95d0: 0xc7af0220  lwc1        $f15, 0x220($sp)
    ctx->pc = 0x4d95d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d95d4: 0xc7b00224  lwc1        $f16, 0x224($sp)
    ctx->pc = 0x4d95d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x4d95d8: 0xc7b10228  lwc1        $f17, 0x228($sp)
    ctx->pc = 0x4d95d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x4d95dc: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x4D95DCu;
    SET_GPR_U32(ctx, 31, 0x4D95E4u);
    ctx->pc = 0x4D95E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D95DCu;
            // 0x4d95e0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D95E4u; }
        if (ctx->pc != 0x4D95E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D95E4u; }
        if (ctx->pc != 0x4D95E4u) { return; }
    }
    ctx->pc = 0x4D95E4u;
label_4d95e4:
    // 0x4d95e4: 0x0  nop
    ctx->pc = 0x4d95e4u;
    // NOP
label_4d95e8:
    // 0x4d95e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d95e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4d95ec: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x4d95ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d95f0: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x4D95F0u;
    {
        const bool branch_taken_0x4d95f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D95F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D95F0u;
            // 0x4d95f4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d95f0) {
            ctx->pc = 0x4D9504u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d9504;
        }
    }
    ctx->pc = 0x4D95F8u;
    // 0x4d95f8: 0x10000237  b           . + 4 + (0x237 << 2)
    ctx->pc = 0x4D95F8u;
    {
        const bool branch_taken_0x4d95f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d95f8) {
            ctx->pc = 0x4D9ED8u;
            goto label_4d9ed8;
        }
    }
    ctx->pc = 0x4D9600u;
label_4d9600:
    // 0x4d9600: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d9600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9604: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4d9604u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d9608:
    // 0x4d9608: 0x8e710104  lw          $s1, 0x104($s3)
    ctx->pc = 0x4d9608u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x4d960c: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
    ctx->pc = 0x4D960Cu;
    {
        const bool branch_taken_0x4d960c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d960c) {
            ctx->pc = 0x4D9728u;
            goto label_4d9728;
        }
    }
    ctx->pc = 0x4D9614u;
    // 0x4d9614: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x4d9614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9618: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4d9618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4d961c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4d961cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d9620: 0x0  nop
    ctx->pc = 0x4d9620u;
    // NOP
    // 0x4d9624: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d9624u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d9628: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x4D9628u;
    {
        const bool branch_taken_0x4d9628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d9628) {
            ctx->pc = 0x4D96B0u;
            goto label_4d96b0;
        }
    }
    ctx->pc = 0x4D9630u;
    // 0x4d9630: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x4d9630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x4d9634: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x4D9634u;
    SET_GPR_U32(ctx, 31, 0x4D963Cu);
    ctx->pc = 0x4D9638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9634u;
            // 0x4d9638: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D963Cu; }
        if (ctx->pc != 0x4D963Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D963Cu; }
        if (ctx->pc != 0x4D963Cu) { return; }
    }
    ctx->pc = 0x4D963Cu;
label_4d963c:
    // 0x4d963c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4d963cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x4d9640: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x4d9640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x4d9644: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4d9644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d9648: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4d9648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d964c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4d964cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4d9650: 0xc04ce50  jal         func_133940
    ctx->pc = 0x4D9650u;
    SET_GPR_U32(ctx, 31, 0x4D9658u);
    ctx->pc = 0x4D9654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9650u;
            // 0x4d9654: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9658u; }
        if (ctx->pc != 0x4D9658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9658u; }
        if (ctx->pc != 0x4D9658u) { return; }
    }
    ctx->pc = 0x4D9658u;
label_4d9658:
    // 0x4d9658: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x4d9658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x4d965c: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4D965Cu;
    SET_GPR_U32(ctx, 31, 0x4D9664u);
    ctx->pc = 0x4D9660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D965Cu;
            // 0x4d9660: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9664u; }
        if (ctx->pc != 0x4D9664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9664u; }
        if (ctx->pc != 0x4D9664u) { return; }
    }
    ctx->pc = 0x4D9664u;
label_4d9664:
    // 0x4d9664: 0xc040180  jal         func_100600
    ctx->pc = 0x4D9664u;
    SET_GPR_U32(ctx, 31, 0x4D966Cu);
    ctx->pc = 0x4D9668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9664u;
            // 0x4d9668: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D966Cu; }
        if (ctx->pc != 0x4D966Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D966Cu; }
        if (ctx->pc != 0x4D966Cu) { return; }
    }
    ctx->pc = 0x4D966Cu;
label_4d966c:
    // 0x4d966c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x4D966Cu;
    {
        const bool branch_taken_0x4d966c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d966c) {
            ctx->pc = 0x4D9718u;
            goto label_4d9718;
        }
    }
    ctx->pc = 0x4D9674u;
    // 0x4d9674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d9674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9678: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4d9678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4d967c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d967cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d9680: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d9680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9684: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x4d9684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4d9688: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d9688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d968c: 0x26290010  addiu       $t1, $s1, 0x10
    ctx->pc = 0x4d968cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4d9690: 0x260a0180  addiu       $t2, $s0, 0x180
    ctx->pc = 0x4d9690u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x4d9694: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x4d9694u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d9698: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4d9698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4d969c: 0x24670698  addiu       $a3, $v1, 0x698
    ctx->pc = 0x4d969cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1688));
    // 0x4d96a0: 0xc13d944  jal         func_4F6510
    ctx->pc = 0x4D96A0u;
    SET_GPR_U32(ctx, 31, 0x4D96A8u);
    ctx->pc = 0x4D96A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D96A0u;
            // 0x4d96a4: 0x3445abd8  ori         $a1, $v0, 0xABD8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43992);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D96A8u; }
        if (ctx->pc != 0x4D96A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D96A8u; }
        if (ctx->pc != 0x4D96A8u) { return; }
    }
    ctx->pc = 0x4D96A8u;
label_4d96a8:
    // 0x4d96a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4D96A8u;
    {
        const bool branch_taken_0x4d96a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d96a8) {
            ctx->pc = 0x4D9718u;
            goto label_4d9718;
        }
    }
    ctx->pc = 0x4D96B0u;
label_4d96b0:
    // 0x4d96b0: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x4d96b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x4d96b4: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x4d96b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d96b8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d96b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d96bc: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x4d96bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d96c0: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x4d96c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x4d96c4: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x4d96c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d96c8: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x4d96c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x4d96cc: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x4d96ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x4d96d0: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x4d96d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d96d4: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x4d96d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d96d8: 0xe7a40210  swc1        $f4, 0x210($sp)
    ctx->pc = 0x4d96d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x4d96dc: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x4d96dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d96e0: 0xe7a30214  swc1        $f3, 0x214($sp)
    ctx->pc = 0x4d96e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x4d96e4: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x4d96e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d96e8: 0xe7a20218  swc1        $f2, 0x218($sp)
    ctx->pc = 0x4d96e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x4d96ec: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x4d96ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x4d96f0: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x4d96f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x4d96f4: 0xc7ac0100  lwc1        $f12, 0x100($sp)
    ctx->pc = 0x4d96f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d96f8: 0xc7ad0104  lwc1        $f13, 0x104($sp)
    ctx->pc = 0x4d96f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d96fc: 0xc7ae0108  lwc1        $f14, 0x108($sp)
    ctx->pc = 0x4d96fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d9700: 0xc7af0210  lwc1        $f15, 0x210($sp)
    ctx->pc = 0x4d9700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d9704: 0xc7b00214  lwc1        $f16, 0x214($sp)
    ctx->pc = 0x4d9704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x4d9708: 0xc7b10218  lwc1        $f17, 0x218($sp)
    ctx->pc = 0x4d9708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x4d970c: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x4D970Cu;
    SET_GPR_U32(ctx, 31, 0x4D9714u);
    ctx->pc = 0x4D9710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D970Cu;
            // 0x4d9710: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9714u; }
        if (ctx->pc != 0x4D9714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9714u; }
        if (ctx->pc != 0x4D9714u) { return; }
    }
    ctx->pc = 0x4D9714u;
label_4d9714:
    // 0x4d9714: 0x0  nop
    ctx->pc = 0x4d9714u;
    // NOP
label_4d9718:
    // 0x4d9718: 0x8e040300  lw          $a0, 0x300($s0)
    ctx->pc = 0x4d9718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x4d971c: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x4d971cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4d9720: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x4D9720u;
    SET_GPR_U32(ctx, 31, 0x4D9728u);
    ctx->pc = 0x4D9724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9720u;
            // 0x4d9724: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9728u; }
        if (ctx->pc != 0x4D9728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9728u; }
        if (ctx->pc != 0x4D9728u) { return; }
    }
    ctx->pc = 0x4D9728u;
label_4d9728:
    // 0x4d9728: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d9728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4d972c: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x4d972cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4d9730: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x4D9730u;
    {
        const bool branch_taken_0x4d9730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9730u;
            // 0x4d9734: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9730) {
            ctx->pc = 0x4D9608u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d9608;
        }
    }
    ctx->pc = 0x4D9738u;
    // 0x4d9738: 0x100001e7  b           . + 4 + (0x1E7 << 2)
    ctx->pc = 0x4D9738u;
    {
        const bool branch_taken_0x4d9738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9738) {
            ctx->pc = 0x4D9ED8u;
            goto label_4d9ed8;
        }
    }
    ctx->pc = 0x4D9740u;
label_4d9740:
    // 0x4d9740: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d9740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9744: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x4d9744u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9748: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4d9748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d974c:
    // 0x4d974c: 0x8e9100fc  lw          $s1, 0xFC($s4)
    ctx->pc = 0x4d974cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
    // 0x4d9750: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
    ctx->pc = 0x4D9750u;
    {
        const bool branch_taken_0x4d9750 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9750) {
            ctx->pc = 0x4D9820u;
            goto label_4d9820;
        }
    }
    ctx->pc = 0x4D9758u;
    // 0x4d9758: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d975c: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x4D975Cu;
    SET_GPR_U32(ctx, 31, 0x4D9764u);
    ctx->pc = 0x4D9760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D975Cu;
            // 0x4d9760: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9764u; }
        if (ctx->pc != 0x4D9764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9764u; }
        if (ctx->pc != 0x4D9764u) { return; }
    }
    ctx->pc = 0x4D9764u;
label_4d9764:
    // 0x4d9764: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9768: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4D9768u;
    SET_GPR_U32(ctx, 31, 0x4D9770u);
    ctx->pc = 0x4D976Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9768u;
            // 0x4d976c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9770u; }
        if (ctx->pc != 0x4D9770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9770u; }
        if (ctx->pc != 0x4D9770u) { return; }
    }
    ctx->pc = 0x4D9770u;
label_4d9770:
    // 0x4d9770: 0xc040180  jal         func_100600
    ctx->pc = 0x4D9770u;
    SET_GPR_U32(ctx, 31, 0x4D9778u);
    ctx->pc = 0x4D9774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9770u;
            // 0x4d9774: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9778u; }
        if (ctx->pc != 0x4D9778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9778u; }
        if (ctx->pc != 0x4D9778u) { return; }
    }
    ctx->pc = 0x4D9778u;
label_4d9778:
    // 0x4d9778: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4D9778u;
    {
        const bool branch_taken_0x4d9778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9778) {
            ctx->pc = 0x4D97B8u;
            goto label_4d97b8;
        }
    }
    ctx->pc = 0x4D9780u;
    // 0x4d9780: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d9780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9784: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4d9784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4d9788: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d9788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d978c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d978cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9790: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x4d9790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4d9794: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d9794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d9798: 0x26290010  addiu       $t1, $s1, 0x10
    ctx->pc = 0x4d9798u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4d979c: 0x266a0180  addiu       $t2, $s3, 0x180
    ctx->pc = 0x4d979cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d97a0: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x4d97a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d97a4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4d97a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4d97a8: 0x246706d8  addiu       $a3, $v1, 0x6D8
    ctx->pc = 0x4d97a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1752));
    // 0x4d97ac: 0xc13d944  jal         func_4F6510
    ctx->pc = 0x4D97ACu;
    SET_GPR_U32(ctx, 31, 0x4D97B4u);
    ctx->pc = 0x4D97B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D97ACu;
            // 0x4d97b0: 0x3445abd8  ori         $a1, $v0, 0xABD8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43992);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D97B4u; }
        if (ctx->pc != 0x4D97B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D97B4u; }
        if (ctx->pc != 0x4D97B4u) { return; }
    }
    ctx->pc = 0x4D97B4u;
label_4d97b4:
    // 0x4d97b4: 0x0  nop
    ctx->pc = 0x4d97b4u;
    // NOP
label_4d97b8:
    // 0x4d97b8: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x4d97b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x4d97bc: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x4d97bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d97c0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d97c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d97c4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x4d97c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d97c8: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x4d97c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x4d97cc: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x4d97ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d97d0: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x4d97d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x4d97d4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x4d97d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x4d97d8: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x4d97d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d97dc: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x4d97dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d97e0: 0xe7a40200  swc1        $f4, 0x200($sp)
    ctx->pc = 0x4d97e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x4d97e4: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x4d97e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d97e8: 0xe7a30204  swc1        $f3, 0x204($sp)
    ctx->pc = 0x4d97e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x4d97ec: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x4d97ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d97f0: 0xe7a20208  swc1        $f2, 0x208($sp)
    ctx->pc = 0x4d97f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x4d97f4: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x4d97f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x4d97f8: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x4d97f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x4d97fc: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x4d97fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d9800: 0xc7ad00f4  lwc1        $f13, 0xF4($sp)
    ctx->pc = 0x4d9800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d9804: 0xc7ae00f8  lwc1        $f14, 0xF8($sp)
    ctx->pc = 0x4d9804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d9808: 0xc7af0200  lwc1        $f15, 0x200($sp)
    ctx->pc = 0x4d9808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d980c: 0xc7b00204  lwc1        $f16, 0x204($sp)
    ctx->pc = 0x4d980cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x4d9810: 0xc7b10208  lwc1        $f17, 0x208($sp)
    ctx->pc = 0x4d9810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x4d9814: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x4D9814u;
    SET_GPR_U32(ctx, 31, 0x4D981Cu);
    ctx->pc = 0x4D9818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9814u;
            // 0x4d9818: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D981Cu; }
        if (ctx->pc != 0x4D981Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D981Cu; }
        if (ctx->pc != 0x4D981Cu) { return; }
    }
    ctx->pc = 0x4D981Cu;
label_4d981c:
    // 0x4d981c: 0x0  nop
    ctx->pc = 0x4d981cu;
    // NOP
label_4d9820:
    // 0x4d9820: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d9820u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4d9824: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x4d9824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d9828: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4d9828u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x4d982c: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x4D982Cu;
    {
        const bool branch_taken_0x4d982c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D982Cu;
            // 0x4d9830: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d982c) {
            ctx->pc = 0x4D974Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d974c;
        }
    }
    ctx->pc = 0x4D9834u;
    // 0x4d9834: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x4D9834u;
    {
        const bool branch_taken_0x4d9834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9834) {
            ctx->pc = 0x4D9ED8u;
            goto label_4d9ed8;
        }
    }
    ctx->pc = 0x4D983Cu;
label_4d983c:
    // 0x4d983c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d983cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9840: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x4d9840u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9844: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4d9844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d9848:
    // 0x4d9848: 0x8e910118  lw          $s1, 0x118($s4)
    ctx->pc = 0x4d9848u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x4d984c: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x4D984Cu;
    {
        const bool branch_taken_0x4d984c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d984c) {
            ctx->pc = 0x4D9938u;
            goto label_4d9938;
        }
    }
    ctx->pc = 0x4D9854u;
    // 0x4d9854: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x4d9854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9858: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x4d9858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x4d985c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4d985cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d9860: 0x0  nop
    ctx->pc = 0x4d9860u;
    // NOP
    // 0x4d9864: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d9864u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d9868: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x4D9868u;
    {
        const bool branch_taken_0x4d9868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d9868) {
            ctx->pc = 0x4D9938u;
            goto label_4d9938;
        }
    }
    ctx->pc = 0x4D9870u;
    // 0x4d9870: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9874: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x4D9874u;
    SET_GPR_U32(ctx, 31, 0x4D987Cu);
    ctx->pc = 0x4D9878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9874u;
            // 0x4d9878: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D987Cu; }
        if (ctx->pc != 0x4D987Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D987Cu; }
        if (ctx->pc != 0x4D987Cu) { return; }
    }
    ctx->pc = 0x4D987Cu;
label_4d987c:
    // 0x4d987c: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d987cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9880: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4D9880u;
    SET_GPR_U32(ctx, 31, 0x4D9888u);
    ctx->pc = 0x4D9884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9880u;
            // 0x4d9884: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9888u; }
        if (ctx->pc != 0x4D9888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9888u; }
        if (ctx->pc != 0x4D9888u) { return; }
    }
    ctx->pc = 0x4D9888u;
label_4d9888:
    // 0x4d9888: 0xc040180  jal         func_100600
    ctx->pc = 0x4D9888u;
    SET_GPR_U32(ctx, 31, 0x4D9890u);
    ctx->pc = 0x4D988Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9888u;
            // 0x4d988c: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9890u; }
        if (ctx->pc != 0x4D9890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9890u; }
        if (ctx->pc != 0x4D9890u) { return; }
    }
    ctx->pc = 0x4D9890u;
label_4d9890:
    // 0x4d9890: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4D9890u;
    {
        const bool branch_taken_0x4d9890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9890) {
            ctx->pc = 0x4D98D0u;
            goto label_4d98d0;
        }
    }
    ctx->pc = 0x4D9898u;
    // 0x4d9898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d9898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d989c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4d989cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4d98a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d98a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d98a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d98a8: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x4d98a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4d98ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d98acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d98b0: 0x26290010  addiu       $t1, $s1, 0x10
    ctx->pc = 0x4d98b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4d98b4: 0x266a0180  addiu       $t2, $s3, 0x180
    ctx->pc = 0x4d98b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d98b8: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x4d98b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d98bc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4d98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4d98c0: 0x246706b8  addiu       $a3, $v1, 0x6B8
    ctx->pc = 0x4d98c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1720));
    // 0x4d98c4: 0xc13d944  jal         func_4F6510
    ctx->pc = 0x4D98C4u;
    SET_GPR_U32(ctx, 31, 0x4D98CCu);
    ctx->pc = 0x4D98C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D98C4u;
            // 0x4d98c8: 0x3445abd8  ori         $a1, $v0, 0xABD8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43992);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D98CCu; }
        if (ctx->pc != 0x4D98CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D98CCu; }
        if (ctx->pc != 0x4D98CCu) { return; }
    }
    ctx->pc = 0x4D98CCu;
label_4d98cc:
    // 0x4d98cc: 0x0  nop
    ctx->pc = 0x4d98ccu;
    // NOP
label_4d98d0:
    // 0x4d98d0: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x4d98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x4d98d4: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x4d98d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d98d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d98d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d98dc: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x4d98dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d98e0: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x4d98e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x4d98e4: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x4d98e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d98e8: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x4d98e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x4d98ec: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x4d98ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x4d98f0: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x4d98f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d98f4: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x4d98f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d98f8: 0xe7a401f0  swc1        $f4, 0x1F0($sp)
    ctx->pc = 0x4d98f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x4d98fc: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x4d98fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d9900: 0xe7a301f4  swc1        $f3, 0x1F4($sp)
    ctx->pc = 0x4d9900u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x4d9904: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x4d9904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d9908: 0xe7a201f8  swc1        $f2, 0x1F8($sp)
    ctx->pc = 0x4d9908u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x4d990c: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x4d990cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x4d9910: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x4d9910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x4d9914: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x4d9914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d9918: 0xc7ad00e4  lwc1        $f13, 0xE4($sp)
    ctx->pc = 0x4d9918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d991c: 0xc7ae00e8  lwc1        $f14, 0xE8($sp)
    ctx->pc = 0x4d991cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d9920: 0xc7af01f0  lwc1        $f15, 0x1F0($sp)
    ctx->pc = 0x4d9920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d9924: 0xc7b001f4  lwc1        $f16, 0x1F4($sp)
    ctx->pc = 0x4d9924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x4d9928: 0xc7b101f8  lwc1        $f17, 0x1F8($sp)
    ctx->pc = 0x4d9928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x4d992c: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x4D992Cu;
    SET_GPR_U32(ctx, 31, 0x4D9934u);
    ctx->pc = 0x4D9930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D992Cu;
            // 0x4d9930: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9934u; }
        if (ctx->pc != 0x4D9934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9934u; }
        if (ctx->pc != 0x4D9934u) { return; }
    }
    ctx->pc = 0x4D9934u;
label_4d9934:
    // 0x4d9934: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x4d9934u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_4d9938:
    // 0x4d9938: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d9938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4d993c: 0x2e42000c  sltiu       $v0, $s2, 0xC
    ctx->pc = 0x4d993cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d9940: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x4D9940u;
    {
        const bool branch_taken_0x4d9940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9940u;
            // 0x4d9944: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9940) {
            ctx->pc = 0x4D9848u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d9848;
        }
    }
    ctx->pc = 0x4D9948u;
    // 0x4d9948: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x4D9948u;
    {
        const bool branch_taken_0x4d9948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9948) {
            ctx->pc = 0x4D9ED8u;
            goto label_4d9ed8;
        }
    }
    ctx->pc = 0x4D9950u;
label_4d9950:
    // 0x4d9950: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d9950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9954: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x4d9954u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9958: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4d9958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d995c:
    // 0x4d995c: 0x8e910118  lw          $s1, 0x118($s4)
    ctx->pc = 0x4d995cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x4d9960: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x4D9960u;
    {
        const bool branch_taken_0x4d9960 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9960) {
            ctx->pc = 0x4D9A48u;
            goto label_4d9a48;
        }
    }
    ctx->pc = 0x4D9968u;
    // 0x4d9968: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x4d9968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d996c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x4d996cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x4d9970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4d9970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d9974: 0x0  nop
    ctx->pc = 0x4d9974u;
    // NOP
    // 0x4d9978: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d9978u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d997c: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x4D997Cu;
    {
        const bool branch_taken_0x4d997c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d997c) {
            ctx->pc = 0x4D9A48u;
            goto label_4d9a48;
        }
    }
    ctx->pc = 0x4D9984u;
    // 0x4d9984: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9988: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x4D9988u;
    SET_GPR_U32(ctx, 31, 0x4D9990u);
    ctx->pc = 0x4D998Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9988u;
            // 0x4d998c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9990u; }
        if (ctx->pc != 0x4D9990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9990u; }
        if (ctx->pc != 0x4D9990u) { return; }
    }
    ctx->pc = 0x4D9990u;
label_4d9990:
    // 0x4d9990: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9994: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4D9994u;
    SET_GPR_U32(ctx, 31, 0x4D999Cu);
    ctx->pc = 0x4D9998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9994u;
            // 0x4d9998: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D999Cu; }
        if (ctx->pc != 0x4D999Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D999Cu; }
        if (ctx->pc != 0x4D999Cu) { return; }
    }
    ctx->pc = 0x4D999Cu;
label_4d999c:
    // 0x4d999c: 0xc040180  jal         func_100600
    ctx->pc = 0x4D999Cu;
    SET_GPR_U32(ctx, 31, 0x4D99A4u);
    ctx->pc = 0x4D99A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D999Cu;
            // 0x4d99a0: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D99A4u; }
        if (ctx->pc != 0x4D99A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D99A4u; }
        if (ctx->pc != 0x4D99A4u) { return; }
    }
    ctx->pc = 0x4D99A4u;
label_4d99a4:
    // 0x4d99a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4D99A4u;
    {
        const bool branch_taken_0x4d99a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d99a4) {
            ctx->pc = 0x4D99E0u;
            goto label_4d99e0;
        }
    }
    ctx->pc = 0x4D99ACu;
    // 0x4d99ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d99acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d99b0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4d99b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4d99b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d99b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d99b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d99b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d99bc: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x4d99bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4d99c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d99c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d99c4: 0x26290010  addiu       $t1, $s1, 0x10
    ctx->pc = 0x4d99c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4d99c8: 0x266a0180  addiu       $t2, $s3, 0x180
    ctx->pc = 0x4d99c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d99cc: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x4d99ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d99d0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4d99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4d99d4: 0x246706b8  addiu       $a3, $v1, 0x6B8
    ctx->pc = 0x4d99d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1720));
    // 0x4d99d8: 0xc13d944  jal         func_4F6510
    ctx->pc = 0x4D99D8u;
    SET_GPR_U32(ctx, 31, 0x4D99E0u);
    ctx->pc = 0x4D99DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D99D8u;
            // 0x4d99dc: 0x3445abd8  ori         $a1, $v0, 0xABD8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43992);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D99E0u; }
        if (ctx->pc != 0x4D99E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D99E0u; }
        if (ctx->pc != 0x4D99E0u) { return; }
    }
    ctx->pc = 0x4D99E0u;
label_4d99e0:
    // 0x4d99e0: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x4d99e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x4d99e4: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x4d99e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d99e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d99e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d99ec: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x4d99ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d99f0: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x4d99f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x4d99f4: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x4d99f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d99f8: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x4d99f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x4d99fc: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x4d99fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x4d9a00: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x4d9a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9a04: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x4d9a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d9a08: 0xe7a401e0  swc1        $f4, 0x1E0($sp)
    ctx->pc = 0x4d9a08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x4d9a0c: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x4d9a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d9a10: 0xe7a301e4  swc1        $f3, 0x1E4($sp)
    ctx->pc = 0x4d9a10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x4d9a14: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x4d9a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d9a18: 0xe7a201e8  swc1        $f2, 0x1E8($sp)
    ctx->pc = 0x4d9a18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x4d9a1c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x4d9a1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x4d9a20: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x4d9a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x4d9a24: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x4d9a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d9a28: 0xc7ad00d4  lwc1        $f13, 0xD4($sp)
    ctx->pc = 0x4d9a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d9a2c: 0xc7ae00d8  lwc1        $f14, 0xD8($sp)
    ctx->pc = 0x4d9a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d9a30: 0xc7af01e0  lwc1        $f15, 0x1E0($sp)
    ctx->pc = 0x4d9a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d9a34: 0xc7b001e4  lwc1        $f16, 0x1E4($sp)
    ctx->pc = 0x4d9a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x4d9a38: 0xc7b101e8  lwc1        $f17, 0x1E8($sp)
    ctx->pc = 0x4d9a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x4d9a3c: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x4D9A3Cu;
    SET_GPR_U32(ctx, 31, 0x4D9A44u);
    ctx->pc = 0x4D9A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9A3Cu;
            // 0x4d9a40: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9A44u; }
        if (ctx->pc != 0x4D9A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9A44u; }
        if (ctx->pc != 0x4D9A44u) { return; }
    }
    ctx->pc = 0x4D9A44u;
label_4d9a44:
    // 0x4d9a44: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x4d9a44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_4d9a48:
    // 0x4d9a48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d9a48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4d9a4c: 0x2e42000c  sltiu       $v0, $s2, 0xC
    ctx->pc = 0x4d9a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d9a50: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x4D9A50u;
    {
        const bool branch_taken_0x4d9a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9A50u;
            // 0x4d9a54: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9a50) {
            ctx->pc = 0x4D995Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d995c;
        }
    }
    ctx->pc = 0x4D9A58u;
    // 0x4d9a58: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x4D9A58u;
    {
        const bool branch_taken_0x4d9a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9a58) {
            ctx->pc = 0x4D9ED8u;
            goto label_4d9ed8;
        }
    }
    ctx->pc = 0x4D9A60u;
label_4d9a60:
    // 0x4d9a60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d9a60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9a64: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x4d9a64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9a68: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4d9a68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d9a6c:
    // 0x4d9a6c: 0x8e910118  lw          $s1, 0x118($s4)
    ctx->pc = 0x4d9a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x4d9a70: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x4D9A70u;
    {
        const bool branch_taken_0x4d9a70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9a70) {
            ctx->pc = 0x4D9B58u;
            goto label_4d9b58;
        }
    }
    ctx->pc = 0x4D9A78u;
    // 0x4d9a78: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x4d9a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9a7c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x4d9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x4d9a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4d9a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d9a84: 0x0  nop
    ctx->pc = 0x4d9a84u;
    // NOP
    // 0x4d9a88: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d9a88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d9a8c: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x4D9A8Cu;
    {
        const bool branch_taken_0x4d9a8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d9a8c) {
            ctx->pc = 0x4D9B58u;
            goto label_4d9b58;
        }
    }
    ctx->pc = 0x4D9A94u;
    // 0x4d9a94: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9a98: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x4D9A98u;
    SET_GPR_U32(ctx, 31, 0x4D9AA0u);
    ctx->pc = 0x4D9A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9A98u;
            // 0x4d9a9c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9AA0u; }
        if (ctx->pc != 0x4D9AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9AA0u; }
        if (ctx->pc != 0x4D9AA0u) { return; }
    }
    ctx->pc = 0x4D9AA0u;
label_4d9aa0:
    // 0x4d9aa0: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9aa4: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4D9AA4u;
    SET_GPR_U32(ctx, 31, 0x4D9AACu);
    ctx->pc = 0x4D9AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9AA4u;
            // 0x4d9aa8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9AACu; }
        if (ctx->pc != 0x4D9AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9AACu; }
        if (ctx->pc != 0x4D9AACu) { return; }
    }
    ctx->pc = 0x4D9AACu;
label_4d9aac:
    // 0x4d9aac: 0xc040180  jal         func_100600
    ctx->pc = 0x4D9AACu;
    SET_GPR_U32(ctx, 31, 0x4D9AB4u);
    ctx->pc = 0x4D9AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9AACu;
            // 0x4d9ab0: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9AB4u; }
        if (ctx->pc != 0x4D9AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9AB4u; }
        if (ctx->pc != 0x4D9AB4u) { return; }
    }
    ctx->pc = 0x4D9AB4u;
label_4d9ab4:
    // 0x4d9ab4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4D9AB4u;
    {
        const bool branch_taken_0x4d9ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9ab4) {
            ctx->pc = 0x4D9AF0u;
            goto label_4d9af0;
        }
    }
    ctx->pc = 0x4D9ABCu;
    // 0x4d9abc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d9abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9ac0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4d9ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4d9ac4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d9ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d9ac8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d9ac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9acc: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x4d9accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4d9ad0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d9ad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d9ad4: 0x26290010  addiu       $t1, $s1, 0x10
    ctx->pc = 0x4d9ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4d9ad8: 0x266a0180  addiu       $t2, $s3, 0x180
    ctx->pc = 0x4d9ad8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9adc: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x4d9adcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d9ae0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4d9ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4d9ae4: 0x246706b8  addiu       $a3, $v1, 0x6B8
    ctx->pc = 0x4d9ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1720));
    // 0x4d9ae8: 0xc13d944  jal         func_4F6510
    ctx->pc = 0x4D9AE8u;
    SET_GPR_U32(ctx, 31, 0x4D9AF0u);
    ctx->pc = 0x4D9AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9AE8u;
            // 0x4d9aec: 0x3445abd8  ori         $a1, $v0, 0xABD8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43992);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9AF0u; }
        if (ctx->pc != 0x4D9AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9AF0u; }
        if (ctx->pc != 0x4D9AF0u) { return; }
    }
    ctx->pc = 0x4D9AF0u;
label_4d9af0:
    // 0x4d9af0: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x4d9af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x4d9af4: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x4d9af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9af8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d9af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d9afc: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x4d9afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d9b00: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x4d9b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x4d9b04: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x4d9b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d9b08: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x4d9b08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x4d9b0c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x4d9b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x4d9b10: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x4d9b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9b14: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x4d9b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d9b18: 0xe7a401d0  swc1        $f4, 0x1D0($sp)
    ctx->pc = 0x4d9b18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x4d9b1c: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x4d9b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d9b20: 0xe7a301d4  swc1        $f3, 0x1D4($sp)
    ctx->pc = 0x4d9b20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x4d9b24: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x4d9b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d9b28: 0xe7a201d8  swc1        $f2, 0x1D8($sp)
    ctx->pc = 0x4d9b28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x4d9b2c: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x4d9b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x4d9b30: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x4d9b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x4d9b34: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x4d9b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d9b38: 0xc7ad00c4  lwc1        $f13, 0xC4($sp)
    ctx->pc = 0x4d9b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d9b3c: 0xc7ae00c8  lwc1        $f14, 0xC8($sp)
    ctx->pc = 0x4d9b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d9b40: 0xc7af01d0  lwc1        $f15, 0x1D0($sp)
    ctx->pc = 0x4d9b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d9b44: 0xc7b001d4  lwc1        $f16, 0x1D4($sp)
    ctx->pc = 0x4d9b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x4d9b48: 0xc7b101d8  lwc1        $f17, 0x1D8($sp)
    ctx->pc = 0x4d9b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x4d9b4c: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x4D9B4Cu;
    SET_GPR_U32(ctx, 31, 0x4D9B54u);
    ctx->pc = 0x4D9B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9B4Cu;
            // 0x4d9b50: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9B54u; }
        if (ctx->pc != 0x4D9B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9B54u; }
        if (ctx->pc != 0x4D9B54u) { return; }
    }
    ctx->pc = 0x4D9B54u;
label_4d9b54:
    // 0x4d9b54: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x4d9b54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_4d9b58:
    // 0x4d9b58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d9b58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4d9b5c: 0x2e42000c  sltiu       $v0, $s2, 0xC
    ctx->pc = 0x4d9b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d9b60: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x4D9B60u;
    {
        const bool branch_taken_0x4d9b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9B60u;
            // 0x4d9b64: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9b60) {
            ctx->pc = 0x4D9A6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d9a6c;
        }
    }
    ctx->pc = 0x4D9B68u;
    // 0x4d9b68: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x4D9B68u;
    {
        const bool branch_taken_0x4d9b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9b68) {
            ctx->pc = 0x4D9ED8u;
            goto label_4d9ed8;
        }
    }
    ctx->pc = 0x4D9B70u;
label_4d9b70:
    // 0x4d9b70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d9b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9b74: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x4d9b74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9b78: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4d9b78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d9b7c:
    // 0x4d9b7c: 0x8e910118  lw          $s1, 0x118($s4)
    ctx->pc = 0x4d9b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x4d9b80: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
    ctx->pc = 0x4D9B80u;
    {
        const bool branch_taken_0x4d9b80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9b80) {
            ctx->pc = 0x4D9C88u;
            goto label_4d9c88;
        }
    }
    ctx->pc = 0x4D9B88u;
    // 0x4d9b88: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x4d9b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9b8c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4d9b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x4d9b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4d9b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d9b94: 0x0  nop
    ctx->pc = 0x4d9b94u;
    // NOP
    // 0x4d9b98: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d9b98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d9b9c: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x4D9B9Cu;
    {
        const bool branch_taken_0x4d9b9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d9b9c) {
            ctx->pc = 0x4D9C88u;
            goto label_4d9c88;
        }
    }
    ctx->pc = 0x4D9BA4u;
    // 0x4d9ba4: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9ba8: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x4D9BA8u;
    SET_GPR_U32(ctx, 31, 0x4D9BB0u);
    ctx->pc = 0x4D9BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9BA8u;
            // 0x4d9bac: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9BB0u; }
        if (ctx->pc != 0x4D9BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9BB0u; }
        if (ctx->pc != 0x4D9BB0u) { return; }
    }
    ctx->pc = 0x4D9BB0u;
label_4d9bb0:
    // 0x4d9bb0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x4d9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x4d9bb4: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9bb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4d9bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d9bbc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4d9bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9bc0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4d9bc0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4d9bc4: 0xc04ce50  jal         func_133940
    ctx->pc = 0x4D9BC4u;
    SET_GPR_U32(ctx, 31, 0x4D9BCCu);
    ctx->pc = 0x4D9BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9BC4u;
            // 0x4d9bc8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9BCCu; }
        if (ctx->pc != 0x4D9BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9BCCu; }
        if (ctx->pc != 0x4D9BCCu) { return; }
    }
    ctx->pc = 0x4D9BCCu;
label_4d9bcc:
    // 0x4d9bcc: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9bd0: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4D9BD0u;
    SET_GPR_U32(ctx, 31, 0x4D9BD8u);
    ctx->pc = 0x4D9BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9BD0u;
            // 0x4d9bd4: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9BD8u; }
        if (ctx->pc != 0x4D9BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9BD8u; }
        if (ctx->pc != 0x4D9BD8u) { return; }
    }
    ctx->pc = 0x4D9BD8u;
label_4d9bd8:
    // 0x4d9bd8: 0xc040180  jal         func_100600
    ctx->pc = 0x4D9BD8u;
    SET_GPR_U32(ctx, 31, 0x4D9BE0u);
    ctx->pc = 0x4D9BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9BD8u;
            // 0x4d9bdc: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9BE0u; }
        if (ctx->pc != 0x4D9BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9BE0u; }
        if (ctx->pc != 0x4D9BE0u) { return; }
    }
    ctx->pc = 0x4D9BE0u;
label_4d9be0:
    // 0x4d9be0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4D9BE0u;
    {
        const bool branch_taken_0x4d9be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9be0) {
            ctx->pc = 0x4D9C20u;
            goto label_4d9c20;
        }
    }
    ctx->pc = 0x4D9BE8u;
    // 0x4d9be8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d9be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9bec: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4d9becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4d9bf0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d9bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d9bf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d9bf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9bf8: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x4d9bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4d9bfc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d9bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d9c00: 0x26290010  addiu       $t1, $s1, 0x10
    ctx->pc = 0x4d9c00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4d9c04: 0x266a0180  addiu       $t2, $s3, 0x180
    ctx->pc = 0x4d9c04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9c08: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x4d9c08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d9c0c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4d9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4d9c10: 0x246706b8  addiu       $a3, $v1, 0x6B8
    ctx->pc = 0x4d9c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1720));
    // 0x4d9c14: 0xc13d944  jal         func_4F6510
    ctx->pc = 0x4D9C14u;
    SET_GPR_U32(ctx, 31, 0x4D9C1Cu);
    ctx->pc = 0x4D9C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9C14u;
            // 0x4d9c18: 0x3445abd8  ori         $a1, $v0, 0xABD8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43992);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9C1Cu; }
        if (ctx->pc != 0x4D9C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9C1Cu; }
        if (ctx->pc != 0x4D9C1Cu) { return; }
    }
    ctx->pc = 0x4D9C1Cu;
label_4d9c1c:
    // 0x4d9c1c: 0x0  nop
    ctx->pc = 0x4d9c1cu;
    // NOP
label_4d9c20:
    // 0x4d9c20: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x4d9c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x4d9c24: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x4d9c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9c28: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d9c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d9c2c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x4d9c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d9c30: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x4d9c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x4d9c34: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x4d9c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d9c38: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x4d9c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x4d9c3c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x4d9c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x4d9c40: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x4d9c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9c44: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x4d9c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d9c48: 0xe7a401c0  swc1        $f4, 0x1C0($sp)
    ctx->pc = 0x4d9c48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x4d9c4c: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x4d9c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d9c50: 0xe7a301c4  swc1        $f3, 0x1C4($sp)
    ctx->pc = 0x4d9c50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x4d9c54: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x4d9c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d9c58: 0xe7a201c8  swc1        $f2, 0x1C8($sp)
    ctx->pc = 0x4d9c58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x4d9c5c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x4d9c5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x4d9c60: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x4d9c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x4d9c64: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x4d9c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d9c68: 0xc7ad00b4  lwc1        $f13, 0xB4($sp)
    ctx->pc = 0x4d9c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d9c6c: 0xc7ae00b8  lwc1        $f14, 0xB8($sp)
    ctx->pc = 0x4d9c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d9c70: 0xc7af01c0  lwc1        $f15, 0x1C0($sp)
    ctx->pc = 0x4d9c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d9c74: 0xc7b001c4  lwc1        $f16, 0x1C4($sp)
    ctx->pc = 0x4d9c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x4d9c78: 0xc7b101c8  lwc1        $f17, 0x1C8($sp)
    ctx->pc = 0x4d9c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x4d9c7c: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x4D9C7Cu;
    SET_GPR_U32(ctx, 31, 0x4D9C84u);
    ctx->pc = 0x4D9C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9C7Cu;
            // 0x4d9c80: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9C84u; }
        if (ctx->pc != 0x4D9C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9C84u; }
        if (ctx->pc != 0x4D9C84u) { return; }
    }
    ctx->pc = 0x4D9C84u;
label_4d9c84:
    // 0x4d9c84: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x4d9c84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_4d9c88:
    // 0x4d9c88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d9c88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4d9c8c: 0x2e42000c  sltiu       $v0, $s2, 0xC
    ctx->pc = 0x4d9c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d9c90: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x4D9C90u;
    {
        const bool branch_taken_0x4d9c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9C90u;
            // 0x4d9c94: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9c90) {
            ctx->pc = 0x4D9B7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d9b7c;
        }
    }
    ctx->pc = 0x4D9C98u;
    // 0x4d9c98: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x4D9C98u;
    {
        const bool branch_taken_0x4d9c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9c98) {
            ctx->pc = 0x4D9ED8u;
            goto label_4d9ed8;
        }
    }
    ctx->pc = 0x4D9CA0u;
label_4d9ca0:
    // 0x4d9ca0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d9ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9ca4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x4d9ca4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9ca8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4d9ca8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d9cac:
    // 0x4d9cac: 0x8e910118  lw          $s1, 0x118($s4)
    ctx->pc = 0x4d9cacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x4d9cb0: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
    ctx->pc = 0x4D9CB0u;
    {
        const bool branch_taken_0x4d9cb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9cb0) {
            ctx->pc = 0x4D9DB8u;
            goto label_4d9db8;
        }
    }
    ctx->pc = 0x4D9CB8u;
    // 0x4d9cb8: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x4d9cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9cbc: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x4d9cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x4d9cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4d9cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d9cc4: 0x0  nop
    ctx->pc = 0x4d9cc4u;
    // NOP
    // 0x4d9cc8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d9cc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d9ccc: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x4D9CCCu;
    {
        const bool branch_taken_0x4d9ccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d9ccc) {
            ctx->pc = 0x4D9DB8u;
            goto label_4d9db8;
        }
    }
    ctx->pc = 0x4D9CD4u;
    // 0x4d9cd4: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9cd8: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x4D9CD8u;
    SET_GPR_U32(ctx, 31, 0x4D9CE0u);
    ctx->pc = 0x4D9CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9CD8u;
            // 0x4d9cdc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9CE0u; }
        if (ctx->pc != 0x4D9CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9CE0u; }
        if (ctx->pc != 0x4D9CE0u) { return; }
    }
    ctx->pc = 0x4D9CE0u;
label_4d9ce0:
    // 0x4d9ce0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x4d9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x4d9ce4: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9ce8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4d9ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d9cec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4d9cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9cf0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4d9cf0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4d9cf4: 0xc04ce50  jal         func_133940
    ctx->pc = 0x4D9CF4u;
    SET_GPR_U32(ctx, 31, 0x4D9CFCu);
    ctx->pc = 0x4D9CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9CF4u;
            // 0x4d9cf8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9CFCu; }
        if (ctx->pc != 0x4D9CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9CFCu; }
        if (ctx->pc != 0x4D9CFCu) { return; }
    }
    ctx->pc = 0x4D9CFCu;
label_4d9cfc:
    // 0x4d9cfc: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9d00: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4D9D00u;
    SET_GPR_U32(ctx, 31, 0x4D9D08u);
    ctx->pc = 0x4D9D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9D00u;
            // 0x4d9d04: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9D08u; }
        if (ctx->pc != 0x4D9D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9D08u; }
        if (ctx->pc != 0x4D9D08u) { return; }
    }
    ctx->pc = 0x4D9D08u;
label_4d9d08:
    // 0x4d9d08: 0xc040180  jal         func_100600
    ctx->pc = 0x4D9D08u;
    SET_GPR_U32(ctx, 31, 0x4D9D10u);
    ctx->pc = 0x4D9D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9D08u;
            // 0x4d9d0c: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9D10u; }
        if (ctx->pc != 0x4D9D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9D10u; }
        if (ctx->pc != 0x4D9D10u) { return; }
    }
    ctx->pc = 0x4D9D10u;
label_4d9d10:
    // 0x4d9d10: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4D9D10u;
    {
        const bool branch_taken_0x4d9d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9d10) {
            ctx->pc = 0x4D9D50u;
            goto label_4d9d50;
        }
    }
    ctx->pc = 0x4D9D18u;
    // 0x4d9d18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d9d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9d1c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4d9d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4d9d20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d9d24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d9d24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9d28: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x4d9d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4d9d2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d9d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d9d30: 0x26290010  addiu       $t1, $s1, 0x10
    ctx->pc = 0x4d9d30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4d9d34: 0x266a0180  addiu       $t2, $s3, 0x180
    ctx->pc = 0x4d9d34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9d38: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x4d9d38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d9d3c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4d9d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4d9d40: 0x246706b8  addiu       $a3, $v1, 0x6B8
    ctx->pc = 0x4d9d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1720));
    // 0x4d9d44: 0xc13d944  jal         func_4F6510
    ctx->pc = 0x4D9D44u;
    SET_GPR_U32(ctx, 31, 0x4D9D4Cu);
    ctx->pc = 0x4D9D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9D44u;
            // 0x4d9d48: 0x3445abd8  ori         $a1, $v0, 0xABD8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43992);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9D4Cu; }
        if (ctx->pc != 0x4D9D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9D4Cu; }
        if (ctx->pc != 0x4D9D4Cu) { return; }
    }
    ctx->pc = 0x4D9D4Cu;
label_4d9d4c:
    // 0x4d9d4c: 0x0  nop
    ctx->pc = 0x4d9d4cu;
    // NOP
label_4d9d50:
    // 0x4d9d50: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x4d9d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x4d9d54: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x4d9d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9d58: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d9d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d9d5c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x4d9d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d9d60: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x4d9d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x4d9d64: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x4d9d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d9d68: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x4d9d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x4d9d6c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x4d9d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x4d9d70: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x4d9d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9d74: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x4d9d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d9d78: 0xe7a401b0  swc1        $f4, 0x1B0($sp)
    ctx->pc = 0x4d9d78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x4d9d7c: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x4d9d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d9d80: 0xe7a301b4  swc1        $f3, 0x1B4($sp)
    ctx->pc = 0x4d9d80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x4d9d84: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x4d9d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d9d88: 0xe7a201b8  swc1        $f2, 0x1B8($sp)
    ctx->pc = 0x4d9d88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x4d9d8c: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x4d9d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x4d9d90: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x4d9d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x4d9d94: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x4d9d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d9d98: 0xc7ad00a4  lwc1        $f13, 0xA4($sp)
    ctx->pc = 0x4d9d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d9d9c: 0xc7ae00a8  lwc1        $f14, 0xA8($sp)
    ctx->pc = 0x4d9d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d9da0: 0xc7af01b0  lwc1        $f15, 0x1B0($sp)
    ctx->pc = 0x4d9da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d9da4: 0xc7b001b4  lwc1        $f16, 0x1B4($sp)
    ctx->pc = 0x4d9da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x4d9da8: 0xc7b101b8  lwc1        $f17, 0x1B8($sp)
    ctx->pc = 0x4d9da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x4d9dac: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x4D9DACu;
    SET_GPR_U32(ctx, 31, 0x4D9DB4u);
    ctx->pc = 0x4D9DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9DACu;
            // 0x4d9db0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9DB4u; }
        if (ctx->pc != 0x4D9DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9DB4u; }
        if (ctx->pc != 0x4D9DB4u) { return; }
    }
    ctx->pc = 0x4D9DB4u;
label_4d9db4:
    // 0x4d9db4: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x4d9db4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_4d9db8:
    // 0x4d9db8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d9db8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4d9dbc: 0x2e42000c  sltiu       $v0, $s2, 0xC
    ctx->pc = 0x4d9dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d9dc0: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x4D9DC0u;
    {
        const bool branch_taken_0x4d9dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9DC0u;
            // 0x4d9dc4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9dc0) {
            ctx->pc = 0x4D9CACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d9cac;
        }
    }
    ctx->pc = 0x4D9DC8u;
    // 0x4d9dc8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x4D9DC8u;
    {
        const bool branch_taken_0x4d9dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9dc8) {
            ctx->pc = 0x4D9ED8u;
            goto label_4d9ed8;
        }
    }
    ctx->pc = 0x4D9DD0u;
label_4d9dd0:
    // 0x4d9dd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d9dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9dd4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x4d9dd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9dd8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4d9dd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d9ddc:
    // 0x4d9ddc: 0x8e910118  lw          $s1, 0x118($s4)
    ctx->pc = 0x4d9ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x4d9de0: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x4D9DE0u;
    {
        const bool branch_taken_0x4d9de0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9de0) {
            ctx->pc = 0x4D9EC8u;
            goto label_4d9ec8;
        }
    }
    ctx->pc = 0x4D9DE8u;
    // 0x4d9de8: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x4d9de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9dec: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x4d9decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
    // 0x4d9df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4d9df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d9df4: 0x0  nop
    ctx->pc = 0x4d9df4u;
    // NOP
    // 0x4d9df8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d9df8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d9dfc: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x4D9DFCu;
    {
        const bool branch_taken_0x4d9dfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d9dfc) {
            ctx->pc = 0x4D9EC8u;
            goto label_4d9ec8;
        }
    }
    ctx->pc = 0x4D9E04u;
    // 0x4d9e04: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9e08: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x4D9E08u;
    SET_GPR_U32(ctx, 31, 0x4D9E10u);
    ctx->pc = 0x4D9E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9E08u;
            // 0x4d9e0c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9E10u; }
        if (ctx->pc != 0x4D9E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9E10u; }
        if (ctx->pc != 0x4D9E10u) { return; }
    }
    ctx->pc = 0x4D9E10u;
label_4d9e10:
    // 0x4d9e10: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x4d9e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9e14: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4D9E14u;
    SET_GPR_U32(ctx, 31, 0x4D9E1Cu);
    ctx->pc = 0x4D9E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9E14u;
            // 0x4d9e18: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9E1Cu; }
        if (ctx->pc != 0x4D9E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9E1Cu; }
        if (ctx->pc != 0x4D9E1Cu) { return; }
    }
    ctx->pc = 0x4D9E1Cu;
label_4d9e1c:
    // 0x4d9e1c: 0xc040180  jal         func_100600
    ctx->pc = 0x4D9E1Cu;
    SET_GPR_U32(ctx, 31, 0x4D9E24u);
    ctx->pc = 0x4D9E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9E1Cu;
            // 0x4d9e20: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9E24u; }
        if (ctx->pc != 0x4D9E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9E24u; }
        if (ctx->pc != 0x4D9E24u) { return; }
    }
    ctx->pc = 0x4D9E24u;
label_4d9e24:
    // 0x4d9e24: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4D9E24u;
    {
        const bool branch_taken_0x4d9e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9e24) {
            ctx->pc = 0x4D9E60u;
            goto label_4d9e60;
        }
    }
    ctx->pc = 0x4D9E2Cu;
    // 0x4d9e2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d9e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9e30: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4d9e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4d9e34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d9e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d9e38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d9e38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9e3c: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x4d9e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4d9e40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d9e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d9e44: 0x26290010  addiu       $t1, $s1, 0x10
    ctx->pc = 0x4d9e44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4d9e48: 0x266a0180  addiu       $t2, $s3, 0x180
    ctx->pc = 0x4d9e48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x4d9e4c: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x4d9e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d9e50: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4d9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4d9e54: 0x246706b8  addiu       $a3, $v1, 0x6B8
    ctx->pc = 0x4d9e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1720));
    // 0x4d9e58: 0xc13d944  jal         func_4F6510
    ctx->pc = 0x4D9E58u;
    SET_GPR_U32(ctx, 31, 0x4D9E60u);
    ctx->pc = 0x4D9E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9E58u;
            // 0x4d9e5c: 0x3445abd8  ori         $a1, $v0, 0xABD8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43992);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9E60u; }
        if (ctx->pc != 0x4D9E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9E60u; }
        if (ctx->pc != 0x4D9E60u) { return; }
    }
    ctx->pc = 0x4D9E60u;
label_4d9e60:
    // 0x4d9e60: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x4d9e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x4d9e64: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x4d9e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9e68: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d9e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d9e6c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x4d9e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d9e70: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x4d9e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x4d9e74: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x4d9e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d9e78: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x4d9e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x4d9e7c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x4d9e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x4d9e80: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x4d9e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d9e84: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x4d9e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d9e88: 0xe7a401a0  swc1        $f4, 0x1A0($sp)
    ctx->pc = 0x4d9e88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x4d9e8c: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x4d9e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d9e90: 0xe7a301a4  swc1        $f3, 0x1A4($sp)
    ctx->pc = 0x4d9e90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x4d9e94: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x4d9e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d9e98: 0xe7a201a8  swc1        $f2, 0x1A8($sp)
    ctx->pc = 0x4d9e98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x4d9e9c: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x4d9e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x4d9ea0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x4d9ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x4d9ea4: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x4d9ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d9ea8: 0xc7ad0094  lwc1        $f13, 0x94($sp)
    ctx->pc = 0x4d9ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d9eac: 0xc7ae0098  lwc1        $f14, 0x98($sp)
    ctx->pc = 0x4d9eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d9eb0: 0xc7af01a0  lwc1        $f15, 0x1A0($sp)
    ctx->pc = 0x4d9eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d9eb4: 0xc7b001a4  lwc1        $f16, 0x1A4($sp)
    ctx->pc = 0x4d9eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x4d9eb8: 0xc7b101a8  lwc1        $f17, 0x1A8($sp)
    ctx->pc = 0x4d9eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x4d9ebc: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x4D9EBCu;
    SET_GPR_U32(ctx, 31, 0x4D9EC4u);
    ctx->pc = 0x4D9EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9EBCu;
            // 0x4d9ec0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9EC4u; }
        if (ctx->pc != 0x4D9EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9EC4u; }
        if (ctx->pc != 0x4D9EC4u) { return; }
    }
    ctx->pc = 0x4D9EC4u;
label_4d9ec4:
    // 0x4d9ec4: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x4d9ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_4d9ec8:
    // 0x4d9ec8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d9ec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4d9ecc: 0x2e42000c  sltiu       $v0, $s2, 0xC
    ctx->pc = 0x4d9eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d9ed0: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x4D9ED0u;
    {
        const bool branch_taken_0x4d9ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9ED0u;
            // 0x4d9ed4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9ed0) {
            ctx->pc = 0x4D9DDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d9ddc;
        }
    }
    ctx->pc = 0x4D9ED8u;
label_4d9ed8:
    // 0x4d9ed8: 0x8e040300  lw          $a0, 0x300($s0)
    ctx->pc = 0x4d9ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x4d9edc: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x4d9edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4d9ee0: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x4D9EE0u;
    SET_GPR_U32(ctx, 31, 0x4D9EE8u);
    ctx->pc = 0x4D9EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9EE0u;
            // 0x4d9ee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9EE8u; }
        if (ctx->pc != 0x4D9EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9EE8u; }
        if (ctx->pc != 0x4D9EE8u) { return; }
    }
    ctx->pc = 0x4D9EE8u;
label_4d9ee8:
    // 0x4d9ee8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4d9ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4d9eec:
    // 0x4d9eec: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4d9eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4d9ef0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4d9ef0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4d9ef4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4d9ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d9ef8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4d9ef8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4d9efc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4d9efcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d9f00: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4d9f00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d9f04: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4d9f04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d9f08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4d9f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d9f0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4d9f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d9f10: 0x3e00008  jr          $ra
    ctx->pc = 0x4D9F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D9F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9F10u;
            // 0x4d9f14: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D9F18u;
    // 0x4d9f18: 0x0  nop
    ctx->pc = 0x4d9f18u;
    // NOP
    // 0x4d9f1c: 0x0  nop
    ctx->pc = 0x4d9f1cu;
    // NOP
    // 0x4d9f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d9f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d9f24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d9f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d9f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d9f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d9f2c: 0xc0e393c  jal         func_38E4F0
    ctx->pc = 0x4D9F2Cu;
    SET_GPR_U32(ctx, 31, 0x4D9F34u);
    ctx->pc = 0x4D9F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9F2Cu;
            // 0x4d9f30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9F34u; }
        if (ctx->pc != 0x4D9F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9F34u; }
        if (ctx->pc != 0x4D9F34u) { return; }
    }
    ctx->pc = 0x4D9F34u;
label_4d9f34:
    // 0x4d9f34: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x4d9f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x4d9f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d9f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9f3c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x4d9f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x4d9f40: 0xc1361e4  jal         func_4D8790
    ctx->pc = 0x4D9F40u;
    SET_GPR_U32(ctx, 31, 0x4D9F48u);
    ctx->pc = 0x4D9F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9F40u;
            // 0x4d9f44: 0xae0000ec  sw          $zero, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D8790u;
    if (runtime->hasFunction(0x4D8790u)) {
        auto targetFn = runtime->lookupFunction(0x4D8790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9F48u; }
        if (ctx->pc != 0x4D9F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D8790_0x4d8790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9F48u; }
        if (ctx->pc != 0x4D9F48u) { return; }
    }
    ctx->pc = 0x4D9F48u;
label_4d9f48:
    // 0x4d9f48: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x4d9f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4d9f4c: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x4d9f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    // 0x4d9f50: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x4d9f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x4d9f54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d9f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d9f58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d9f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d9f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x4D9F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D9F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9F5Cu;
            // 0x4d9f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D9F64u;
    // 0x4d9f64: 0x0  nop
    ctx->pc = 0x4d9f64u;
    // NOP
    // 0x4d9f68: 0x0  nop
    ctx->pc = 0x4d9f68u;
    // NOP
    // 0x4d9f6c: 0x0  nop
    ctx->pc = 0x4d9f6cu;
    // NOP
    // 0x4d9f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d9f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d9f74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d9f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d9f78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d9f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d9f7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d9f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d9f80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d9f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4d9f84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d9f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d9f88: 0x8c421d98  lw          $v0, 0x1D98($v0)
    ctx->pc = 0x4d9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7576)));
    // 0x4d9f8c: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x4d9f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x4d9f90: 0xc12e608  jal         func_4B9820
    ctx->pc = 0x4D9F90u;
    SET_GPR_U32(ctx, 31, 0x4D9F98u);
    ctx->pc = 0x4D9F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9F90u;
            // 0x4d9f94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9820u;
    if (runtime->hasFunction(0x4B9820u)) {
        auto targetFn = runtime->lookupFunction(0x4B9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9F98u; }
        if (ctx->pc != 0x4D9F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9820_0x4b9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9F98u; }
        if (ctx->pc != 0x4D9F98u) { return; }
    }
    ctx->pc = 0x4D9F98u;
label_4d9f98:
    // 0x4d9f98: 0xa20000d1  sb          $zero, 0xD1($s0)
    ctx->pc = 0x4d9f98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
    // 0x4d9f9c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4d9f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x4d9fa0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x4d9fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x4d9fa4: 0xc040180  jal         func_100600
    ctx->pc = 0x4D9FA4u;
    SET_GPR_U32(ctx, 31, 0x4D9FACu);
    ctx->pc = 0x4D9FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9FA4u;
            // 0x4d9fa8: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9FACu; }
        if (ctx->pc != 0x4D9FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9FACu; }
        if (ctx->pc != 0x4D9FACu) { return; }
    }
    ctx->pc = 0x4D9FACu;
label_4d9fac:
    // 0x4d9fac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4d9facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9fb0: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4D9FB0u;
    {
        const bool branch_taken_0x4d9fb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9fb0) {
            ctx->pc = 0x4D9FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9FB0u;
            // 0x4d9fb4: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D9FF0u;
            goto label_4d9ff0;
        }
    }
    ctx->pc = 0x4D9FB8u;
    // 0x4d9fb8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4d9fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4d9fbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4d9fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4d9fc0: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4d9fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
    // 0x4d9fc4: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x4d9fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x4d9fc8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d9fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d9fcc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4d9fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x4d9fd0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4D9FD0u;
    SET_GPR_U32(ctx, 31, 0x4D9FD8u);
    ctx->pc = 0x4D9FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9FD0u;
            // 0x4d9fd4: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9FD8u; }
        if (ctx->pc != 0x4D9FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9FD8u; }
        if (ctx->pc != 0x4D9FD8u) { return; }
    }
    ctx->pc = 0x4D9FD8u;
label_4d9fd8:
    // 0x4d9fd8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4d9fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x4d9fdc: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x4d9fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x4d9fe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d9fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9fe4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4D9FE4u;
    SET_GPR_U32(ctx, 31, 0x4D9FECu);
    ctx->pc = 0x4D9FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D9FE4u;
            // 0x4d9fe8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9FECu; }
        if (ctx->pc != 0x4D9FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D9FECu; }
        if (ctx->pc != 0x4D9FECu) { return; }
    }
    ctx->pc = 0x4D9FECu;
label_4d9fec:
    // 0x4d9fec: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4d9fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4d9ff0:
    // 0x4d9ff0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4d9ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x4d9ff4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4d9ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x4d9ff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d9ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9ffc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4d9ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4da000: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4da000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4da004: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4da004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x4da008: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4da008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4da00c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4da00cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4da010: 0x344610ae  ori         $a2, $v0, 0x10AE
    ctx->pc = 0x4da010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4270);
    // 0x4da014: 0xc122cd8  jal         func_48B360
    ctx->pc = 0x4DA014u;
    SET_GPR_U32(ctx, 31, 0x4DA01Cu);
    ctx->pc = 0x4DA018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA014u;
            // 0x4da018: 0xae110300  sw          $s1, 0x300($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA01Cu; }
        if (ctx->pc != 0x4DA01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA01Cu; }
        if (ctx->pc != 0x4DA01Cu) { return; }
    }
    ctx->pc = 0x4DA01Cu;
label_4da01c:
    // 0x4da01c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4da01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x4da020: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x4da020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x4da024: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4da024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4da028: 0x8e040300  lw          $a0, 0x300($s0)
    ctx->pc = 0x4da028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x4da02c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x4da02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x4da030: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x4da030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x4da034: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4da034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4da038: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4da038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4da03c: 0x344610ae  ori         $a2, $v0, 0x10AE
    ctx->pc = 0x4da03cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4270);
    // 0x4da040: 0xc122cd8  jal         func_48B360
    ctx->pc = 0x4DA040u;
    SET_GPR_U32(ctx, 31, 0x4DA048u);
    ctx->pc = 0x4DA044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA040u;
            // 0x4da044: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA048u; }
        if (ctx->pc != 0x4DA048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA048u; }
        if (ctx->pc != 0x4DA048u) { return; }
    }
    ctx->pc = 0x4DA048u;
label_4da048:
    // 0x4da048: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4da048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x4da04c: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x4da04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x4da050: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4da050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4da054: 0x8e040300  lw          $a0, 0x300($s0)
    ctx->pc = 0x4da054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x4da058: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x4da058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x4da05c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4da05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x4da060: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4da060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4da064: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4da064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4da068: 0x344610ae  ori         $a2, $v0, 0x10AE
    ctx->pc = 0x4da068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4270);
    // 0x4da06c: 0xc122cd8  jal         func_48B360
    ctx->pc = 0x4DA06Cu;
    SET_GPR_U32(ctx, 31, 0x4DA074u);
    ctx->pc = 0x4DA070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA06Cu;
            // 0x4da070: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA074u; }
        if (ctx->pc != 0x4DA074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA074u; }
        if (ctx->pc != 0x4DA074u) { return; }
    }
    ctx->pc = 0x4DA074u;
label_4da074:
    // 0x4da074: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4da074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4da078:
    // 0x4da078: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4da078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4da07c: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x4da07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x4da080: 0x2c83001f  sltiu       $v1, $a0, 0x1F
    ctx->pc = 0x4da080u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x4da084: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4da084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4da088: 0x0  nop
    ctx->pc = 0x4da088u;
    // NOP
    // 0x4da08c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4DA08Cu;
    {
        const bool branch_taken_0x4da08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4da08c) {
            ctx->pc = 0x4DA078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4da078;
        }
    }
    ctx->pc = 0x4DA094u;
    // 0x4da094: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4da094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4da098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4da098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4da09c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4da09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4da0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA0A0u;
            // 0x4da0a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DA0A8u;
    // 0x4da0a8: 0x0  nop
    ctx->pc = 0x4da0a8u;
    // NOP
    // 0x4da0ac: 0x0  nop
    ctx->pc = 0x4da0acu;
    // NOP
}
