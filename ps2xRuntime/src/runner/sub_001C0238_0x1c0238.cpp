#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0238
// Address: 0x1c0238 - 0x1c0300
void sub_001C0238_0x1c0238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0238_0x1c0238");
#endif

    switch (ctx->pc) {
        case 0x1c0290u: goto label_1c0290;
        case 0x1c02a0u: goto label_1c02a0;
        case 0x1c02b8u: goto label_1c02b8;
        case 0x1c02ccu: goto label_1c02cc;
        default: break;
    }

    ctx->pc = 0x1c0238u;

    // 0x1c0238: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c0238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c023c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c023cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0240: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0244: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c0244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c0248: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1c0248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c024c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c024cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c0250: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c0250u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0254: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c0254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c0258: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c0258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c025c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c025cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c0260: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c0260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c0264: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c0264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1c0268: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C0268u;
    {
        const bool branch_taken_0x1c0268 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C026Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0268u;
            // 0x1c026c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0268) {
            ctx->pc = 0x1C02DCu;
            goto label_1c02dc;
        }
    }
    ctx->pc = 0x1C0270u;
    // 0x1c0270: 0x58a0001b  blezl       $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C0270u;
    {
        const bool branch_taken_0x1c0270 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1c0270) {
            ctx->pc = 0x1C0274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0270u;
            // 0x1c0274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C02E0u;
            goto label_1c02e0;
        }
    }
    ctx->pc = 0x1C0278u;
    // 0x1c0278: 0x58a00019  blezl       $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C0278u;
    {
        const bool branch_taken_0x1c0278 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1c0278) {
            ctx->pc = 0x1C027Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0278u;
            // 0x1c027c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C02E0u;
            goto label_1c02e0;
        }
    }
    ctx->pc = 0x1C0280u;
    // 0x1c0280: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c0280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0284: 0x3c150064  lui         $s5, 0x64
    ctx->pc = 0x1c0284u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)100 << 16));
    // 0x1c0288: 0x3c140064  lui         $s4, 0x64
    ctx->pc = 0x1c0288u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)100 << 16));
    // 0x1c028c: 0x0  nop
    ctx->pc = 0x1c028cu;
    // NOP
label_1c0290:
    // 0x1c0290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0294: 0x26a5b7f8  addiu       $a1, $s5, -0x4808
    ctx->pc = 0x1c0294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948856));
    // 0x1c0298: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x1C0298u;
    SET_GPR_U32(ctx, 31, 0x1C02A0u);
    ctx->pc = 0x1C029Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0298u;
            // 0x1c029c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C02A0u; }
        if (ctx->pc != 0x1C02A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C02A0u; }
        if (ctx->pc != 0x1C02A0u) { return; }
    }
    ctx->pc = 0x1C02A0u;
label_1c02a0:
    // 0x1c02a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c02a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02a4: 0x2685b788  addiu       $a1, $s4, -0x4878
    ctx->pc = 0x1c02a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948744));
    // 0x1c02a8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C02A8u;
    {
        const bool branch_taken_0x1c02a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C02ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C02A8u;
            // 0x1c02ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02a8) {
            ctx->pc = 0x1C02D0u;
            goto label_1c02d0;
        }
    }
    ctx->pc = 0x1C02B0u;
    // 0x1c02b0: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x1C02B0u;
    SET_GPR_U32(ctx, 31, 0x1C02B8u);
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C02B8u; }
        if (ctx->pc != 0x1C02B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C02B8u; }
        if (ctx->pc != 0x1C02B8u) { return; }
    }
    ctx->pc = 0x1C02B8u;
label_1c02b8:
    // 0x1c02b8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C02B8u;
    {
        const bool branch_taken_0x1c02b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c02b8) {
            ctx->pc = 0x1C02BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C02B8u;
            // 0x1c02bc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C02D4u;
            goto label_1c02d4;
        }
    }
    ctx->pc = 0x1C02C0u;
    // 0x1c02c0: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x1c02c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x1c02c4: 0xc0700c0  jal         func_1C0300
    ctx->pc = 0x1C02C4u;
    SET_GPR_U32(ctx, 31, 0x1C02CCu);
    ctx->pc = 0x1C02C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C02C4u;
            // 0x1c02c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0300u;
    if (runtime->hasFunction(0x1C0300u)) {
        auto targetFn = runtime->lookupFunction(0x1C0300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C02CCu; }
        if (ctx->pc != 0x1C02CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0300_0x1c0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C02CCu; }
        if (ctx->pc != 0x1C02CCu) { return; }
    }
    ctx->pc = 0x1C02CCu;
label_1c02cc:
    // 0x1c02cc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c02ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1c02d0:
    // 0x1c02d0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1c02d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1c02d4:
    // 0x1c02d4: 0x1620ffee  bnez        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C02D4u;
    {
        const bool branch_taken_0x1c02d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C02D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C02D4u;
            // 0x1c02d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02d4) {
            ctx->pc = 0x1C0290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c0290;
        }
    }
    ctx->pc = 0x1C02DCu;
label_1c02dc:
    // 0x1c02dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c02dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c02e0:
    // 0x1c02e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c02e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c02e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c02e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c02e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c02e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c02ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c02ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c02f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c02f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c02f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c02f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c02f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C02F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C02FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C02F8u;
            // 0x1c02fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0300u;
}
