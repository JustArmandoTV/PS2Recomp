#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4F68
// Address: 0x1a4f68 - 0x1a50a0
void sub_001A4F68_0x1a4f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4F68_0x1a4f68");
#endif

    switch (ctx->pc) {
        case 0x1a4fa0u: goto label_1a4fa0;
        case 0x1a4fd0u: goto label_1a4fd0;
        case 0x1a4ff0u: goto label_1a4ff0;
        case 0x1a5010u: goto label_1a5010;
        case 0x1a502cu: goto label_1a502c;
        case 0x1a5040u: goto label_1a5040;
        case 0x1a5058u: goto label_1a5058;
        case 0x1a506cu: goto label_1a506c;
        case 0x1a5080u: goto label_1a5080;
        default: break;
    }

    ctx->pc = 0x1a4f68u;

    // 0x1a4f68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a4f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a4f6c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a4f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a4f70: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a4f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4f74: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a4f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1a4f78: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x1a4f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1a4f7c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a4f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1a4f80: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a4f80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4f84: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1a4f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1a4f88: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a4f88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4f8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a4f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a4f90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a4f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4f94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a4f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4f98: 0xc069428  jal         func_1A50A0
    ctx->pc = 0x1A4F98u;
    SET_GPR_U32(ctx, 31, 0x1A4FA0u);
    ctx->pc = 0x1A4F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F98u;
            // 0x1a4f9c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A50A0u;
    if (runtime->hasFunction(0x1A50A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A50A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4FA0u; }
        if (ctx->pc != 0x1A4FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A50A0_0x1a50a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4FA0u; }
        if (ctx->pc != 0x1A4FA0u) { return; }
    }
    ctx->pc = 0x1A4FA0u;
label_1a4fa0:
    // 0x1a4fa0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a4fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a4fa4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1a4fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a4fa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4fac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a4facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4fb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a4fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4fb4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a4fb4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a4fb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a4fb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4fbc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A4FBCu;
    {
        const bool branch_taken_0x1a4fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4fbc) {
            ctx->pc = 0x1A4FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4FBCu;
            // 0x1a4fc0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A4FC4u;
            goto label_1a4fc4;
        }
    }
    ctx->pc = 0x1A4FC4u;
label_1a4fc4:
    // 0x1a4fc4: 0x4010  mfhi        $t0
    ctx->pc = 0x1a4fc4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x1a4fc8: 0xc069438  jal         func_1A50E0
    ctx->pc = 0x1A4FC8u;
    SET_GPR_U32(ctx, 31, 0x1A4FD0u);
    ctx->pc = 0x1A50E0u;
    if (runtime->hasFunction(0x1A50E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A50E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4FD0u; }
        if (ctx->pc != 0x1A4FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A50E0_0x1a50e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4FD0u; }
        if (ctx->pc != 0x1A4FD0u) { return; }
    }
    ctx->pc = 0x1A4FD0u;
label_1a4fd0:
    // 0x1a4fd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4fd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a4fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4fd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a4fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4fdc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a4fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4fe0: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A4FE0u;
    {
        const bool branch_taken_0x1a4fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4FE0u;
            // 0x1a4fe4: 0x24080800  addiu       $t0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fe0) {
            ctx->pc = 0x1A5084u;
            goto label_1a5084;
        }
    }
    ctx->pc = 0x1A4FE8u;
    // 0x1a4fe8: 0xc069438  jal         func_1A50E0
    ctx->pc = 0x1A4FE8u;
    SET_GPR_U32(ctx, 31, 0x1A4FF0u);
    ctx->pc = 0x1A50E0u;
    if (runtime->hasFunction(0x1A50E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A50E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4FF0u; }
        if (ctx->pc != 0x1A4FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A50E0_0x1a50e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4FF0u; }
        if (ctx->pc != 0x1A4FF0u) { return; }
    }
    ctx->pc = 0x1A4FF0u;
label_1a4ff0:
    // 0x1a4ff0: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A4FF0u;
    {
        const bool branch_taken_0x1a4ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ff0) {
            ctx->pc = 0x1A4FF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4FF0u;
            // 0x1a4ff4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5088u;
            goto label_1a5088;
        }
    }
    ctx->pc = 0x1A4FF8u;
    // 0x1a4ff8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ffc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a4ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5000: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1a5000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5004: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a5004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5008: 0xc069438  jal         func_1A50E0
    ctx->pc = 0x1A5008u;
    SET_GPR_U32(ctx, 31, 0x1A5010u);
    ctx->pc = 0x1A500Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5008u;
            // 0x1a500c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A50E0u;
    if (runtime->hasFunction(0x1A50E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A50E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5010u; }
        if (ctx->pc != 0x1A5010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A50E0_0x1a50e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5010u; }
        if (ctx->pc != 0x1A5010u) { return; }
    }
    ctx->pc = 0x1A5010u;
label_1a5010:
    // 0x1a5010: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5014: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1a5014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a5018: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1a5018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a501c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A501Cu;
    {
        const bool branch_taken_0x1a501c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A501Cu;
            // 0x1a5020: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a501c) {
            ctx->pc = 0x1A5084u;
            goto label_1a5084;
        }
    }
    ctx->pc = 0x1A5024u;
    // 0x1a5024: 0xc0694ba  jal         func_1A52E8
    ctx->pc = 0x1A5024u;
    SET_GPR_U32(ctx, 31, 0x1A502Cu);
    ctx->pc = 0x1A5028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5024u;
            // 0x1a5028: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A52E8u;
    if (runtime->hasFunction(0x1A52E8u)) {
        auto targetFn = runtime->lookupFunction(0x1A52E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A502Cu; }
        if (ctx->pc != 0x1A502Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A52E8_0x1a52e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A502Cu; }
        if (ctx->pc != 0x1A502Cu) { return; }
    }
    ctx->pc = 0x1A502Cu;
label_1a502c:
    // 0x1a502c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a502cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5030: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a5030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5034: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a5034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5038: 0xc0694e8  jal         func_1A53A0
    ctx->pc = 0x1A5038u;
    SET_GPR_U32(ctx, 31, 0x1A5040u);
    ctx->pc = 0x1A503Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5038u;
            // 0x1a503c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A53A0u;
    if (runtime->hasFunction(0x1A53A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A53A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5040u; }
        if (ctx->pc != 0x1A5040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A53A0_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5040u; }
        if (ctx->pc != 0x1A5040u) { return; }
    }
    ctx->pc = 0x1A5040u;
label_1a5040:
    // 0x1a5040: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5044: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a5044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5048: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x1a5048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a504c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a504cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5050: 0xc0694ba  jal         func_1A52E8
    ctx->pc = 0x1A5050u;
    SET_GPR_U32(ctx, 31, 0x1A5058u);
    ctx->pc = 0x1A5054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5050u;
            // 0x1a5054: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A52E8u;
    if (runtime->hasFunction(0x1A52E8u)) {
        auto targetFn = runtime->lookupFunction(0x1A52E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5058u; }
        if (ctx->pc != 0x1A5058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A52E8_0x1a52e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5058u; }
        if (ctx->pc != 0x1A5058u) { return; }
    }
    ctx->pc = 0x1A5058u;
label_1a5058:
    // 0x1a5058: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a505c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a505cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5060: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a5060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5064: 0xc0694e8  jal         func_1A53A0
    ctx->pc = 0x1A5064u;
    SET_GPR_U32(ctx, 31, 0x1A506Cu);
    ctx->pc = 0x1A5068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5064u;
            // 0x1a5068: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A53A0u;
    if (runtime->hasFunction(0x1A53A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A53A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A506Cu; }
        if (ctx->pc != 0x1A506Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A53A0_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A506Cu; }
        if (ctx->pc != 0x1A506Cu) { return; }
    }
    ctx->pc = 0x1A506Cu;
label_1a506c:
    // 0x1a506c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a506cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5070: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a5070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5074: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a5074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5078: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1A5078u;
    SET_GPR_U32(ctx, 31, 0x1A5080u);
    ctx->pc = 0x1A507Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5078u;
            // 0x1a507c: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (runtime->hasFunction(0x1A54C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A54C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5080u; }
        if (ctx->pc != 0x1A5080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A54C8_0x1a54c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5080u; }
        if (ctx->pc != 0x1A5080u) { return; }
    }
    ctx->pc = 0x1A5080u;
label_1a5080:
    // 0x1a5080: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5084:
    // 0x1a5084: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a5084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5088:
    // 0x1a5088: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a5088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a508c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a508cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5090: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1a5090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a5094: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a5094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5098: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A509Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5098u;
            // 0x1a509c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A50A0u;
}
