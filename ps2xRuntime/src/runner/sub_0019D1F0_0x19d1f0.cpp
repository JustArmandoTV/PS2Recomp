#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019D1F0
// Address: 0x19d1f0 - 0x19d420
void sub_0019D1F0_0x19d1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D1F0_0x19d1f0");
#endif

    switch (ctx->pc) {
        case 0x19d20cu: goto label_19d20c;
        case 0x19d240u: goto label_19d240;
        case 0x19d2c4u: goto label_19d2c4;
        case 0x19d2e0u: goto label_19d2e0;
        case 0x19d2f0u: goto label_19d2f0;
        case 0x19d324u: goto label_19d324;
        case 0x19d358u: goto label_19d358;
        case 0x19d3dcu: goto label_19d3dc;
        case 0x19d3f8u: goto label_19d3f8;
        case 0x19d408u: goto label_19d408;
        default: break;
    }

    ctx->pc = 0x19d1f0u;

    // 0x19d1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d1f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19d1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d1f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19d1f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d1fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19d1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19d200: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19d200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d204: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19D204u;
    SET_GPR_U32(ctx, 31, 0x19D20Cu);
    ctx->pc = 0x19D208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D204u;
            // 0x19d208: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D20Cu; }
        if (ctx->pc != 0x19D20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D20Cu; }
        if (ctx->pc != 0x19D20Cu) { return; }
    }
    ctx->pc = 0x19D20Cu;
label_19d20c:
    // 0x19d20c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19d20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19d210: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d214: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19d214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d218: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D218u;
    {
        const bool branch_taken_0x19d218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D218u;
            // 0x19d21c: 0x24849860  addiu       $a0, $a0, -0x67A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d218) {
            ctx->pc = 0x19D238u;
            goto label_19d238;
        }
    }
    ctx->pc = 0x19D220u;
    // 0x19d220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d224: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d22c: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19D22Cu;
    ctx->pc = 0x19D230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D22Cu;
            // 0x19d230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D234u;
    // 0x19d234: 0x0  nop
    ctx->pc = 0x19d234u;
    // NOP
label_19d238:
    // 0x19d238: 0xc06c8e6  jal         func_1B2398
    ctx->pc = 0x19D238u;
    SET_GPR_U32(ctx, 31, 0x19D240u);
    ctx->pc = 0x19D23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D238u;
            // 0x19d23c: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2398u;
    if (runtime->hasFunction(0x1B2398u)) {
        auto targetFn = runtime->lookupFunction(0x1B2398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D240u; }
        if (ctx->pc != 0x19D240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2398_0x1b2398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D240u; }
        if (ctx->pc != 0x19D240u) { return; }
    }
    ctx->pc = 0x19D240u;
label_19d240:
    // 0x19d240: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19d240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19d244: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D244u;
    {
        const bool branch_taken_0x19d244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D244u;
            // 0x19d248: 0x24849890  addiu       $a0, $a0, -0x6770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d244) {
            ctx->pc = 0x19D260u;
            goto label_19d260;
        }
    }
    ctx->pc = 0x19D24Cu;
    // 0x19d24c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d24cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d250: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d258: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19D258u;
    ctx->pc = 0x19D25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D258u;
            // 0x19d25c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D260u;
label_19d260:
    // 0x19d260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d264: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d26c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D26Cu;
            // 0x19d270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D274u;
    // 0x19d274: 0x0  nop
    ctx->pc = 0x19d274u;
    // NOP
    // 0x19d278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d27c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19d280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d284: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x19d284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19d288: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19D288u;
    {
        const bool branch_taken_0x19d288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D288u;
            // 0x19d28c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d288) {
            ctx->pc = 0x19D2A0u;
            goto label_19d2a0;
        }
    }
    ctx->pc = 0x19D290u;
    // 0x19d290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d294: 0x806a2d8  j           func_1A8B60
    ctx->pc = 0x19D294u;
    ctx->pc = 0x19D298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D294u;
            // 0x19d298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B60u;
    {
        auto targetFn = runtime->lookupFunction(0x1A8B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19D29Cu;
    // 0x19d29c: 0x0  nop
    ctx->pc = 0x19d29cu;
    // NOP
label_19d2a0:
    // 0x19d2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x19D2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D2A4u;
            // 0x19d2a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D2ACu;
    // 0x19d2ac: 0x0  nop
    ctx->pc = 0x19d2acu;
    // NOP
    // 0x19d2b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19d2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19d2b4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x19d2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x19d2b8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x19d2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x19d2bc: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19D2BCu;
    SET_GPR_U32(ctx, 31, 0x19D2C4u);
    ctx->pc = 0x19D2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D2BCu;
            // 0x19d2c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D2C4u; }
        if (ctx->pc != 0x19D2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D2C4u; }
        if (ctx->pc != 0x19D2C4u) { return; }
    }
    ctx->pc = 0x19D2C4u;
label_19d2c4:
    // 0x19d2c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d2c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19d2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d2cc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D2CCu;
    {
        const bool branch_taken_0x19d2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D2CCu;
            // 0x19d2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d2cc) {
            ctx->pc = 0x19D2E8u;
            goto label_19d2e8;
        }
    }
    ctx->pc = 0x19D2D4u;
    // 0x19d2d4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19d2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19d2d8: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19D2D8u;
    SET_GPR_U32(ctx, 31, 0x19D2E0u);
    ctx->pc = 0x19D2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D2D8u;
            // 0x19d2dc: 0x248498b8  addiu       $a0, $a0, -0x6748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D2E0u; }
        if (ctx->pc != 0x19D2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D2E0u; }
        if (ctx->pc != 0x19D2E0u) { return; }
    }
    ctx->pc = 0x19D2E0u;
label_19d2e0:
    // 0x19d2e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19D2E0u;
    {
        const bool branch_taken_0x19d2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D2E0u;
            // 0x19d2e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d2e0) {
            ctx->pc = 0x19D2F4u;
            goto label_19d2f4;
        }
    }
    ctx->pc = 0x19D2E8u;
label_19d2e8:
    // 0x19d2e8: 0xc067516  jal         func_19D458
    ctx->pc = 0x19D2E8u;
    SET_GPR_U32(ctx, 31, 0x19D2F0u);
    ctx->pc = 0x19D458u;
    if (runtime->hasFunction(0x19D458u)) {
        auto targetFn = runtime->lookupFunction(0x19D458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D2F0u; }
        if (ctx->pc != 0x19D2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D458_0x19d458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D2F0u; }
        if (ctx->pc != 0x19D2F0u) { return; }
    }
    ctx->pc = 0x19D2F0u;
label_19d2f0:
    // 0x19d2f0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x19d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_19d2f4:
    // 0x19d2f4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x19d2f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d2f8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x19d2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19d2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x19D2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D2FCu;
            // 0x19d300: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D304u;
    // 0x19d304: 0x0  nop
    ctx->pc = 0x19d304u;
    // NOP
    // 0x19d308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d30c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19d30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d310: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19d310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d314: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19d314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19d318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19d318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d31c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19D31Cu;
    SET_GPR_U32(ctx, 31, 0x19D324u);
    ctx->pc = 0x19D320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D31Cu;
            // 0x19d320: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D324u; }
        if (ctx->pc != 0x19D324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D324u; }
        if (ctx->pc != 0x19D324u) { return; }
    }
    ctx->pc = 0x19D324u;
label_19d324:
    // 0x19d324: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19d324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19d328: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d32c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19d32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d330: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D330u;
    {
        const bool branch_taken_0x19d330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D330u;
            // 0x19d334: 0x248498e8  addiu       $a0, $a0, -0x6718 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d330) {
            ctx->pc = 0x19D350u;
            goto label_19d350;
        }
    }
    ctx->pc = 0x19D338u;
    // 0x19d338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d33c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d33cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d344: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19D344u;
    ctx->pc = 0x19D348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D344u;
            // 0x19d348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D34Cu;
    // 0x19d34c: 0x0  nop
    ctx->pc = 0x19d34cu;
    // NOP
label_19d350:
    // 0x19d350: 0xc06c902  jal         func_1B2408
    ctx->pc = 0x19D350u;
    SET_GPR_U32(ctx, 31, 0x19D358u);
    ctx->pc = 0x19D354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D350u;
            // 0x19d354: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2408u;
    if (runtime->hasFunction(0x1B2408u)) {
        auto targetFn = runtime->lookupFunction(0x1B2408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D358u; }
        if (ctx->pc != 0x19D358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2408_0x1b2408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D358u; }
        if (ctx->pc != 0x19D358u) { return; }
    }
    ctx->pc = 0x19D358u;
label_19d358:
    // 0x19d358: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19d358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19d35c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D35Cu;
    {
        const bool branch_taken_0x19d35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D35Cu;
            // 0x19d360: 0x24849918  addiu       $a0, $a0, -0x66E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d35c) {
            ctx->pc = 0x19D378u;
            goto label_19d378;
        }
    }
    ctx->pc = 0x19D364u;
    // 0x19d364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d36c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d370: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19D370u;
    ctx->pc = 0x19D374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D370u;
            // 0x19d374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D378u;
label_19d378:
    // 0x19d378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d37c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d37cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d380: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d384: 0x3e00008  jr          $ra
    ctx->pc = 0x19D384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D384u;
            // 0x19d388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D38Cu;
    // 0x19d38c: 0x0  nop
    ctx->pc = 0x19d38cu;
    // NOP
    // 0x19d390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d394: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19d394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19d398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d39c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x19d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19d3a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19D3A0u;
    {
        const bool branch_taken_0x19d3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3A0u;
            // 0x19d3a4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d3a0) {
            ctx->pc = 0x19D3B8u;
            goto label_19d3b8;
        }
    }
    ctx->pc = 0x19D3A8u;
    // 0x19d3a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d3ac: 0x806a2d2  j           func_1A8B48
    ctx->pc = 0x19D3ACu;
    ctx->pc = 0x19D3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3ACu;
            // 0x19d3b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B48u;
    {
        auto targetFn = runtime->lookupFunction(0x1A8B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19D3B4u;
    // 0x19d3b4: 0x0  nop
    ctx->pc = 0x19d3b4u;
    // NOP
label_19d3b8:
    // 0x19d3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x19D3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3BCu;
            // 0x19d3c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D3C4u;
    // 0x19d3c4: 0x0  nop
    ctx->pc = 0x19d3c4u;
    // NOP
    // 0x19d3c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19d3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19d3cc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x19d3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x19d3d0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x19d3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x19d3d4: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19D3D4u;
    SET_GPR_U32(ctx, 31, 0x19D3DCu);
    ctx->pc = 0x19D3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3D4u;
            // 0x19d3d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3DCu; }
        if (ctx->pc != 0x19D3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3DCu; }
        if (ctx->pc != 0x19D3DCu) { return; }
    }
    ctx->pc = 0x19D3DCu;
label_19d3dc:
    // 0x19d3dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d3e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19d3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d3e4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D3E4u;
    {
        const bool branch_taken_0x19d3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3E4u;
            // 0x19d3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d3e4) {
            ctx->pc = 0x19D400u;
            goto label_19d400;
        }
    }
    ctx->pc = 0x19D3ECu;
    // 0x19d3ec: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19d3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19d3f0: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19D3F0u;
    SET_GPR_U32(ctx, 31, 0x19D3F8u);
    ctx->pc = 0x19D3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3F0u;
            // 0x19d3f4: 0x24849948  addiu       $a0, $a0, -0x66B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3F8u; }
        if (ctx->pc != 0x19D3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3F8u; }
        if (ctx->pc != 0x19D3F8u) { return; }
    }
    ctx->pc = 0x19D3F8u;
label_19d3f8:
    // 0x19d3f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19D3F8u;
    {
        const bool branch_taken_0x19d3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3F8u;
            // 0x19d3fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d3f8) {
            ctx->pc = 0x19D40Cu;
            goto label_19d40c;
        }
    }
    ctx->pc = 0x19D400u;
label_19d400:
    // 0x19d400: 0xc067516  jal         func_19D458
    ctx->pc = 0x19D400u;
    SET_GPR_U32(ctx, 31, 0x19D408u);
    ctx->pc = 0x19D458u;
    if (runtime->hasFunction(0x19D458u)) {
        auto targetFn = runtime->lookupFunction(0x19D458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D408u; }
        if (ctx->pc != 0x19D408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D458_0x19d458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D408u; }
        if (ctx->pc != 0x19D408u) { return; }
    }
    ctx->pc = 0x19D408u;
label_19d408:
    // 0x19d408: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19d408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19d40c:
    // 0x19d40c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x19d40cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d410: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x19d410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19d414: 0x3e00008  jr          $ra
    ctx->pc = 0x19D414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D414u;
            // 0x19d418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D41Cu;
    // 0x19d41c: 0x0  nop
    ctx->pc = 0x19d41cu;
    // NOP
}
