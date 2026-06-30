#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00448F50
// Address: 0x448f50 - 0x449070
void sub_00448F50_0x448f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00448F50_0x448f50");
#endif

    switch (ctx->pc) {
        case 0x448f50u: goto label_448f50;
        case 0x448f54u: goto label_448f54;
        case 0x448f58u: goto label_448f58;
        case 0x448f5cu: goto label_448f5c;
        case 0x448f60u: goto label_448f60;
        case 0x448f64u: goto label_448f64;
        case 0x448f68u: goto label_448f68;
        case 0x448f6cu: goto label_448f6c;
        case 0x448f70u: goto label_448f70;
        case 0x448f74u: goto label_448f74;
        case 0x448f78u: goto label_448f78;
        case 0x448f7cu: goto label_448f7c;
        case 0x448f80u: goto label_448f80;
        case 0x448f84u: goto label_448f84;
        case 0x448f88u: goto label_448f88;
        case 0x448f8cu: goto label_448f8c;
        case 0x448f90u: goto label_448f90;
        case 0x448f94u: goto label_448f94;
        case 0x448f98u: goto label_448f98;
        case 0x448f9cu: goto label_448f9c;
        case 0x448fa0u: goto label_448fa0;
        case 0x448fa4u: goto label_448fa4;
        case 0x448fa8u: goto label_448fa8;
        case 0x448facu: goto label_448fac;
        case 0x448fb0u: goto label_448fb0;
        case 0x448fb4u: goto label_448fb4;
        case 0x448fb8u: goto label_448fb8;
        case 0x448fbcu: goto label_448fbc;
        case 0x448fc0u: goto label_448fc0;
        case 0x448fc4u: goto label_448fc4;
        case 0x448fc8u: goto label_448fc8;
        case 0x448fccu: goto label_448fcc;
        case 0x448fd0u: goto label_448fd0;
        case 0x448fd4u: goto label_448fd4;
        case 0x448fd8u: goto label_448fd8;
        case 0x448fdcu: goto label_448fdc;
        case 0x448fe0u: goto label_448fe0;
        case 0x448fe4u: goto label_448fe4;
        case 0x448fe8u: goto label_448fe8;
        case 0x448fecu: goto label_448fec;
        case 0x448ff0u: goto label_448ff0;
        case 0x448ff4u: goto label_448ff4;
        case 0x448ff8u: goto label_448ff8;
        case 0x448ffcu: goto label_448ffc;
        case 0x449000u: goto label_449000;
        case 0x449004u: goto label_449004;
        case 0x449008u: goto label_449008;
        case 0x44900cu: goto label_44900c;
        case 0x449010u: goto label_449010;
        case 0x449014u: goto label_449014;
        case 0x449018u: goto label_449018;
        case 0x44901cu: goto label_44901c;
        case 0x449020u: goto label_449020;
        case 0x449024u: goto label_449024;
        case 0x449028u: goto label_449028;
        case 0x44902cu: goto label_44902c;
        case 0x449030u: goto label_449030;
        case 0x449034u: goto label_449034;
        case 0x449038u: goto label_449038;
        case 0x44903cu: goto label_44903c;
        case 0x449040u: goto label_449040;
        case 0x449044u: goto label_449044;
        case 0x449048u: goto label_449048;
        case 0x44904cu: goto label_44904c;
        case 0x449050u: goto label_449050;
        case 0x449054u: goto label_449054;
        case 0x449058u: goto label_449058;
        case 0x44905cu: goto label_44905c;
        case 0x449060u: goto label_449060;
        case 0x449064u: goto label_449064;
        case 0x449068u: goto label_449068;
        case 0x44906cu: goto label_44906c;
        default: break;
    }

    ctx->pc = 0x448f50u;

label_448f50:
    // 0x448f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x448f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_448f54:
    // 0x448f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x448f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_448f58:
    // 0x448f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x448f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_448f5c:
    // 0x448f5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x448f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_448f60:
    // 0x448f60: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x448f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_448f64:
    // 0x448f64: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_448f68:
    if (ctx->pc == 0x448F68u) {
        ctx->pc = 0x448F68u;
            // 0x448f68: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x448F6Cu;
        goto label_448f6c;
    }
    ctx->pc = 0x448F64u;
    {
        const bool branch_taken_0x448f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x448f64) {
            ctx->pc = 0x448F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x448F64u;
            // 0x448f68: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x448F78u;
            goto label_448f78;
        }
    }
    ctx->pc = 0x448F6Cu;
label_448f6c:
    // 0x448f6c: 0xc04008c  jal         func_100230
label_448f70:
    if (ctx->pc == 0x448F70u) {
        ctx->pc = 0x448F74u;
        goto label_448f74;
    }
    ctx->pc = 0x448F6Cu;
    SET_GPR_U32(ctx, 31, 0x448F74u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448F74u; }
        if (ctx->pc != 0x448F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448F74u; }
        if (ctx->pc != 0x448F74u) { return; }
    }
    ctx->pc = 0x448F74u;
label_448f74:
    // 0x448f74: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x448f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_448f78:
    // 0x448f78: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x448f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_448f7c:
    // 0x448f7c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_448f80:
    if (ctx->pc == 0x448F80u) {
        ctx->pc = 0x448F80u;
            // 0x448f80: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x448F84u;
        goto label_448f84;
    }
    ctx->pc = 0x448F7Cu;
    {
        const bool branch_taken_0x448f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x448f7c) {
            ctx->pc = 0x448F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x448F7Cu;
            // 0x448f80: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x448F94u;
            goto label_448f94;
        }
    }
    ctx->pc = 0x448F84u;
label_448f84:
    // 0x448f84: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x448f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_448f88:
    // 0x448f88: 0xc0407c0  jal         func_101F00
label_448f8c:
    if (ctx->pc == 0x448F8Cu) {
        ctx->pc = 0x448F8Cu;
            // 0x448f8c: 0x24a58fb0  addiu       $a1, $a1, -0x7050 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938544));
        ctx->pc = 0x448F90u;
        goto label_448f90;
    }
    ctx->pc = 0x448F88u;
    SET_GPR_U32(ctx, 31, 0x448F90u);
    ctx->pc = 0x448F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448F88u;
            // 0x448f8c: 0x24a58fb0  addiu       $a1, $a1, -0x7050 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448F90u; }
        if (ctx->pc != 0x448F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448F90u; }
        if (ctx->pc != 0x448F90u) { return; }
    }
    ctx->pc = 0x448F90u;
label_448f90:
    // 0x448f90: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x448f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_448f94:
    // 0x448f94: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x448f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_448f98:
    // 0x448f98: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x448f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_448f9c:
    // 0x448f9c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x448f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_448fa0:
    // 0x448fa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x448fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_448fa4:
    // 0x448fa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x448fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_448fa8:
    // 0x448fa8: 0x3e00008  jr          $ra
label_448fac:
    if (ctx->pc == 0x448FACu) {
        ctx->pc = 0x448FACu;
            // 0x448fac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x448FB0u;
        goto label_448fb0;
    }
    ctx->pc = 0x448FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x448FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448FA8u;
            // 0x448fac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x448FB0u;
label_448fb0:
    // 0x448fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x448fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_448fb4:
    // 0x448fb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x448fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_448fb8:
    // 0x448fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x448fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_448fbc:
    // 0x448fbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x448fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_448fc0:
    // 0x448fc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x448fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_448fc4:
    // 0x448fc4: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_448fc8:
    if (ctx->pc == 0x448FC8u) {
        ctx->pc = 0x448FC8u;
            // 0x448fc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x448FCCu;
        goto label_448fcc;
    }
    ctx->pc = 0x448FC4u;
    {
        const bool branch_taken_0x448fc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x448FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448FC4u;
            // 0x448fc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448fc4) {
            ctx->pc = 0x449050u;
            goto label_449050;
        }
    }
    ctx->pc = 0x448FCCu;
label_448fcc:
    // 0x448fcc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x448fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_448fd0:
    // 0x448fd0: 0x2442d6c0  addiu       $v0, $v0, -0x2940
    ctx->pc = 0x448fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956736));
label_448fd4:
    // 0x448fd4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x448fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_448fd8:
    // 0x448fd8: 0x8e040210  lw          $a0, 0x210($s0)
    ctx->pc = 0x448fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_448fdc:
    // 0x448fdc: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_448fe0:
    if (ctx->pc == 0x448FE0u) {
        ctx->pc = 0x448FE0u;
            // 0x448fe0: 0xae000210  sw          $zero, 0x210($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
        ctx->pc = 0x448FE4u;
        goto label_448fe4;
    }
    ctx->pc = 0x448FDCu;
    {
        const bool branch_taken_0x448fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x448fdc) {
            ctx->pc = 0x448FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x448FDCu;
            // 0x448fe0: 0xae000210  sw          $zero, 0x210($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x449000u;
            goto label_449000;
        }
    }
    ctx->pc = 0x448FE4u;
label_448fe4:
    // 0x448fe4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_448fe8:
    if (ctx->pc == 0x448FE8u) {
        ctx->pc = 0x448FECu;
        goto label_448fec;
    }
    ctx->pc = 0x448FE4u;
    {
        const bool branch_taken_0x448fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x448fe4) {
            ctx->pc = 0x448FFCu;
            goto label_448ffc;
        }
    }
    ctx->pc = 0x448FECu;
label_448fec:
    // 0x448fec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x448fecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_448ff0:
    // 0x448ff0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x448ff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_448ff4:
    // 0x448ff4: 0x320f809  jalr        $t9
label_448ff8:
    if (ctx->pc == 0x448FF8u) {
        ctx->pc = 0x448FF8u;
            // 0x448ff8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x448FFCu;
        goto label_448ffc;
    }
    ctx->pc = 0x448FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x448FFCu);
        ctx->pc = 0x448FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448FF4u;
            // 0x448ff8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x448FFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x448FFCu; }
            if (ctx->pc != 0x448FFCu) { return; }
        }
        }
    }
    ctx->pc = 0x448FFCu;
label_448ffc:
    // 0x448ffc: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x448ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_449000:
    // 0x449000: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x449000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_449004:
    // 0x449004: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x449004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_449008:
    // 0x449008: 0x320f809  jalr        $t9
label_44900c:
    if (ctx->pc == 0x44900Cu) {
        ctx->pc = 0x44900Cu;
            // 0x44900c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449010u;
        goto label_449010;
    }
    ctx->pc = 0x449008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x449010u);
        ctx->pc = 0x44900Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449008u;
            // 0x44900c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x449010u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x449010u; }
            if (ctx->pc != 0x449010u) { return; }
        }
        }
    }
    ctx->pc = 0x449010u;
label_449010:
    // 0x449010: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_449014:
    if (ctx->pc == 0x449014u) {
        ctx->pc = 0x449014u;
            // 0x449014: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x449018u;
        goto label_449018;
    }
    ctx->pc = 0x449010u;
    {
        const bool branch_taken_0x449010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x449010) {
            ctx->pc = 0x449014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x449010u;
            // 0x449014: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44903Cu;
            goto label_44903c;
        }
    }
    ctx->pc = 0x449018u;
label_449018:
    // 0x449018: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x449018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44901c:
    // 0x44901c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x44901cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_449020:
    // 0x449020: 0x24632e00  addiu       $v1, $v1, 0x2E00
    ctx->pc = 0x449020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11776));
label_449024:
    // 0x449024: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_449028:
    if (ctx->pc == 0x449028u) {
        ctx->pc = 0x449028u;
            // 0x449028: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x44902Cu;
        goto label_44902c;
    }
    ctx->pc = 0x449024u;
    {
        const bool branch_taken_0x449024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449024u;
            // 0x449028: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449024) {
            ctx->pc = 0x449038u;
            goto label_449038;
        }
    }
    ctx->pc = 0x44902Cu;
label_44902c:
    // 0x44902c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44902cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_449030:
    // 0x449030: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x449030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_449034:
    // 0x449034: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x449034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_449038:
    // 0x449038: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x449038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_44903c:
    // 0x44903c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44903cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_449040:
    // 0x449040: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_449044:
    if (ctx->pc == 0x449044u) {
        ctx->pc = 0x449044u;
            // 0x449044: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449048u;
        goto label_449048;
    }
    ctx->pc = 0x449040u;
    {
        const bool branch_taken_0x449040 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x449040) {
            ctx->pc = 0x449044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x449040u;
            // 0x449044: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x449054u;
            goto label_449054;
        }
    }
    ctx->pc = 0x449048u;
label_449048:
    // 0x449048: 0xc0400a8  jal         func_1002A0
label_44904c:
    if (ctx->pc == 0x44904Cu) {
        ctx->pc = 0x44904Cu;
            // 0x44904c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449050u;
        goto label_449050;
    }
    ctx->pc = 0x449048u;
    SET_GPR_U32(ctx, 31, 0x449050u);
    ctx->pc = 0x44904Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449048u;
            // 0x44904c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449050u; }
        if (ctx->pc != 0x449050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449050u; }
        if (ctx->pc != 0x449050u) { return; }
    }
    ctx->pc = 0x449050u;
label_449050:
    // 0x449050: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x449050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_449054:
    // 0x449054: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x449054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_449058:
    // 0x449058: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x449058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44905c:
    // 0x44905c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44905cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_449060:
    // 0x449060: 0x3e00008  jr          $ra
label_449064:
    if (ctx->pc == 0x449064u) {
        ctx->pc = 0x449064u;
            // 0x449064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x449068u;
        goto label_449068;
    }
    ctx->pc = 0x449060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449060u;
            // 0x449064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x449068u;
label_449068:
    // 0x449068: 0x0  nop
    ctx->pc = 0x449068u;
    // NOP
label_44906c:
    // 0x44906c: 0x0  nop
    ctx->pc = 0x44906cu;
    // NOP
}
