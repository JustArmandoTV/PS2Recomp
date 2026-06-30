#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019B7B0
// Address: 0x19b7b0 - 0x19bbf0
void sub_0019B7B0_0x19b7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B7B0_0x19b7b0");
#endif

    switch (ctx->pc) {
        case 0x19b7c0u: goto label_19b7c0;
        case 0x19b800u: goto label_19b800;
        case 0x19b978u: goto label_19b978;
        case 0x19b988u: goto label_19b988;
        case 0x19b9a0u: goto label_19b9a0;
        case 0x19ba04u: goto label_19ba04;
        case 0x19ba24u: goto label_19ba24;
        case 0x19ba44u: goto label_19ba44;
        case 0x19ba6cu: goto label_19ba6c;
        case 0x19ba8cu: goto label_19ba8c;
        case 0x19baacu: goto label_19baac;
        case 0x19baf4u: goto label_19baf4;
        case 0x19bb18u: goto label_19bb18;
        case 0x19bb4cu: goto label_19bb4c;
        case 0x19bb8cu: goto label_19bb8c;
        case 0x19bbccu: goto label_19bbcc;
        default: break;
    }

    ctx->pc = 0x19b7b0u;

    // 0x19b7b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19b7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19b7b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b7b8: 0xc06a176  jal         func_1A85D8
    ctx->pc = 0x19B7B8u;
    SET_GPR_U32(ctx, 31, 0x19B7C0u);
    ctx->pc = 0x1A85D8u;
    if (runtime->hasFunction(0x1A85D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A85D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B7C0u; }
        if (ctx->pc != 0x19B7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A85D8_0x1a85d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B7C0u; }
        if (ctx->pc != 0x19B7C0u) { return; }
    }
    ctx->pc = 0x19B7C0u;
label_19b7c0:
    // 0x19b7c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b7c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19b7c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x19B7C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B7C8u;
            // 0x19b7cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B7D0u;
    // 0x19b7d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b7d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19b7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19b7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b7dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19b7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19b7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x19b7e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19b7e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19b7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19b7ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19b7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19b7f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19B7F0u;
    {
        const bool branch_taken_0x19b7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B7F0u;
            // 0x19b7f4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7f0) {
            ctx->pc = 0x19B818u;
            goto label_19b818;
        }
    }
    ctx->pc = 0x19B7F8u;
    // 0x19b7f8: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x19B7F8u;
    SET_GPR_U32(ctx, 31, 0x19B800u);
    ctx->pc = 0x19B7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B7F8u;
            // 0x19b7fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B800u; }
        if (ctx->pc != 0x19B800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B800u; }
        if (ctx->pc != 0x19B800u) { return; }
    }
    ctx->pc = 0x19B800u;
label_19b800:
    // 0x19b800: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19b800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b804: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x19b804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x19b808: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19b808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x19b80c: 0xac519928  sw          $s1, -0x66D8($v0)
    ctx->pc = 0x19b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940968), GPR_U32(ctx, 17));
    // 0x19b810: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19B810u;
    {
        const bool branch_taken_0x19b810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B810u;
            // 0x19b814: 0xac72992c  sw          $s2, -0x66D4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294940972), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b810) {
            ctx->pc = 0x19B830u;
            goto label_19b830;
        }
    }
    ctx->pc = 0x19B818u;
label_19b818:
    // 0x19b818: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x19b818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x19b81c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19b81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x19b820: 0xac409928  sw          $zero, -0x66D8($v0)
    ctx->pc = 0x19b820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940968), GPR_U32(ctx, 0));
    // 0x19b824: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19b824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b828: 0xac60992c  sw          $zero, -0x66D4($v1)
    ctx->pc = 0x19b828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294940972), GPR_U32(ctx, 0));
    // 0x19b82c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19b82cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b830:
    // 0x19b830: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x19B830u;
    {
        const bool branch_taken_0x19b830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B830u;
            // 0x19b834: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b830) {
            ctx->pc = 0x19B860u;
            goto label_19b860;
        }
    }
    ctx->pc = 0x19B838u;
    // 0x19b838: 0x24453c78  addiu       $a1, $v0, 0x3C78
    ctx->pc = 0x19b838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15480));
    // 0x19b83c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x19b83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b840: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19b840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19b844: 0x2883000f  slti        $v1, $a0, 0xF
    ctx->pc = 0x19b844u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x19b848: 0x3c01006d  lui         $at, 0x6D
    ctx->pc = 0x19b848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)109 << 16));
    // 0x19b84c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x19b84cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x19b850: 0xac303c38  sw          $s0, 0x3C38($at)
    ctx->pc = 0x19b850u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15416), GPR_U32(ctx, 16));
    // 0x19b854: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19B854u;
    {
        const bool branch_taken_0x19b854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B854u;
            // 0x19b858: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b854) {
            ctx->pc = 0x19B860u;
            goto label_19b860;
        }
    }
    ctx->pc = 0x19B85Cu;
    // 0x19b85c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x19b85cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_19b860:
    // 0x19b860: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x19b860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x19b864: 0x34420f18  ori         $v0, $v0, 0xF18
    ctx->pc = 0x19b864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3864);
    // 0x19b868: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x19b868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x19b86c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x19B86Cu;
    {
        const bool branch_taken_0x19b86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b86c) {
            ctx->pc = 0x19B8F0u;
            goto label_19b8f0;
        }
    }
    ctx->pc = 0x19B874u;
    // 0x19b874: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x19b874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x19b878: 0x34420f17  ori         $v0, $v0, 0xF17
    ctx->pc = 0x19b878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3863);
    // 0x19b87c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x19b87cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19b880: 0x50400049  beql        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x19B880u;
    {
        const bool branch_taken_0x19b880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b880) {
            ctx->pc = 0x19B884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B880u;
            // 0x19b884: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B9A8u;
            goto label_19b9a8;
        }
    }
    ctx->pc = 0x19B888u;
    // 0x19b888: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x19b888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x19b88c: 0x34420c04  ori         $v0, $v0, 0xC04
    ctx->pc = 0x19b88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3076);
    // 0x19b890: 0x1202006f  beq         $s0, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x19B890u;
    {
        const bool branch_taken_0x19b890 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19B894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B890u;
            // 0x19b894: 0x50102a  slt         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b890) {
            ctx->pc = 0x19BA50u;
            goto label_19ba50;
        }
    }
    ctx->pc = 0x19B898u;
    // 0x19b898: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19B898u;
    {
        const bool branch_taken_0x19b898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b898) {
            ctx->pc = 0x19B8C8u;
            goto label_19b8c8;
        }
    }
    ctx->pc = 0x19B8A0u;
    // 0x19b8a0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x19b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x19b8a4: 0x34420408  ori         $v0, $v0, 0x408
    ctx->pc = 0x19b8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1032);
    // 0x19b8a8: 0x12020059  beq         $s0, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x19B8A8u;
    {
        const bool branch_taken_0x19b8a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19B8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8A8u;
            // 0x19b8ac: 0x3c11006d  lui         $s1, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8a8) {
            ctx->pc = 0x19BA10u;
            goto label_19ba10;
        }
    }
    ctx->pc = 0x19B8B0u;
    // 0x19b8b0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x19b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x19b8b4: 0x3442040c  ori         $v0, $v0, 0x40C
    ctx->pc = 0x19b8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1036);
    // 0x19b8b8: 0x12020056  beq         $s0, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x19B8B8u;
    {
        const bool branch_taken_0x19b8b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19B8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8B8u;
            // 0x19b8bc: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8b8) {
            ctx->pc = 0x19BA14u;
            goto label_19ba14;
        }
    }
    ctx->pc = 0x19B8C0u;
    // 0x19b8c0: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x19B8C0u;
    {
        const bool branch_taken_0x19b8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8C0u;
            // 0x19b8c4: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8c0) {
            ctx->pc = 0x19BA9Cu;
            goto label_19ba9c;
        }
    }
    ctx->pc = 0x19B8C8u;
label_19b8c8:
    // 0x19b8c8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x19b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x19b8cc: 0x34420f04  ori         $v0, $v0, 0xF04
    ctx->pc = 0x19b8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3844);
    // 0x19b8d0: 0x12020071  beq         $s0, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x19B8D0u;
    {
        const bool branch_taken_0x19b8d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19B8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8D0u;
            // 0x19b8d4: 0x3c11006d  lui         $s1, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8d0) {
            ctx->pc = 0x19BA98u;
            goto label_19ba98;
        }
    }
    ctx->pc = 0x19B8D8u;
    // 0x19b8d8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x19b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x19b8dc: 0x34420f15  ori         $v0, $v0, 0xF15
    ctx->pc = 0x19b8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3861);
    // 0x19b8e0: 0x12020053  beq         $s0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x19B8E0u;
    {
        const bool branch_taken_0x19b8e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19B8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8E0u;
            // 0x19b8e4: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8e0) {
            ctx->pc = 0x19BA30u;
            goto label_19ba30;
        }
    }
    ctx->pc = 0x19B8E8u;
    // 0x19b8e8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x19B8E8u;
    {
        const bool branch_taken_0x19b8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8E8u;
            // 0x19b8ec: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8e8) {
            ctx->pc = 0x19BA9Cu;
            goto label_19ba9c;
        }
    }
    ctx->pc = 0x19B8F0u;
label_19b8f0:
    // 0x19b8f0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x19b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x19b8f4: 0x34420f40  ori         $v0, $v0, 0xF40
    ctx->pc = 0x19b8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3904);
    // 0x19b8f8: 0x12020017  beq         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19B8F8u;
    {
        const bool branch_taken_0x19b8f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19B8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8F8u;
            // 0x19b8fc: 0x50102a  slt         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8f8) {
            ctx->pc = 0x19B958u;
            goto label_19b958;
        }
    }
    ctx->pc = 0x19B900u;
    // 0x19b900: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19B900u;
    {
        const bool branch_taken_0x19b900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B900u;
            // 0x19b904: 0x2a02ffff  slti        $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b900) {
            ctx->pc = 0x19B930u;
            goto label_19b930;
        }
    }
    ctx->pc = 0x19B908u;
    // 0x19b908: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x19b908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x19b90c: 0x34420f1c  ori         $v0, $v0, 0xF1C
    ctx->pc = 0x19b90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3868);
    // 0x19b910: 0x1202003f  beq         $s0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x19B910u;
    {
        const bool branch_taken_0x19b910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19B914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B910u;
            // 0x19b914: 0x3c11006d  lui         $s1, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b910) {
            ctx->pc = 0x19BA10u;
            goto label_19ba10;
        }
    }
    ctx->pc = 0x19B918u;
    // 0x19b918: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x19b918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x19b91c: 0x34420f1f  ori         $v0, $v0, 0xF1F
    ctx->pc = 0x19b91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3871);
    // 0x19b920: 0x12020055  beq         $s0, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x19B920u;
    {
        const bool branch_taken_0x19b920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19B924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B920u;
            // 0x19b924: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b920) {
            ctx->pc = 0x19BA78u;
            goto label_19ba78;
        }
    }
    ctx->pc = 0x19B928u;
    // 0x19b928: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x19B928u;
    {
        const bool branch_taken_0x19b928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B928u;
            // 0x19b92c: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b928) {
            ctx->pc = 0x19BA9Cu;
            goto label_19ba9c;
        }
    }
    ctx->pc = 0x19B930u;
label_19b930:
    // 0x19b930: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x19B930u;
    {
        const bool branch_taken_0x19b930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B930u;
            // 0x19b934: 0x3c11006d  lui         $s1, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b930) {
            ctx->pc = 0x19BA98u;
            goto label_19ba98;
        }
    }
    ctx->pc = 0x19B938u;
    // 0x19b938: 0x2a02fffd  slti        $v0, $s0, -0x3
    ctx->pc = 0x19b938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x19b93c: 0x54400057  bnel        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x19B93Cu;
    {
        const bool branch_taken_0x19b93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b93c) {
            ctx->pc = 0x19B940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B93Cu;
            // 0x19b940: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19BA9Cu;
            goto label_19ba9c;
        }
    }
    ctx->pc = 0x19B944u;
    // 0x19b944: 0x3c11006d  lui         $s1, 0x6D
    ctx->pc = 0x19b944u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
    // 0x19b948: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x19b948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x19b94c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x19B94Cu;
    {
        const bool branch_taken_0x19b94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B94Cu;
            // 0x19b950: 0x24a59090  addiu       $a1, $a1, -0x6F70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b94c) {
            ctx->pc = 0x19BA18u;
            goto label_19ba18;
        }
    }
    ctx->pc = 0x19B954u;
    // 0x19b954: 0x0  nop
    ctx->pc = 0x19b954u;
    // NOP
label_19b958:
    // 0x19b958: 0x3c11006d  lui         $s1, 0x6D
    ctx->pc = 0x19b958u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
    // 0x19b95c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x19b95cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x19b960: 0x26303c80  addiu       $s0, $s1, 0x3C80
    ctx->pc = 0x19b960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 15488));
    // 0x19b964: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x19b964u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x19b968: 0x24a590a8  addiu       $a1, $a1, -0x6F58
    ctx->pc = 0x19b968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938792));
    // 0x19b96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b970: 0xc04ae62  jal         func_12B988
    ctx->pc = 0x19B970u;
    SET_GPR_U32(ctx, 31, 0x19B978u);
    ctx->pc = 0x19B974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B970u;
            // 0x19b974: 0x34c60f40  ori         $a2, $a2, 0xF40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3904);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B978u; }
        if (ctx->pc != 0x19B978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B978u; }
        if (ctx->pc != 0x19B978u) { return; }
    }
    ctx->pc = 0x19B978u;
label_19b978:
    // 0x19b978: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B978u;
    {
        const bool branch_taken_0x19b978 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b978) {
            ctx->pc = 0x19B98Cu;
            goto label_19b98c;
        }
    }
    ctx->pc = 0x19B980u;
    // 0x19b980: 0xc06c5e6  jal         func_1B1798
    ctx->pc = 0x19B980u;
    SET_GPR_U32(ctx, 31, 0x19B988u);
    ctx->pc = 0x19B984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B980u;
            // 0x19b984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1798u;
    if (runtime->hasFunction(0x1B1798u)) {
        auto targetFn = runtime->lookupFunction(0x1B1798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B988u; }
        if (ctx->pc != 0x19B988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1798_0x1b1798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B988u; }
        if (ctx->pc != 0x19B988u) { return; }
    }
    ctx->pc = 0x19B988u;
label_19b988:
    // 0x19b988: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19b988u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19b98c:
    // 0x19b98c: 0x12600047  beqz        $s3, . + 4 + (0x47 << 2)
    ctx->pc = 0x19B98Cu;
    {
        const bool branch_taken_0x19b98c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B98Cu;
            // 0x19b990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b98c) {
            ctx->pc = 0x19BAACu;
            goto label_19baac;
        }
    }
    ctx->pc = 0x19B994u;
    // 0x19b994: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19b994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b998: 0xc04b07c  jal         func_12C1F0
    ctx->pc = 0x19B998u;
    SET_GPR_U32(ctx, 31, 0x19B9A0u);
    ctx->pc = 0x19B99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B998u;
            // 0x19b99c: 0x240600e9  addiu       $a2, $zero, 0xE9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1F0u;
    if (runtime->hasFunction(0x12C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B9A0u; }
        if (ctx->pc != 0x19B9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C1F0_0x12c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B9A0u; }
        if (ctx->pc != 0x19B9A0u) { return; }
    }
    ctx->pc = 0x19B9A0u;
label_19b9a0:
    // 0x19b9a0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x19B9A0u;
    {
        const bool branch_taken_0x19b9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9A0u;
            // 0x19b9a4: 0x26243c80  addiu       $a0, $s1, 0x3C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9a0) {
            ctx->pc = 0x19BAB0u;
            goto label_19bab0;
        }
    }
    ctx->pc = 0x19B9A8u;
label_19b9a8:
    // 0x19b9a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b9a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9ac: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x19B9ACu;
    {
        const bool branch_taken_0x19b9ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9ACu;
            // 0x19b9b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9ac) {
            ctx->pc = 0x19B9D8u;
            goto label_19b9d8;
        }
    }
    ctx->pc = 0x19B9B4u;
    // 0x19b9b4: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x19b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x19b9b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b9bc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B9BCu;
    {
        const bool branch_taken_0x19b9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19B9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9BCu;
            // 0x19b9c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9bc) {
            ctx->pc = 0x19B9D8u;
            goto label_19b9d8;
        }
    }
    ctx->pc = 0x19B9C4u;
    // 0x19b9c4: 0x8e2800dc  lw          $t0, 0xDC($s1)
    ctx->pc = 0x19b9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x19b9c8: 0x8e2700d8  lw          $a3, 0xD8($s1)
    ctx->pc = 0x19b9c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x19b9cc: 0x8182a  slt         $v1, $zero, $t0
    ctx->pc = 0x19b9ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x19b9d0: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x19b9d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x19b9d4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x19b9d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_19b9d8:
    // 0x19b9d8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B9D8u;
    {
        const bool branch_taken_0x19b9d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9D8u;
            // 0x19b9dc: 0x3c11006d  lui         $s1, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9d8) {
            ctx->pc = 0x19B9F0u;
            goto label_19b9f0;
        }
    }
    ctx->pc = 0x19B9E0u;
    // 0x19b9e0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x19b9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x19b9e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19B9E4u;
    {
        const bool branch_taken_0x19b9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9E4u;
            // 0x19b9e8: 0x24a590c0  addiu       $a1, $a1, -0x6F40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9e4) {
            ctx->pc = 0x19BA18u;
            goto label_19ba18;
        }
    }
    ctx->pc = 0x19B9ECu;
    // 0x19b9ec: 0x0  nop
    ctx->pc = 0x19b9ecu;
    // NOP
label_19b9f0:
    // 0x19b9f0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x19b9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x19b9f4: 0x24a59120  addiu       $a1, $a1, -0x6EE0
    ctx->pc = 0x19b9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938912));
    // 0x19b9f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19b9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9fc: 0xc04ae62  jal         func_12B988
    ctx->pc = 0x19B9FCu;
    SET_GPR_U32(ctx, 31, 0x19BA04u);
    ctx->pc = 0x19BA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9FCu;
            // 0x19ba00: 0x26243c80  addiu       $a0, $s1, 0x3C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA04u; }
        if (ctx->pc != 0x19BA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA04u; }
        if (ctx->pc != 0x19BA04u) { return; }
    }
    ctx->pc = 0x19BA04u;
label_19ba04:
    // 0x19ba04: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x19BA04u;
    {
        const bool branch_taken_0x19ba04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA04u;
            // 0x19ba08: 0x26243c80  addiu       $a0, $s1, 0x3C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba04) {
            ctx->pc = 0x19BAB0u;
            goto label_19bab0;
        }
    }
    ctx->pc = 0x19BA0Cu;
    // 0x19ba0c: 0x0  nop
    ctx->pc = 0x19ba0cu;
    // NOP
label_19ba10:
    // 0x19ba10: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x19ba10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_19ba14:
    // 0x19ba14: 0x24a59188  addiu       $a1, $a1, -0x6E78
    ctx->pc = 0x19ba14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939016));
label_19ba18:
    // 0x19ba18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19ba18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba1c: 0xc04ae62  jal         func_12B988
    ctx->pc = 0x19BA1Cu;
    SET_GPR_U32(ctx, 31, 0x19BA24u);
    ctx->pc = 0x19BA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA1Cu;
            // 0x19ba20: 0x26243c80  addiu       $a0, $s1, 0x3C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA24u; }
        if (ctx->pc != 0x19BA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA24u; }
        if (ctx->pc != 0x19BA24u) { return; }
    }
    ctx->pc = 0x19BA24u;
label_19ba24:
    // 0x19ba24: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x19BA24u;
    {
        const bool branch_taken_0x19ba24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA24u;
            // 0x19ba28: 0x26243c80  addiu       $a0, $s1, 0x3C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba24) {
            ctx->pc = 0x19BAB0u;
            goto label_19bab0;
        }
    }
    ctx->pc = 0x19BA2Cu;
    // 0x19ba2c: 0x0  nop
    ctx->pc = 0x19ba2cu;
    // NOP
label_19ba30:
    // 0x19ba30: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x19ba30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x19ba34: 0x24a591e0  addiu       $a1, $a1, -0x6E20
    ctx->pc = 0x19ba34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939104));
    // 0x19ba38: 0x26243c80  addiu       $a0, $s1, 0x3C80
    ctx->pc = 0x19ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15488));
    // 0x19ba3c: 0xc04ae62  jal         func_12B988
    ctx->pc = 0x19BA3Cu;
    SET_GPR_U32(ctx, 31, 0x19BA44u);
    ctx->pc = 0x19BA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA3Cu;
            // 0x19ba40: 0x34c60f15  ori         $a2, $a2, 0xF15 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3861);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA44u; }
        if (ctx->pc != 0x19BA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA44u; }
        if (ctx->pc != 0x19BA44u) { return; }
    }
    ctx->pc = 0x19BA44u;
label_19ba44:
    // 0x19ba44: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x19BA44u;
    {
        const bool branch_taken_0x19ba44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA44u;
            // 0x19ba48: 0x26243c80  addiu       $a0, $s1, 0x3C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba44) {
            ctx->pc = 0x19BAB0u;
            goto label_19bab0;
        }
    }
    ctx->pc = 0x19BA4Cu;
    // 0x19ba4c: 0x0  nop
    ctx->pc = 0x19ba4cu;
    // NOP
label_19ba50:
    // 0x19ba50: 0x3c11006d  lui         $s1, 0x6D
    ctx->pc = 0x19ba50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
    // 0x19ba54: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x19ba54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x19ba58: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x19ba58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x19ba5c: 0x24a59250  addiu       $a1, $a1, -0x6DB0
    ctx->pc = 0x19ba5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
    // 0x19ba60: 0x26243c80  addiu       $a0, $s1, 0x3C80
    ctx->pc = 0x19ba60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15488));
    // 0x19ba64: 0xc04ae62  jal         func_12B988
    ctx->pc = 0x19BA64u;
    SET_GPR_U32(ctx, 31, 0x19BA6Cu);
    ctx->pc = 0x19BA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA64u;
            // 0x19ba68: 0x34c60c04  ori         $a2, $a2, 0xC04 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3076);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA6Cu; }
        if (ctx->pc != 0x19BA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA6Cu; }
        if (ctx->pc != 0x19BA6Cu) { return; }
    }
    ctx->pc = 0x19BA6Cu;
label_19ba6c:
    // 0x19ba6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19BA6Cu;
    {
        const bool branch_taken_0x19ba6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA6Cu;
            // 0x19ba70: 0x26243c80  addiu       $a0, $s1, 0x3C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba6c) {
            ctx->pc = 0x19BAB0u;
            goto label_19bab0;
        }
    }
    ctx->pc = 0x19BA74u;
    // 0x19ba74: 0x0  nop
    ctx->pc = 0x19ba74u;
    // NOP
label_19ba78:
    // 0x19ba78: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x19ba78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x19ba7c: 0x24a592d8  addiu       $a1, $a1, -0x6D28
    ctx->pc = 0x19ba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939352));
    // 0x19ba80: 0x26243c80  addiu       $a0, $s1, 0x3C80
    ctx->pc = 0x19ba80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15488));
    // 0x19ba84: 0xc04ae62  jal         func_12B988
    ctx->pc = 0x19BA84u;
    SET_GPR_U32(ctx, 31, 0x19BA8Cu);
    ctx->pc = 0x19BA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA84u;
            // 0x19ba88: 0x34c60f1f  ori         $a2, $a2, 0xF1F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3871);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA8Cu; }
        if (ctx->pc != 0x19BA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA8Cu; }
        if (ctx->pc != 0x19BA8Cu) { return; }
    }
    ctx->pc = 0x19BA8Cu;
label_19ba8c:
    // 0x19ba8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19BA8Cu;
    {
        const bool branch_taken_0x19ba8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA8Cu;
            // 0x19ba90: 0x26243c80  addiu       $a0, $s1, 0x3C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba8c) {
            ctx->pc = 0x19BAB0u;
            goto label_19bab0;
        }
    }
    ctx->pc = 0x19BA94u;
    // 0x19ba94: 0x0  nop
    ctx->pc = 0x19ba94u;
    // NOP
label_19ba98:
    // 0x19ba98: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x19ba98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_19ba9c:
    // 0x19ba9c: 0x24a59320  addiu       $a1, $a1, -0x6CE0
    ctx->pc = 0x19ba9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939424));
    // 0x19baa0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19baa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19baa4: 0xc04ae62  jal         func_12B988
    ctx->pc = 0x19BAA4u;
    SET_GPR_U32(ctx, 31, 0x19BAACu);
    ctx->pc = 0x19BAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BAA4u;
            // 0x19baa8: 0x26243c80  addiu       $a0, $s1, 0x3C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAACu; }
        if (ctx->pc != 0x19BAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAACu; }
        if (ctx->pc != 0x19BAACu) { return; }
    }
    ctx->pc = 0x19BAACu;
label_19baac:
    // 0x19baac: 0x26243c80  addiu       $a0, $s1, 0x3C80
    ctx->pc = 0x19baacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15488));
label_19bab0:
    // 0x19bab0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19bab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19bab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19bab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bab8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19bab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19babc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19babcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bac0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19bac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19bac4: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19BAC4u;
    ctx->pc = 0x19BAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BAC4u;
            // 0x19bac8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19BACCu;
    // 0x19bacc: 0x0  nop
    ctx->pc = 0x19baccu;
    // NOP
    // 0x19bad0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x19bad4: 0x3e00008  jr          $ra
    ctx->pc = 0x19BAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BAD4u;
            // 0x19bad8: 0x8c629928  lw          $v0, -0x66D8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940968)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BADCu;
    // 0x19badc: 0x0  nop
    ctx->pc = 0x19badcu;
    // NOP
    // 0x19bae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19bae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19bae4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19bae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19bae8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19bae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19baec: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x19BAECu;
    SET_GPR_U32(ctx, 31, 0x19BAF4u);
    ctx->pc = 0x19BAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BAECu;
            // 0x19baf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAF4u; }
        if (ctx->pc != 0x19BAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAF4u; }
        if (ctx->pc != 0x19BAF4u) { return; }
    }
    ctx->pc = 0x19BAF4u;
label_19baf4:
    // 0x19baf4: 0xac500034  sw          $s0, 0x34($v0)
    ctx->pc = 0x19baf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 16));
    // 0x19baf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19baf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19bafc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19bafcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bb00: 0x3e00008  jr          $ra
    ctx->pc = 0x19BB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB00u;
            // 0x19bb04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BB08u;
    // 0x19bb08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19bb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19bb0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bb10: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x19BB10u;
    SET_GPR_U32(ctx, 31, 0x19BB18u);
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB18u; }
        if (ctx->pc != 0x19BB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB18u; }
        if (ctx->pc != 0x19BB18u) { return; }
    }
    ctx->pc = 0x19BB18u;
label_19bb18:
    // 0x19bb18: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x19bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x19bb1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bb20: 0x3e00008  jr          $ra
    ctx->pc = 0x19BB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB20u;
            // 0x19bb24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BB28u;
    // 0x19bb28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19bb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19bb2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19bb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19bb30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19bb30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19bb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19bb38: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19bb38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19bb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19bb40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19bb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19bb44: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x19BB44u;
    SET_GPR_U32(ctx, 31, 0x19BB4Cu);
    ctx->pc = 0x19BB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB44u;
            // 0x19bb48: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB4Cu; }
        if (ctx->pc != 0x19BB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB4Cu; }
        if (ctx->pc != 0x19BB4Cu) { return; }
    }
    ctx->pc = 0x19BB4Cu;
label_19bb4c:
    // 0x19bb4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19bb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19bb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19bb54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19bb58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19bb5c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x19bb5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19bb60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bb64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19bb64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bb68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19bb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb6c: 0x806dcf4  j           func_1B73D0
    ctx->pc = 0x19BB6Cu;
    ctx->pc = 0x19BB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB6Cu;
            // 0x19bb70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B73D0u;
    if (runtime->hasFunction(0x1B73D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B73D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B73D0_0x1b73d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19BB74u;
    // 0x19bb74: 0x0  nop
    ctx->pc = 0x19bb74u;
    // NOP
    // 0x19bb78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19bb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19bb7c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19BB7Cu;
    {
        const bool branch_taken_0x19bb7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB7Cu;
            // 0x19bb80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb7c) {
            ctx->pc = 0x19BBA0u;
            goto label_19bba0;
        }
    }
    ctx->pc = 0x19BB84u;
    // 0x19bb84: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x19BB84u;
    SET_GPR_U32(ctx, 31, 0x19BB8Cu);
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB8Cu; }
        if (ctx->pc != 0x19BB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB8Cu; }
        if (ctx->pc != 0x19BB8Cu) { return; }
    }
    ctx->pc = 0x19BB8Cu;
label_19bb8c:
    // 0x19bb8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bb90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19bb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb94: 0x806dd1e  j           func_1B7478
    ctx->pc = 0x19BB94u;
    ctx->pc = 0x19BB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB94u;
            // 0x19bb98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7478u;
    {
        auto targetFn = runtime->lookupFunction(0x1B7478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19BB9Cu;
    // 0x19bb9c: 0x0  nop
    ctx->pc = 0x19bb9cu;
    // NOP
label_19bba0:
    // 0x19bba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bba4: 0x806dd1e  j           func_1B7478
    ctx->pc = 0x19BBA4u;
    ctx->pc = 0x19BBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BBA4u;
            // 0x19bba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7478u;
    {
        auto targetFn = runtime->lookupFunction(0x1B7478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19BBACu;
    // 0x19bbac: 0x0  nop
    ctx->pc = 0x19bbacu;
    // NOP
    // 0x19bbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19bbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19bbb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19bbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19bbb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19bbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19bbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19bbc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19bbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19bbc4: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x19BBC4u;
    SET_GPR_U32(ctx, 31, 0x19BBCCu);
    ctx->pc = 0x19BBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BBC4u;
            // 0x19bbc8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BBCCu; }
        if (ctx->pc != 0x19BBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BBCCu; }
        if (ctx->pc != 0x19BBCCu) { return; }
    }
    ctx->pc = 0x19BBCCu;
label_19bbcc:
    // 0x19bbcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19bbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bbd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19bbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19bbd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19bbd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19bbdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19bbdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bbe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19bbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbe4: 0x806dcd8  j           func_1B7360
    ctx->pc = 0x19BBE4u;
    ctx->pc = 0x19BBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BBE4u;
            // 0x19bbe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7360u;
    if (runtime->hasFunction(0x1B7360u)) {
        auto targetFn = runtime->lookupFunction(0x1B7360u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B7360_0x1b7360(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19BBECu;
    // 0x19bbec: 0x0  nop
    ctx->pc = 0x19bbecu;
    // NOP
}
