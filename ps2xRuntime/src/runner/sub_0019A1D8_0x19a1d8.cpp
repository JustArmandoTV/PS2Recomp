#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019A1D8
// Address: 0x19a1d8 - 0x19a280
void sub_0019A1D8_0x19a1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A1D8_0x19a1d8");
#endif

    switch (ctx->pc) {
        case 0x19a224u: goto label_19a224;
        case 0x19a258u: goto label_19a258;
        case 0x19a260u: goto label_19a260;
        default: break;
    }

    ctx->pc = 0x19a1d8u;

    // 0x19a1d8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x19a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19a1dc: 0x8486000c  lh          $a2, 0xC($a0)
    ctx->pc = 0x19a1dcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x19a1e0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x19a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x19a1e4: 0x8483000e  lh          $v1, 0xE($a0)
    ctx->pc = 0x19a1e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x19a1e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a1ec: 0xaca60014  sw          $a2, 0x14($a1)
    ctx->pc = 0x19a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 6));
    // 0x19a1f0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x19a1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x19a1f4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x19a1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x19a1f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x19a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19a1fc: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x19a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x19a200: 0x3e00008  jr          $ra
    ctx->pc = 0x19A200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A200u;
            // 0x19a204: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A208u;
    // 0x19a208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a20c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a214: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19a214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19a218: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a21c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19A21Cu;
    SET_GPR_U32(ctx, 31, 0x19A224u);
    ctx->pc = 0x19A220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A21Cu;
            // 0x19a220: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A224u; }
        if (ctx->pc != 0x19A224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A224u; }
        if (ctx->pc != 0x19A224u) { return; }
    }
    ctx->pc = 0x19A224u;
label_19a224:
    // 0x19a224: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a228: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19a228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a22c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A22Cu;
    {
        const bool branch_taken_0x19a22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19A230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A22Cu;
            // 0x19a230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a22c) {
            ctx->pc = 0x19A250u;
            goto label_19a250;
        }
    }
    ctx->pc = 0x19A234u;
    // 0x19a234: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19a234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19a238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a23c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19a23cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a240: 0x24848d10  addiu       $a0, $a0, -0x72F0
    ctx->pc = 0x19a240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937872));
    // 0x19a244: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a248: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19A248u;
    ctx->pc = 0x19A24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A248u;
            // 0x19a24c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19A250u;
label_19a250:
    // 0x19a250: 0xc0666b2  jal         func_199AC8
    ctx->pc = 0x19A250u;
    SET_GPR_U32(ctx, 31, 0x19A258u);
    ctx->pc = 0x199AC8u;
    if (runtime->hasFunction(0x199AC8u)) {
        auto targetFn = runtime->lookupFunction(0x199AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A258u; }
        if (ctx->pc != 0x19A258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199AC8_0x199ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A258u; }
        if (ctx->pc != 0x19A258u) { return; }
    }
    ctx->pc = 0x19A258u;
label_19a258:
    // 0x19a258: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x19A258u;
    SET_GPR_U32(ctx, 31, 0x19A260u);
    ctx->pc = 0x19A25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A258u;
            // 0x19a25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A260u; }
        if (ctx->pc != 0x19A260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A260u; }
        if (ctx->pc != 0x19A260u) { return; }
    }
    ctx->pc = 0x19A260u;
label_19a260:
    // 0x19a260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19a260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a264: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a26c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19a26cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a274: 0x806d1f8  j           func_1B47E0
    ctx->pc = 0x19A274u;
    ctx->pc = 0x19A278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A274u;
            // 0x19a278: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B47E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B47E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19A27Cu;
    // 0x19a27c: 0x0  nop
    ctx->pc = 0x19a27cu;
    // NOP
}
