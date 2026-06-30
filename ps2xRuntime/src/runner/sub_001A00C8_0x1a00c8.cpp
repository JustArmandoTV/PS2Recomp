#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A00C8
// Address: 0x1a00c8 - 0x1a0188
void sub_001A00C8_0x1a00c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A00C8_0x1a00c8");
#endif

    switch (ctx->pc) {
        case 0x1a00e4u: goto label_1a00e4;
        case 0x1a0138u: goto label_1a0138;
        default: break;
    }

    ctx->pc = 0x1a00c8u;

    // 0x1a00c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a00c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a00cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a00ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a00d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a00d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a00d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a00d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a00d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a00d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a00dc: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x1A00DCu;
    SET_GPR_U32(ctx, 31, 0x1A00E4u);
    ctx->pc = 0x1A00E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A00DCu;
            // 0x1a00e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A00E4u; }
        if (ctx->pc != 0x1A00E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A00E4u; }
        if (ctx->pc != 0x1A00E4u) { return; }
    }
    ctx->pc = 0x1A00E4u;
label_1a00e4:
    // 0x1a00e4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a00e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a00e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a00e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a00ec: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A00ECu;
    {
        const bool branch_taken_0x1a00ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A00F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A00ECu;
            // 0x1a00f0: 0x2484a3e8  addiu       $a0, $a0, -0x5C18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00ec) {
            ctx->pc = 0x1A0108u;
            goto label_1a0108;
        }
    }
    ctx->pc = 0x1A00F4u;
    // 0x1a00f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a00f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a00f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a00f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a00fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a00fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0100: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x1A0100u;
    ctx->pc = 0x1A0104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0100u;
            // 0x1a0104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A0108u;
label_1a0108:
    // 0x1a0108: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0108u;
    {
        const bool branch_taken_0x1a0108 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0108) {
            ctx->pc = 0x1A010Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0108u;
            // 0x1a010c: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0130u;
            goto label_1a0130;
        }
    }
    ctx->pc = 0x1A0110u;
    // 0x1a0110: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a0110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a0114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a011c: 0x2484a418  addiu       $a0, $a0, -0x5BE8
    ctx->pc = 0x1a011cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943768));
    // 0x1a0120: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0124: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x1A0124u;
    ctx->pc = 0x1A0128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0124u;
            // 0x1a0128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A012Cu;
    // 0x1a012c: 0x0  nop
    ctx->pc = 0x1a012cu;
    // NOP
label_1a0130:
    // 0x1a0130: 0xc060038  jal         func_1800E0
    ctx->pc = 0x1A0130u;
    SET_GPR_U32(ctx, 31, 0x1A0138u);
    ctx->pc = 0x1A0134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0130u;
            // 0x1a0134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1800E0u;
    if (runtime->hasFunction(0x1800E0u)) {
        auto targetFn = runtime->lookupFunction(0x1800E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0138u; }
        if (ctx->pc != 0x1A0138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001800E0_0x1800e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0138u; }
        if (ctx->pc != 0x1A0138u) { return; }
    }
    ctx->pc = 0x1A0138u;
label_1a0138:
    // 0x1a0138: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a0138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a013c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a013cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0140: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0140u;
    {
        const bool branch_taken_0x1a0140 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A0144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0140u;
            // 0x1a0144: 0x2484a440  addiu       $a0, $a0, -0x5BC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0140) {
            ctx->pc = 0x1A0168u;
            goto label_1a0168;
        }
    }
    ctx->pc = 0x1A0148u;
    // 0x1a0148: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a0148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a014c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a014cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0150: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a0150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1a0154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0158: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a015c: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x1A015Cu;
    ctx->pc = 0x1A0160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A015Cu;
            // 0x1a0160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A0164u;
    // 0x1a0164: 0x0  nop
    ctx->pc = 0x1a0164u;
    // NOP
label_1a0168:
    // 0x1a0168: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1a0168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1a016c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a016cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0170: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a0170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a0174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0178: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x1a0178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
    // 0x1a017c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a017cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0180: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0180u;
            // 0x1a0184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0188u;
}
