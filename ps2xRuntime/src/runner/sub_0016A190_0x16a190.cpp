#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016A190
// Address: 0x16a190 - 0x16a2e8
void sub_0016A190_0x16a190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A190_0x16a190");
#endif

    switch (ctx->pc) {
        case 0x16a1b8u: goto label_16a1b8;
        case 0x16a1ccu: goto label_16a1cc;
        case 0x16a1d4u: goto label_16a1d4;
        case 0x16a220u: goto label_16a220;
        case 0x16a22cu: goto label_16a22c;
        case 0x16a238u: goto label_16a238;
        case 0x16a250u: goto label_16a250;
        case 0x16a25cu: goto label_16a25c;
        case 0x16a268u: goto label_16a268;
        case 0x16a274u: goto label_16a274;
        case 0x16a2b4u: goto label_16a2b4;
        case 0x16a2c4u: goto label_16a2c4;
        case 0x16a2ccu: goto label_16a2cc;
        default: break;
    }

    ctx->pc = 0x16a190u;

    // 0x16a190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a198: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a19c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a1a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16a1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16a1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16a1a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16a1a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16a1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16a1b0: 0xc05c2e2  jal         func_170B88
    ctx->pc = 0x16A1B0u;
    SET_GPR_U32(ctx, 31, 0x16A1B8u);
    ctx->pc = 0x16A1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A1B0u;
            // 0x16a1b4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B88u;
    if (runtime->hasFunction(0x170B88u)) {
        auto targetFn = runtime->lookupFunction(0x170B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1B8u; }
        if (ctx->pc != 0x16A1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B88_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1B8u; }
        if (ctx->pc != 0x16A1B8u) { return; }
    }
    ctx->pc = 0x16A1B8u;
label_16a1b8:
    // 0x16a1b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a1bc: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A1BCu;
    {
        const bool branch_taken_0x16a1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a1bc) {
            ctx->pc = 0x16A1CCu;
            goto label_16a1cc;
        }
    }
    ctx->pc = 0x16A1C4u;
    // 0x16a1c4: 0xc05c396  jal         func_170E58
    ctx->pc = 0x16A1C4u;
    SET_GPR_U32(ctx, 31, 0x16A1CCu);
    ctx->pc = 0x16A1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A1C4u;
            // 0x16a1c8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170E58u;
    if (runtime->hasFunction(0x170E58u)) {
        auto targetFn = runtime->lookupFunction(0x170E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1CCu; }
        if (ctx->pc != 0x16A1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170E58_0x170e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1CCu; }
        if (ctx->pc != 0x16A1CCu) { return; }
    }
    ctx->pc = 0x16A1CCu;
label_16a1cc:
    // 0x16a1cc: 0xc0599d2  jal         func_166748
    ctx->pc = 0x16A1CCu;
    SET_GPR_U32(ctx, 31, 0x16A1D4u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1D4u; }
        if (ctx->pc != 0x16A1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1D4u; }
        if (ctx->pc != 0x16A1D4u) { return; }
    }
    ctx->pc = 0x16A1D4u;
label_16a1d4:
    // 0x16a1d4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x16a1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16a1d8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x16a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16a1dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16a1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a1e0: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x16a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x16a1e4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x16a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16a1e8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x16a1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x16a1ec: 0x222202a  slt         $a0, $s1, $v0
    ctx->pc = 0x16a1ecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16a1f0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x16a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x16a1f4: 0x224100b  movn        $v0, $s1, $a0
    ctx->pc = 0x16a1f4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
    // 0x16a1f8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x16a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x16a1fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16A1FCu;
    {
        const bool branch_taken_0x16a1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A1FCu;
            // 0x16a200: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a1fc) {
            ctx->pc = 0x16A218u;
            goto label_16a218;
        }
    }
    ctx->pc = 0x16A204u;
    // 0x16a204: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16a208: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x16a208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x16a20c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16A20Cu;
    {
        const bool branch_taken_0x16a20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A20Cu;
            // 0x16a210: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a20c) {
            ctx->pc = 0x16A26Cu;
            goto label_16a26c;
        }
    }
    ctx->pc = 0x16A214u;
    // 0x16a214: 0x0  nop
    ctx->pc = 0x16a214u;
    // NOP
label_16a218:
    // 0x16a218: 0xc05c3ce  jal         func_170F38
    ctx->pc = 0x16A218u;
    SET_GPR_U32(ctx, 31, 0x16A220u);
    ctx->pc = 0x16A21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A218u;
            // 0x16a21c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170F38u;
    if (runtime->hasFunction(0x170F38u)) {
        auto targetFn = runtime->lookupFunction(0x170F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A220u; }
        if (ctx->pc != 0x16A220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170F38_0x170f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A220u; }
        if (ctx->pc != 0x16A220u) { return; }
    }
    ctx->pc = 0x16A220u;
label_16a220:
    // 0x16a220: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x16a220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16a224: 0xc05c792  jal         func_171E48
    ctx->pc = 0x16A224u;
    SET_GPR_U32(ctx, 31, 0x16A22Cu);
    ctx->pc = 0x16A228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A224u;
            // 0x16a228: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171E48u;
    if (runtime->hasFunction(0x171E48u)) {
        auto targetFn = runtime->lookupFunction(0x171E48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A22Cu; }
        if (ctx->pc != 0x16A22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171E48_0x171e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A22Cu; }
        if (ctx->pc != 0x16A22Cu) { return; }
    }
    ctx->pc = 0x16A22Cu;
label_16a22c:
    // 0x16a22c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x16a22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16a230: 0xc05c698  jal         func_171A60
    ctx->pc = 0x16A230u;
    SET_GPR_U32(ctx, 31, 0x16A238u);
    ctx->pc = 0x16A234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A230u;
            // 0x16a234: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171A60u;
    if (runtime->hasFunction(0x171A60u)) {
        auto targetFn = runtime->lookupFunction(0x171A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A238u; }
        if (ctx->pc != 0x16A238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171A60_0x171a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A238u; }
        if (ctx->pc != 0x16A238u) { return; }
    }
    ctx->pc = 0x16A238u;
label_16a238:
    // 0x16a238: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16a238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a23c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x16a23cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x16a240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a244: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x16a244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16a248: 0xc05c71e  jal         func_171C78
    ctx->pc = 0x16A248u;
    SET_GPR_U32(ctx, 31, 0x16A250u);
    ctx->pc = 0x16A24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A248u;
            // 0x16a24c: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171C78u;
    if (runtime->hasFunction(0x171C78u)) {
        auto targetFn = runtime->lookupFunction(0x171C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A250u; }
        if (ctx->pc != 0x16A250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171C78_0x171c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A250u; }
        if (ctx->pc != 0x16A250u) { return; }
    }
    ctx->pc = 0x16A250u;
label_16a250:
    // 0x16a250: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x16a250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16a254: 0xc05c2f2  jal         func_170BC8
    ctx->pc = 0x16A254u;
    SET_GPR_U32(ctx, 31, 0x16A25Cu);
    ctx->pc = 0x16A258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A254u;
            // 0x16a258: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170BC8u;
    if (runtime->hasFunction(0x170BC8u)) {
        auto targetFn = runtime->lookupFunction(0x170BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A25Cu; }
        if (ctx->pc != 0x16A25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170BC8_0x170bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A25Cu; }
        if (ctx->pc != 0x16A25Cu) { return; }
    }
    ctx->pc = 0x16A25Cu;
label_16a25c:
    // 0x16a25c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x16a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16a260: 0xc05c34c  jal         func_170D30
    ctx->pc = 0x16A260u;
    SET_GPR_U32(ctx, 31, 0x16A268u);
    ctx->pc = 0x16A264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A260u;
            // 0x16a264: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170D30u;
    if (runtime->hasFunction(0x170D30u)) {
        auto targetFn = runtime->lookupFunction(0x170D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A268u; }
        if (ctx->pc != 0x16A268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170D30_0x170d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A268u; }
        if (ctx->pc != 0x16A268u) { return; }
    }
    ctx->pc = 0x16A268u;
label_16a268:
    // 0x16a268: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x16a268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_16a26c:
    // 0x16a26c: 0xc0599d8  jal         func_166760
    ctx->pc = 0x16A26Cu;
    SET_GPR_U32(ctx, 31, 0x16A274u);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A274u; }
        if (ctx->pc != 0x16A274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A274u; }
        if (ctx->pc != 0x16A274u) { return; }
    }
    ctx->pc = 0x16A274u;
label_16a274:
    // 0x16a274: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16a274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a278: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a27c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a280: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16a280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a284: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16a284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a288: 0x3e00008  jr          $ra
    ctx->pc = 0x16A288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A288u;
            // 0x16a28c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A290u;
    // 0x16a290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a298: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a29c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a2a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16a2a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16a2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16a2a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16a2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16a2ac: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16A2ACu;
    SET_GPR_U32(ctx, 31, 0x16A2B4u);
    ctx->pc = 0x16A2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2ACu;
            // 0x16a2b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2B4u; }
        if (ctx->pc != 0x16A2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2B4u; }
        if (ctx->pc != 0x16A2B4u) { return; }
    }
    ctx->pc = 0x16A2B4u;
label_16a2b4:
    // 0x16a2b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16a2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2bc: 0xc05a8ba  jal         func_16A2E8
    ctx->pc = 0x16A2BCu;
    SET_GPR_U32(ctx, 31, 0x16A2C4u);
    ctx->pc = 0x16A2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2BCu;
            // 0x16a2c0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A2E8u;
    if (runtime->hasFunction(0x16A2E8u)) {
        auto targetFn = runtime->lookupFunction(0x16A2E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2C4u; }
        if (ctx->pc != 0x16A2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A2E8_0x16a2e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2C4u; }
        if (ctx->pc != 0x16A2C4u) { return; }
    }
    ctx->pc = 0x16A2C4u;
label_16a2c4:
    // 0x16a2c4: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16A2C4u;
    SET_GPR_U32(ctx, 31, 0x16A2CCu);
    ctx->pc = 0x16A2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2C4u;
            // 0x16a2c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2CCu; }
        if (ctx->pc != 0x16A2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2CCu; }
        if (ctx->pc != 0x16A2CCu) { return; }
    }
    ctx->pc = 0x16A2CCu;
label_16a2cc:
    // 0x16a2cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a2ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a2d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16a2d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16a2d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a2d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a2d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a2dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16a2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x16A2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2E0u;
            // 0x16a2e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A2E8u;
}
