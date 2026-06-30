#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA280
// Address: 0x1ba280 - 0x1ba390
void sub_001BA280_0x1ba280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA280_0x1ba280");
#endif

    switch (ctx->pc) {
        case 0x1ba2b8u: goto label_1ba2b8;
        case 0x1ba2f8u: goto label_1ba2f8;
        case 0x1ba308u: goto label_1ba308;
        case 0x1ba348u: goto label_1ba348;
        default: break;
    }

    ctx->pc = 0x1ba280u;

label_1ba280:
    // 0x1ba280: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1ba280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1ba284: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA284u;
            // 0x1ba288: 0x2442b130  addiu       $v0, $v0, -0x4ED0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA28Cu;
    // 0x1ba28c: 0x0  nop
    ctx->pc = 0x1ba28cu;
    // NOP
    // 0x1ba290: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x1ba290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x1ba294: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA294u;
            // 0x1ba298: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA29Cu;
    // 0x1ba29c: 0x0  nop
    ctx->pc = 0x1ba29cu;
    // NOP
    // 0x1ba2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA2A0u;
            // 0x1ba2a4: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA2A8u;
    // 0x1ba2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA2A8u;
            // 0x1ba2ac: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA2B0u;
    // 0x1ba2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA2B0u;
            // 0x1ba2b4: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA2B8u;
label_1ba2b8:
    // 0x1ba2b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba2bc: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1ba2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1ba2c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ba2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ba2c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ba2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ba2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ba2cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ba2ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba2d4: 0x24441ea4  addiu       $a0, $v0, 0x1EA4
    ctx->pc = 0x1ba2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7844));
    // 0x1ba2d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ba2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ba2dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ba2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ba2e0: 0x1c400013  bgtz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BA2E0u;
    {
        const bool branch_taken_0x1ba2e0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1BA2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA2E0u;
            // 0x1ba2e4: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2e0) {
            ctx->pc = 0x1BA330u;
            goto label_1ba330;
        }
    }
    ctx->pc = 0x1BA2E8u;
    // 0x1ba2e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ba2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1ba2ec: 0x3c10006e  lui         $s0, 0x6E
    ctx->pc = 0x1ba2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)110 << 16));
    // 0x1ba2f0: 0xc06e8a0  jal         func_1BA280
    ctx->pc = 0x1BA2F0u;
    SET_GPR_U32(ctx, 31, 0x1BA2F8u);
    ctx->pc = 0x1BA2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA2F0u;
            // 0x1ba2f4: 0x26101e90  addiu       $s0, $s0, 0x1E90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA280u;
    goto label_1ba280;
    ctx->pc = 0x1BA2F8u;
label_1ba2f8:
    // 0x1ba2f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ba2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ba300: 0xc06e850  jal         func_1BA140
    ctx->pc = 0x1BA300u;
    SET_GPR_U32(ctx, 31, 0x1BA308u);
    ctx->pc = 0x1BA304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA300u;
            // 0x1ba304: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA140u;
    if (runtime->hasFunction(0x1BA140u)) {
        auto targetFn = runtime->lookupFunction(0x1BA140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA308u; }
        if (ctx->pc != 0x1BA308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA140_0x1ba140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA308u; }
        if (ctx->pc != 0x1BA308u) { return; }
    }
    ctx->pc = 0x1BA308u;
label_1ba308:
    // 0x1ba308: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1ba308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1ba30c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ba30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba310: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ba310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba314: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ba314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba318: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ba318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba31c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba31cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba320: 0x24841e98  addiu       $a0, $a0, 0x1E98
    ctx->pc = 0x1ba320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7832));
    // 0x1ba324: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ba324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ba328: 0x806e840  j           func_1BA100
    ctx->pc = 0x1BA328u;
    ctx->pc = 0x1BA32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA328u;
            // 0x1ba32c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA100u;
    {
        auto targetFn = runtime->lookupFunction(0x1BA100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BA330u;
label_1ba330:
    // 0x1ba330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba334: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ba334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba338: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ba338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba33c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ba33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ba340: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA340u;
            // 0x1ba344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA348u;
label_1ba348:
    // 0x1ba348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba34c: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1ba34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1ba350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba354: 0x24631ea4  addiu       $v1, $v1, 0x1EA4
    ctx->pc = 0x1ba354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7844));
    // 0x1ba358: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ba358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ba35c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba360: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA360u;
    {
        const bool branch_taken_0x1ba360 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1BA364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA360u;
            // 0x1ba364: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba360) {
            ctx->pc = 0x1BA380u;
            goto label_1ba380;
        }
    }
    ctx->pc = 0x1BA368u;
    // 0x1ba368: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1ba368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1ba36c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba370: 0x24841e98  addiu       $a0, $a0, 0x1E98
    ctx->pc = 0x1ba370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7832));
    // 0x1ba374: 0x806e83c  j           func_1BA0F0
    ctx->pc = 0x1BA374u;
    ctx->pc = 0x1BA378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA374u;
            // 0x1ba378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA0F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1BA0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BA37Cu;
    // 0x1ba37c: 0x0  nop
    ctx->pc = 0x1ba37cu;
    // NOP
label_1ba380:
    // 0x1ba380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba384: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA384u;
            // 0x1ba388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA38Cu;
    // 0x1ba38c: 0x0  nop
    ctx->pc = 0x1ba38cu;
    // NOP
}
