#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0BA0
// Address: 0x1a0ba0 - 0x1a0ce0
void sub_001A0BA0_0x1a0ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0BA0_0x1a0ba0");
#endif

    switch (ctx->pc) {
        case 0x1a0bbcu: goto label_1a0bbc;
        case 0x1a0bc8u: goto label_1a0bc8;
        case 0x1a0be0u: goto label_1a0be0;
        case 0x1a0bf8u: goto label_1a0bf8;
        case 0x1a0c60u: goto label_1a0c60;
        case 0x1a0c7cu: goto label_1a0c7c;
        case 0x1a0cc8u: goto label_1a0cc8;
        default: break;
    }

    ctx->pc = 0x1a0ba0u;

    // 0x1a0ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0ba4: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x1a0ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1a0ba8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a0ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a0bac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0bb0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a0bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a0bb4: 0xc06752c  jal         func_19D4B0
    ctx->pc = 0x1A0BB4u;
    SET_GPR_U32(ctx, 31, 0x1A0BBCu);
    ctx->pc = 0x1A0BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BB4u;
            // 0x1a0bb8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D4B0u;
    if (runtime->hasFunction(0x19D4B0u)) {
        auto targetFn = runtime->lookupFunction(0x19D4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BBCu; }
        if (ctx->pc != 0x1A0BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D4B0_0x19d4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BBCu; }
        if (ctx->pc != 0x1A0BBCu) { return; }
    }
    ctx->pc = 0x1A0BBCu;
label_1a0bbc:
    // 0x1a0bbc: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1a0bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1a0bc0: 0xc06dee0  jal         func_1B7B80
    ctx->pc = 0x1A0BC0u;
    SET_GPR_U32(ctx, 31, 0x1A0BC8u);
    ctx->pc = 0x1A0BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BC0u;
            // 0x1a0bc4: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7B80u;
    if (runtime->hasFunction(0x1B7B80u)) {
        auto targetFn = runtime->lookupFunction(0x1B7B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BC8u; }
        if (ctx->pc != 0x1A0BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7B80_0x1b7b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BC8u; }
        if (ctx->pc != 0x1A0BC8u) { return; }
    }
    ctx->pc = 0x1A0BC8u;
label_1a0bc8:
    // 0x1a0bc8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a0bcc: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0BCCu;
    {
        const bool branch_taken_0x1a0bcc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A0BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BCCu;
            // 0x1a0bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bcc) {
            ctx->pc = 0x1A0BF0u;
            goto label_1a0bf0;
        }
    }
    ctx->pc = 0x1A0BD4u;
    // 0x1a0bd4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a0bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a0bd8: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x1A0BD8u;
    SET_GPR_U32(ctx, 31, 0x1A0BE0u);
    ctx->pc = 0x1A0BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BD8u;
            // 0x1a0bdc: 0x2484a768  addiu       $a0, $a0, -0x5898 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BE0u; }
        if (ctx->pc != 0x1A0BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BE0u; }
        if (ctx->pc != 0x1A0BE0u) { return; }
    }
    ctx->pc = 0x1A0BE0u;
label_1a0be0:
    // 0x1a0be0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0be4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a0be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0be8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A0BE8u;
    {
        const bool branch_taken_0x1a0be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BE8u;
            // 0x1a0bec: 0xae030578  sw          $v1, 0x578($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0be8) {
            ctx->pc = 0x1A0C4Cu;
            goto label_1a0c4c;
        }
    }
    ctx->pc = 0x1A0BF0u;
label_1a0bf0:
    // 0x1a0bf0: 0xc066936  jal         func_19A4D8
    ctx->pc = 0x1A0BF0u;
    SET_GPR_U32(ctx, 31, 0x1A0BF8u);
    ctx->pc = 0x19A4D8u;
    if (runtime->hasFunction(0x19A4D8u)) {
        auto targetFn = runtime->lookupFunction(0x19A4D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BF8u; }
        if (ctx->pc != 0x1A0BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A4D8_0x19a4d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BF8u; }
        if (ctx->pc != 0x1A0BF8u) { return; }
    }
    ctx->pc = 0x1A0BF8u;
label_1a0bf8:
    // 0x1a0bf8: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x1a0bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a0bfc: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1a0bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a0c00: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a0c00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a0c04: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a0c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a0c08: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a0c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a0c0c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a0c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a0c10: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1a0c10u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a0c14: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A0C14u;
    {
        const bool branch_taken_0x1a0c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0c14) {
            ctx->pc = 0x1A0C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C14u;
            // 0x1a0c18: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0C1Cu;
            goto label_1a0c1c;
        }
    }
    ctx->pc = 0x1A0C1Cu;
label_1a0c1c:
    // 0x1a0c1c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0c20: 0x2012  mflo        $a0
    ctx->pc = 0x1a0c20u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1a0c24: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x1a0c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1a0c28: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0c2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a0c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a0c30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a0c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0c34: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1a0c34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a0c38: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a0c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a0c3c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a0c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a0c40: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x1a0c40u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1a0c44: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1a0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a0c48: 0xae020578  sw          $v0, 0x578($s0)
    ctx->pc = 0x1a0c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1400), GPR_U32(ctx, 2));
label_1a0c4c:
    // 0x1a0c4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a0c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0c50: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a0c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a0c54: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C54u;
            // 0x1a0c58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0C5Cu;
    // 0x1a0c5c: 0x0  nop
    ctx->pc = 0x1a0c5cu;
    // NOP
label_1a0c60:
    // 0x1a0c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0c64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a0c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c68: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1a0c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a0c6c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a0c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a0c70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a0c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a0c74: 0xc067720  jal         func_19DC80
    ctx->pc = 0x1A0C74u;
    SET_GPR_U32(ctx, 31, 0x1A0C7Cu);
    ctx->pc = 0x1A0C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C74u;
            // 0x1a0c78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DC80u;
    if (runtime->hasFunction(0x19DC80u)) {
        auto targetFn = runtime->lookupFunction(0x19DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C7Cu; }
        if (ctx->pc != 0x1A0C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019DC80_0x19dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C7Cu; }
        if (ctx->pc != 0x1A0C7Cu) { return; }
    }
    ctx->pc = 0x1A0C7Cu;
label_1a0c7c:
    // 0x1a0c7c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1a0c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a0c80: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x1a0c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1a0c84: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0c88: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a0c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0c8c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A0C8Cu;
    {
        const bool branch_taken_0x1a0c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0c8c) {
            ctx->pc = 0x1A0C90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C8Cu;
            // 0x1a0c90: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0C94u;
            goto label_1a0c94;
        }
    }
    ctx->pc = 0x1A0C94u;
label_1a0c94:
    // 0x1a0c94: 0x8e020578  lw          $v0, 0x578($s0)
    ctx->pc = 0x1a0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1400)));
    // 0x1a0c98: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1a0c98u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a0c9c: 0x1812  mflo        $v1
    ctx->pc = 0x1a0c9cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1a0ca0: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1a0ca0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a0ca4: 0x1012  mflo        $v0
    ctx->pc = 0x1a0ca4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1a0ca8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1a0ca8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a0cac: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0CACu;
    {
        const bool branch_taken_0x1a0cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0cac) {
            ctx->pc = 0x1A0CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CACu;
            // 0x1a0cb0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0CD4u;
            goto label_1a0cd4;
        }
    }
    ctx->pc = 0x1A0CB4u;
    // 0x1a0cb4: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x1a0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x1a0cb8: 0x54460006  bnel        $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0CB8u;
    {
        const bool branch_taken_0x1a0cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1a0cb8) {
            ctx->pc = 0x1A0CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CB8u;
            // 0x1a0cbc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0CD4u;
            goto label_1a0cd4;
        }
    }
    ctx->pc = 0x1A0CC0u;
    // 0x1a0cc0: 0xc0680d8  jal         func_1A0360
    ctx->pc = 0x1A0CC0u;
    SET_GPR_U32(ctx, 31, 0x1A0CC8u);
    ctx->pc = 0x1A0CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CC0u;
            // 0x1a0cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0360u;
    if (runtime->hasFunction(0x1A0360u)) {
        auto targetFn = runtime->lookupFunction(0x1A0360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CC8u; }
        if (ctx->pc != 0x1A0CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0360_0x1a0360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CC8u; }
        if (ctx->pc != 0x1A0CC8u) { return; }
    }
    ctx->pc = 0x1A0CC8u;
label_1a0cc8:
    // 0x1a0cc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0ccc: 0xae020564  sw          $v0, 0x564($s0)
    ctx->pc = 0x1a0cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
    // 0x1a0cd0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a0cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0cd4:
    // 0x1a0cd4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a0cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a0cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CD8u;
            // 0x1a0cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0CE0u;
}
