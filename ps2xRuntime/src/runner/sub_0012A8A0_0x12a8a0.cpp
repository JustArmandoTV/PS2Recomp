#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012A8A0
// Address: 0x12a8a0 - 0x12aa48
void sub_0012A8A0_0x12a8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A8A0_0x12a8a0");
#endif

    switch (ctx->pc) {
        case 0x12a8e0u: goto label_12a8e0;
        case 0x12a960u: goto label_12a960;
        default: break;
    }

    ctx->pc = 0x12a8a0u;

    // 0x12a8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12a8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12a8a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12a8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12a8a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12a8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12a8ac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12a8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12a8b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12a8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a8b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12a8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12a8b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12a8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12a8bc: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x12a8bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x12a8c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12a8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12a8c4: 0x8c8f0010  lw          $t7, 0x10($a0)
    ctx->pc = 0x12a8c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12a8c8: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x12a8c8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x12a8cc: 0x28f8821  addu        $s1, $s4, $t7
    ctx->pc = 0x12a8ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 15)));
    // 0x12a8d0: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x12a8d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x12a8d4: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x12a8d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12a8d8: 0xc04a804  jal         func_12A010
    ctx->pc = 0x12A8D8u;
    SET_GPR_U32(ctx, 31, 0x12A8E0u);
    ctx->pc = 0x12A8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A8D8u;
            // 0x12a8dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A010u;
    if (runtime->hasFunction(0x12A010u)) {
        auto targetFn = runtime->lookupFunction(0x12A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A8E0u; }
        if (ctx->pc != 0x12A8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A010_0x12a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A8E0u; }
        if (ctx->pc != 0x12A8E0u) { return; }
    }
    ctx->pc = 0x12A8E0u;
label_12a8e0:
    // 0x12a8e0: 0x240f0020  addiu       $t7, $zero, 0x20
    ctx->pc = 0x12a8e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12a8e4: 0x284e000b  slti        $t6, $v0, 0xB
    ctx->pc = 0x12a8e4u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x12a8e8: 0x1e27823  subu        $t7, $t7, $v0
    ctx->pc = 0x12a8e8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x12a8ec: 0x11c00025  beqz        $t6, . + 4 + (0x25 << 2)
    ctx->pc = 0x12A8ECu;
    {
        const bool branch_taken_0x12a8ec = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A8ECu;
            // 0x12a8f0: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8ec) {
            ctx->pc = 0x12A984u;
            goto label_12a984;
        }
    }
    ctx->pc = 0x12A8F4u;
    // 0x12a8f4: 0x240f000b  addiu       $t7, $zero, 0xB
    ctx->pc = 0x12a8f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12a8f8: 0x3c0e3ff0  lui         $t6, 0x3FF0
    ctx->pc = 0x12a8f8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16368 << 16));
    // 0x12a8fc: 0x1e27823  subu        $t7, $t7, $v0
    ctx->pc = 0x12a8fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x12a900: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x12a900u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x12a904: 0x1f37806  srlv        $t7, $s3, $t7
    ctx->pc = 0x12a904u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 15) & 0x1F));
    // 0x12a908: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x12a908u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x12a90c: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x12a90cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12a910: 0x291682b  sltu        $t5, $s4, $s1
    ctx->pc = 0x12a910u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x12a914: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12a914u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12a918: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x12a918u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a91c: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12a91cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12a920: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12a920u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12a924: 0x11a00002  beqz        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x12A924u;
    {
        const bool branch_taken_0x12a924 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A924u;
            // 0x12a928: 0x24f9025  or          $s2, $s2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a924) {
            ctx->pc = 0x12A930u;
            goto label_12a930;
        }
    }
    ctx->pc = 0x12A92Cu;
    // 0x12a92c: 0x8e2cfffc  lw          $t4, -0x4($s1)
    ctx->pc = 0x12a92cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_12a930:
    // 0x12a930: 0x240e000b  addiu       $t6, $zero, 0xB
    ctx->pc = 0x12a930u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12a934: 0x244f0015  addiu       $t7, $v0, 0x15
    ctx->pc = 0x12a934u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 21));
    // 0x12a938: 0x1c27023  subu        $t6, $t6, $v0
    ctx->pc = 0x12a938u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x12a93c: 0x1f37804  sllv        $t7, $s3, $t7
    ctx->pc = 0x12a93cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 15) & 0x1F));
    // 0x12a940: 0x1cc7006  srlv        $t6, $t4, $t6
    ctx->pc = 0x12a940u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x12a944: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x12a944u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a948: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x12a948u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12a94c: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x12a94cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x12a950: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12a950u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12a954: 0x24d9024  and         $s2, $s2, $t5
    ctx->pc = 0x12a954u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 13));
    // 0x12a958: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12a958u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12a95c: 0x24f9025  or          $s2, $s2, $t7
    ctx->pc = 0x12a95cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 15));
label_12a960:
    // 0x12a960: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12a960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a964: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12a964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a968: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12a968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a96c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12a96cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a970: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12a970u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12a974: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12a974u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a978: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12a978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a97c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A97Cu;
            // 0x12a980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A984u;
label_12a984:
    // 0x12a984: 0x291782b  sltu        $t7, $s4, $s1
    ctx->pc = 0x12a984u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x12a988: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A988u;
    {
        const bool branch_taken_0x12a988 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A988u;
            // 0x12a98c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a988) {
            ctx->pc = 0x12A998u;
            goto label_12a998;
        }
    }
    ctx->pc = 0x12A990u;
    // 0x12a990: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x12a990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x12a994: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x12a994u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12a998:
    // 0x12a998: 0x2442fff5  addiu       $v0, $v0, -0xB
    ctx->pc = 0x12a998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967285));
    // 0x12a99c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x12A99Cu;
    {
        const bool branch_taken_0x12a99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A99Cu;
            // 0x12a9a0: 0x27023  negu        $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a99c) {
            ctx->pc = 0x12AA0Cu;
            goto label_12aa0c;
        }
    }
    ctx->pc = 0x12A9A4u;
    // 0x12a9a4: 0x537804  sllv        $t7, $s3, $v0
    ctx->pc = 0x12a9a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x12a9a8: 0x1cc7006  srlv        $t6, $t4, $t6
    ctx->pc = 0x12a9a8u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x12a9ac: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x12a9acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x12a9b0: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x12a9b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12a9b4: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x12a9b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x12a9b8: 0x3c0e3ff0  lui         $t6, 0x3FF0
    ctx->pc = 0x12a9b8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16368 << 16));
    // 0x12a9bc: 0x291682b  sltu        $t5, $s4, $s1
    ctx->pc = 0x12a9bcu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x12a9c0: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x12a9c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12a9c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12a9c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a9c8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12a9c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12a9cc: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12a9ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12a9d0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12a9d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12a9d4: 0x11a00002  beqz        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x12A9D4u;
    {
        const bool branch_taken_0x12a9d4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A9D4u;
            // 0x12a9d8: 0x24f9025  or          $s2, $s2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9d4) {
            ctx->pc = 0x12A9E0u;
            goto label_12a9e0;
        }
    }
    ctx->pc = 0x12A9DCu;
    // 0x12a9dc: 0x8e33fffc  lw          $s3, -0x4($s1)
    ctx->pc = 0x12a9dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_12a9e0:
    // 0x12a9e0: 0x27823  negu        $t7, $v0
    ctx->pc = 0x12a9e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x12a9e4: 0x4c7004  sllv        $t6, $t4, $v0
    ctx->pc = 0x12a9e4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x12a9e8: 0x1f37806  srlv        $t7, $s3, $t7
    ctx->pc = 0x12a9e8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 15) & 0x1F));
    // 0x12a9ec: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x12a9ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a9f0: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x12a9f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x12a9f4: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x12a9f4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x12a9f8: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12a9f8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12a9fc: 0x24d9024  and         $s2, $s2, $t5
    ctx->pc = 0x12a9fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 13));
    // 0x12aa00: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x12aa00u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x12aa04: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x12AA04u;
    {
        const bool branch_taken_0x12aa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AA04u;
            // 0x12aa08: 0x24e9025  or          $s2, $s2, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa04) {
            ctx->pc = 0x12A960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a960;
        }
    }
    ctx->pc = 0x12AA0Cu;
label_12aa0c:
    // 0x12aa0c: 0x3c0f3ff0  lui         $t7, 0x3FF0
    ctx->pc = 0x12aa0cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16368 << 16));
    // 0x12aa10: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x12aa10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x12aa14: 0x26f7825  or          $t7, $s3, $t7
    ctx->pc = 0x12aa14u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 19) | GPR_U64(ctx, 15));
    // 0x12aa18: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x12aa18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x12aa1c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12aa1cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12aa20: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12aa20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12aa24: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12aa24u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12aa28: 0xc683c  dsll32      $t5, $t4, 0
    ctx->pc = 0x12aa28u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << (32 + 0));
    // 0x12aa2c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12aa2cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12aa30: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12aa30u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12aa34: 0x24f9025  or          $s2, $s2, $t7
    ctx->pc = 0x12aa34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 15));
    // 0x12aa38: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x12aa38u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x12aa3c: 0x24e9024  and         $s2, $s2, $t6
    ctx->pc = 0x12aa3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 14));
    // 0x12aa40: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
    ctx->pc = 0x12AA40u;
    {
        const bool branch_taken_0x12aa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AA40u;
            // 0x12aa44: 0x24d9025  or          $s2, $s2, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa40) {
            ctx->pc = 0x12A960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a960;
        }
    }
    ctx->pc = 0x12AA48u;
}
