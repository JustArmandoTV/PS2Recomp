#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B81F8
// Address: 0x1b81f8 - 0x1b8288
void sub_001B81F8_0x1b81f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B81F8_0x1b81f8");
#endif

    switch (ctx->pc) {
        case 0x1b821cu: goto label_1b821c;
        case 0x1b8234u: goto label_1b8234;
        case 0x1b8248u: goto label_1b8248;
        case 0x1b8268u: goto label_1b8268;
        default: break;
    }

    ctx->pc = 0x1b81f8u;

    // 0x1b81f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b81f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b81fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b81fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b8200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8204: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b8204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b8208: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b8208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b820c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b820cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b8210: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b8210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b8214: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B8214u;
    SET_GPR_U32(ctx, 31, 0x1B821Cu);
    ctx->pc = 0x1B8218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8214u;
            // 0x1b8218: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B821Cu; }
        if (ctx->pc != 0x1B821Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B821Cu; }
        if (ctx->pc != 0x1B821Cu) { return; }
    }
    ctx->pc = 0x1B821Cu;
label_1b821c:
    // 0x1b821c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b821cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b8220: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8224: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8224u;
    {
        const bool branch_taken_0x1b8224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8224u;
            // 0x1b8228: 0x34a5012b  ori         $a1, $a1, 0x12B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)299);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8224) {
            ctx->pc = 0x1B8240u;
            goto label_1b8240;
        }
    }
    ctx->pc = 0x1B822Cu;
    // 0x1b822c: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1B822Cu;
    SET_GPR_U32(ctx, 31, 0x1B8234u);
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8234u; }
        if (ctx->pc != 0x1B8234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8234u; }
        if (ctx->pc != 0x1B8234u) { return; }
    }
    ctx->pc = 0x1B8234u;
label_1b8234:
    // 0x1b8234: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B8234u;
    {
        const bool branch_taken_0x1b8234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8234u;
            // 0x1b8238: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8234) {
            ctx->pc = 0x1B8270u;
            goto label_1b8270;
        }
    }
    ctx->pc = 0x1B823Cu;
    // 0x1b823c: 0x0  nop
    ctx->pc = 0x1b823cu;
    // NOP
label_1b8240:
    // 0x1b8240: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1B8240u;
    SET_GPR_U32(ctx, 31, 0x1B8248u);
    ctx->pc = 0x1B8244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8240u;
            // 0x1b8244: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8248u; }
        if (ctx->pc != 0x1B8248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8248u; }
        if (ctx->pc != 0x1B8248u) { return; }
    }
    ctx->pc = 0x1B8248u;
label_1b8248:
    // 0x1b8248: 0xae12134c  sw          $s2, 0x134C($s0)
    ctx->pc = 0x1b8248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4940), GPR_U32(ctx, 18));
    // 0x1b824c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b824cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8250: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8250u;
    {
        const bool branch_taken_0x1b8250 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8250u;
            // 0x1b8254: 0xae111350  sw          $s1, 0x1350($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4944), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8250) {
            ctx->pc = 0x1B8260u;
            goto label_1b8260;
        }
    }
    ctx->pc = 0x1B8258u;
    // 0x1b8258: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b8258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b825c: 0xae021358  sw          $v0, 0x1358($s0)
    ctx->pc = 0x1b825cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4952), GPR_U32(ctx, 2));
label_1b8260:
    // 0x1b8260: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1B8260u;
    SET_GPR_U32(ctx, 31, 0x1B8268u);
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8268u; }
        if (ctx->pc != 0x1B8268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8268u; }
        if (ctx->pc != 0x1B8268u) { return; }
    }
    ctx->pc = 0x1B8268u;
label_1b8268:
    // 0x1b8268: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b8268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b826c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b826cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8270:
    // 0x1b8270: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b8270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b8274: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b8274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8278: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b8278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b827c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B827Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B827Cu;
            // 0x1b8280: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8284u;
    // 0x1b8284: 0x0  nop
    ctx->pc = 0x1b8284u;
    // NOP
}
