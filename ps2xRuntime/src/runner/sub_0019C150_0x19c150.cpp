#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019C150
// Address: 0x19c150 - 0x19c200
void sub_0019C150_0x19c150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C150_0x19c150");
#endif

    switch (ctx->pc) {
        case 0x19c184u: goto label_19c184;
        case 0x19c1b8u: goto label_19c1b8;
        case 0x19c1c0u: goto label_19c1c0;
        case 0x19c1e0u: goto label_19c1e0;
        case 0x19c1e8u: goto label_19c1e8;
        default: break;
    }

    ctx->pc = 0x19c150u;

    // 0x19c150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c15c: 0x806705a  j           func_19C168
    ctx->pc = 0x19C15Cu;
    ctx->pc = 0x19C160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C15Cu;
            // 0x19c160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C168u;
    goto label_19c168;
    ctx->pc = 0x19C164u;
    // 0x19c164: 0x0  nop
    ctx->pc = 0x19c164u;
    // NOP
label_19c168:
    // 0x19c168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c16c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19c16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c174: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19c174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19c178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c17c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19C17Cu;
    SET_GPR_U32(ctx, 31, 0x19C184u);
    ctx->pc = 0x19C180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C17Cu;
            // 0x19c180: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C184u; }
        if (ctx->pc != 0x19C184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C184u; }
        if (ctx->pc != 0x19C184u) { return; }
    }
    ctx->pc = 0x19C184u;
label_19c184:
    // 0x19c184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c188: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C188u;
    {
        const bool branch_taken_0x19c188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19C18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C188u;
            // 0x19c18c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c188) {
            ctx->pc = 0x19C1B0u;
            goto label_19c1b0;
        }
    }
    ctx->pc = 0x19C190u;
    // 0x19c190: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19c190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19c194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c198: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c19c: 0x248494f8  addiu       $a0, $a0, -0x6B08
    ctx->pc = 0x19c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939896));
    // 0x19c1a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c1a4: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19C1A4u;
    ctx->pc = 0x19C1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C1A4u;
            // 0x19c1a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19C1ACu;
    // 0x19c1ac: 0x0  nop
    ctx->pc = 0x19c1acu;
    // NOP
label_19c1b0:
    // 0x19c1b0: 0xc068a76  jal         func_1A29D8
    ctx->pc = 0x19C1B0u;
    SET_GPR_U32(ctx, 31, 0x19C1B8u);
    ctx->pc = 0x1A29D8u;
    if (runtime->hasFunction(0x1A29D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A29D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C1B8u; }
        if (ctx->pc != 0x19C1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A29D8_0x1a29d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C1B8u; }
        if (ctx->pc != 0x19C1B8u) { return; }
    }
    ctx->pc = 0x19C1B8u;
label_19c1b8:
    // 0x19c1b8: 0xc067080  jal         func_19C200
    ctx->pc = 0x19C1B8u;
    SET_GPR_U32(ctx, 31, 0x19C1C0u);
    ctx->pc = 0x19C1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C1B8u;
            // 0x19c1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C200u;
    if (runtime->hasFunction(0x19C200u)) {
        auto targetFn = runtime->lookupFunction(0x19C200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C1C0u; }
        if (ctx->pc != 0x19C1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C200_0x19c200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C1C0u; }
        if (ctx->pc != 0x19C1C0u) { return; }
    }
    ctx->pc = 0x19C1C0u;
label_19c1c0:
    // 0x19c1c0: 0xae110430  sw          $s1, 0x430($s0)
    ctx->pc = 0x19c1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1072), GPR_U32(ctx, 17));
    // 0x19c1c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c1c8: 0xae000448  sw          $zero, 0x448($s0)
    ctx->pc = 0x19c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1096), GPR_U32(ctx, 0));
    // 0x19c1cc: 0xae020444  sw          $v0, 0x444($s0)
    ctx->pc = 0x19c1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1092), GPR_U32(ctx, 2));
    // 0x19c1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c1d4: 0xae00044c  sw          $zero, 0x44C($s0)
    ctx->pc = 0x19c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1100), GPR_U32(ctx, 0));
    // 0x19c1d8: 0xc066f6c  jal         func_19BDB0
    ctx->pc = 0x19C1D8u;
    SET_GPR_U32(ctx, 31, 0x19C1E0u);
    ctx->pc = 0x19C1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C1D8u;
            // 0x19c1dc: 0xae000450  sw          $zero, 0x450($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BDB0u;
    if (runtime->hasFunction(0x19BDB0u)) {
        auto targetFn = runtime->lookupFunction(0x19BDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C1E0u; }
        if (ctx->pc != 0x19C1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BDB0_0x19bdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C1E0u; }
        if (ctx->pc != 0x19C1E0u) { return; }
    }
    ctx->pc = 0x19C1E0u;
label_19c1e0:
    // 0x19c1e0: 0xc068a76  jal         func_1A29D8
    ctx->pc = 0x19C1E0u;
    SET_GPR_U32(ctx, 31, 0x19C1E8u);
    ctx->pc = 0x19C1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C1E0u;
            // 0x19c1e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A29D8u;
    if (runtime->hasFunction(0x1A29D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A29D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C1E8u; }
        if (ctx->pc != 0x19C1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A29D8_0x1a29d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C1E8u; }
        if (ctx->pc != 0x19C1E8u) { return; }
    }
    ctx->pc = 0x19C1E8u;
label_19c1e8:
    // 0x19c1e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c1ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c1ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c1f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c1f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c1f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c1f8: 0x8065e92  j           func_197A48
    ctx->pc = 0x19C1F8u;
    ctx->pc = 0x19C1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C1F8u;
            // 0x19c1fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197A48u;
    if (runtime->hasFunction(0x197A48u)) {
        auto targetFn = runtime->lookupFunction(0x197A48u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00197A48_0x197a48(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19C200u;
}
