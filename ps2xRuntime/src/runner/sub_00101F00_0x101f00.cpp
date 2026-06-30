#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00101F00
// Address: 0x101f00 - 0x101fa0
void sub_00101F00_0x101f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101F00_0x101f00");
#endif

    switch (ctx->pc) {
        case 0x101f00u: goto label_101f00;
        case 0x101f04u: goto label_101f04;
        case 0x101f08u: goto label_101f08;
        case 0x101f0cu: goto label_101f0c;
        case 0x101f10u: goto label_101f10;
        case 0x101f14u: goto label_101f14;
        case 0x101f18u: goto label_101f18;
        case 0x101f1cu: goto label_101f1c;
        case 0x101f20u: goto label_101f20;
        case 0x101f24u: goto label_101f24;
        case 0x101f28u: goto label_101f28;
        case 0x101f2cu: goto label_101f2c;
        case 0x101f30u: goto label_101f30;
        case 0x101f34u: goto label_101f34;
        case 0x101f38u: goto label_101f38;
        case 0x101f3cu: goto label_101f3c;
        case 0x101f40u: goto label_101f40;
        case 0x101f44u: goto label_101f44;
        case 0x101f48u: goto label_101f48;
        case 0x101f4cu: goto label_101f4c;
        case 0x101f50u: goto label_101f50;
        case 0x101f54u: goto label_101f54;
        case 0x101f58u: goto label_101f58;
        case 0x101f5cu: goto label_101f5c;
        case 0x101f60u: goto label_101f60;
        case 0x101f64u: goto label_101f64;
        case 0x101f68u: goto label_101f68;
        case 0x101f6cu: goto label_101f6c;
        case 0x101f70u: goto label_101f70;
        case 0x101f74u: goto label_101f74;
        case 0x101f78u: goto label_101f78;
        case 0x101f7cu: goto label_101f7c;
        case 0x101f80u: goto label_101f80;
        case 0x101f84u: goto label_101f84;
        case 0x101f88u: goto label_101f88;
        case 0x101f8cu: goto label_101f8c;
        case 0x101f90u: goto label_101f90;
        case 0x101f94u: goto label_101f94;
        case 0x101f98u: goto label_101f98;
        case 0x101f9cu: goto label_101f9c;
        default: break;
    }

    ctx->pc = 0x101f00u;

label_101f00:
    // 0x101f00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x101f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_101f04:
    // 0x101f04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x101f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_101f08:
    // 0x101f08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x101f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_101f0c:
    // 0x101f0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x101f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_101f10:
    // 0x101f10: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x101f10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101f14:
    // 0x101f14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x101f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_101f18:
    // 0x101f18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x101f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_101f1c:
    // 0x101f1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_101f20:
    // 0x101f20: 0x12a00015  beqz        $s5, . + 4 + (0x15 << 2)
label_101f24:
    if (ctx->pc == 0x101F24u) {
        ctx->pc = 0x101F24u;
            // 0x101f24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x101F28u;
        goto label_101f28;
    }
    ctx->pc = 0x101F20u;
    {
        const bool branch_taken_0x101f20 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F20u;
            // 0x101f24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f20) {
            ctx->pc = 0x101F78u;
            goto label_101f78;
        }
    }
    ctx->pc = 0x101F28u;
label_101f28:
    // 0x101f28: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_101f2c:
    if (ctx->pc == 0x101F2Cu) {
        ctx->pc = 0x101F30u;
        goto label_101f30;
    }
    ctx->pc = 0x101F28u;
    {
        const bool branch_taken_0x101f28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x101f28) {
            ctx->pc = 0x101F70u;
            goto label_101f70;
        }
    }
    ctx->pc = 0x101F30u;
label_101f30:
    // 0x101f30: 0x8eb1fff0  lw          $s1, -0x10($s5)
    ctx->pc = 0x101f30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967280)));
label_101f34:
    // 0x101f34: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x101f34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101f38:
    // 0x101f38: 0x8eb0fff4  lw          $s0, -0xC($s5)
    ctx->pc = 0x101f38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967284)));
label_101f3c:
    // 0x101f3c: 0x8eb2fff8  lw          $s2, -0x8($s5)
    ctx->pc = 0x101f3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_101f40:
    // 0x101f40: 0x2301018  mult        $v0, $s1, $s0
    ctx->pc = 0x101f40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_101f44:
    // 0x101f44: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_101f48:
    if (ctx->pc == 0x101F48u) {
        ctx->pc = 0x101F48u;
            // 0x101f48: 0x2a29821  addu        $s3, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->pc = 0x101F4Cu;
        goto label_101f4c;
    }
    ctx->pc = 0x101F44u;
    {
        const bool branch_taken_0x101f44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F44u;
            // 0x101f48: 0x2a29821  addu        $s3, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f44) {
            ctx->pc = 0x101F70u;
            goto label_101f70;
        }
    }
    ctx->pc = 0x101F4Cu;
label_101f4c:
    // 0x101f4c: 0x2719823  subu        $s3, $s3, $s1
    ctx->pc = 0x101f4cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_101f50:
    // 0x101f50: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_101f54:
    // 0x101f54: 0x240f809  jalr        $s2
label_101f58:
    if (ctx->pc == 0x101F58u) {
        ctx->pc = 0x101F58u;
            // 0x101f58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101F5Cu;
        goto label_101f5c;
    }
    ctx->pc = 0x101F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x101F5Cu);
        ctx->pc = 0x101F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F54u;
            // 0x101f58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x101F5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101F5Cu; }
            if (ctx->pc != 0x101F5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x101F5Cu;
label_101f5c:
    // 0x101f5c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x101f5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_101f60:
    // 0x101f60: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x101f60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_101f64:
    // 0x101f64: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_101f68:
    if (ctx->pc == 0x101F68u) {
        ctx->pc = 0x101F68u;
            // 0x101f68: 0x2719823  subu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->pc = 0x101F6Cu;
        goto label_101f6c;
    }
    ctx->pc = 0x101F64u;
    {
        const bool branch_taken_0x101f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101f64) {
            ctx->pc = 0x101F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101F64u;
            // 0x101f68: 0x2719823  subu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x101F50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101f50;
        }
    }
    ctx->pc = 0x101F6Cu;
label_101f6c:
    // 0x101f6c: 0x0  nop
    ctx->pc = 0x101f6cu;
    // NOP
label_101f70:
    // 0x101f70: 0xc04008c  jal         func_100230
label_101f74:
    if (ctx->pc == 0x101F74u) {
        ctx->pc = 0x101F74u;
            // 0x101f74: 0x26a4fff0  addiu       $a0, $s5, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
        ctx->pc = 0x101F78u;
        goto label_101f78;
    }
    ctx->pc = 0x101F70u;
    SET_GPR_U32(ctx, 31, 0x101F78u);
    ctx->pc = 0x101F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101F70u;
            // 0x101f74: 0x26a4fff0  addiu       $a0, $s5, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F78u; }
        if (ctx->pc != 0x101F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F78u; }
        if (ctx->pc != 0x101F78u) { return; }
    }
    ctx->pc = 0x101F78u;
label_101f78:
    // 0x101f78: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x101f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_101f7c:
    // 0x101f7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x101f7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_101f80:
    // 0x101f80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x101f80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_101f84:
    // 0x101f84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x101f84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_101f88:
    // 0x101f88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101f88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_101f8c:
    // 0x101f8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_101f90:
    // 0x101f90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_101f94:
    // 0x101f94: 0x3e00008  jr          $ra
label_101f98:
    if (ctx->pc == 0x101F98u) {
        ctx->pc = 0x101F98u;
            // 0x101f98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x101F9Cu;
        goto label_101f9c;
    }
    ctx->pc = 0x101F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F94u;
            // 0x101f98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101F9Cu;
label_101f9c:
    // 0x101f9c: 0x0  nop
    ctx->pc = 0x101f9cu;
    // NOP
}
