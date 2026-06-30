#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00106848
// Address: 0x106848 - 0x106930
void sub_00106848_0x106848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106848_0x106848");
#endif

    switch (ctx->pc) {
        case 0x106864u: goto label_106864;
        case 0x10689cu: goto label_10689c;
        case 0x10690cu: goto label_10690c;
        default: break;
    }

    ctx->pc = 0x106848u;

    // 0x106848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10684c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10684cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106850: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x106850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x106854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106858: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x106858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10685c: 0xc041a96  jal         func_106A58
    ctx->pc = 0x10685Cu;
    SET_GPR_U32(ctx, 31, 0x106864u);
    ctx->pc = 0x106860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10685Cu;
            // 0x106860: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106A58u;
    if (runtime->hasFunction(0x106A58u)) {
        auto targetFn = runtime->lookupFunction(0x106A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106864u; }
        if (ctx->pc != 0x106864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106A58_0x106a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106864u; }
        if (ctx->pc != 0x106864u) { return; }
    }
    ctx->pc = 0x106864u;
label_106864:
    // 0x106864: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x106864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x106868: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106868u;
    {
        const bool branch_taken_0x106868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10686Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106868u;
            // 0x10686c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106868) {
            ctx->pc = 0x106880u;
            goto label_106880;
        }
    }
    ctx->pc = 0x106870u;
    // 0x106870: 0x8e02084c  lw          $v0, 0x84C($s0)
    ctx->pc = 0x106870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    // 0x106874: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x106874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x106878: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x106878u;
    {
        const bool branch_taken_0x106878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10687Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106878u;
            // 0x10687c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106878) {
            ctx->pc = 0x1068A8u;
            goto label_1068a8;
        }
    }
    ctx->pc = 0x106880u;
label_106880:
    // 0x106880: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x106880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x106884: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x106884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x106888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10688c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10688cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x106890: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x106890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x106894: 0xc0419b2  jal         func_1066C8
    ctx->pc = 0x106894u;
    SET_GPR_U32(ctx, 31, 0x10689Cu);
    ctx->pc = 0x106898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106894u;
            // 0x106898: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1066C8u;
    if (runtime->hasFunction(0x1066C8u)) {
        auto targetFn = runtime->lookupFunction(0x1066C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10689Cu; }
        if (ctx->pc != 0x10689Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001066C8_0x1066c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10689Cu; }
        if (ctx->pc != 0x10689Cu) { return; }
    }
    ctx->pc = 0x10689Cu;
label_10689c:
    // 0x10689c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10689cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1068a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1068a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1068a4: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x1068a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
label_1068a8:
    // 0x1068a8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1068a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1068ac: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x1068acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x1068b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1068b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1068b4: 0x2282825  or          $a1, $s1, $t0
    ctx->pc = 0x1068b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 8));
    // 0x1068b8: 0xae04084c  sw          $a0, 0x84C($s0)
    ctx->pc = 0x1068b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 4));
    // 0x1068bc: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x1068bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x1068c0: 0x8e060848  lw          $a2, 0x848($s0)
    ctx->pc = 0x1068c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x1068c4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1068c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1068c8: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x1068c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1068cc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1068ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1068d0: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x1068d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1068d4: 0xae07082c  sw          $a3, 0x82C($s0)
    ctx->pc = 0x1068d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 7));
    // 0x1068d8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1068d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1068dc: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1068DCu;
    {
        const bool branch_taken_0x1068dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1068E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1068DCu;
            // 0x1068e0: 0x868806  srlv        $s1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068dc) {
            ctx->pc = 0x1068F8u;
            goto label_1068f8;
        }
    }
    ctx->pc = 0x1068E4u;
    // 0x1068e4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1068e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1068e8: 0x50e20006  beql        $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1068E8u;
    {
        const bool branch_taken_0x1068e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1068e8) {
            ctx->pc = 0x1068ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1068E8u;
            // 0x1068ec: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106904u;
            goto label_106904;
        }
    }
    ctx->pc = 0x1068F0u;
    // 0x1068f0: 0x14e80003  bne         $a3, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1068F0u;
    {
        const bool branch_taken_0x1068f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x1068F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1068F0u;
            // 0x1068f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068f0) {
            ctx->pc = 0x106900u;
            goto label_106900;
        }
    }
    ctx->pc = 0x1068F8u;
label_1068f8:
    // 0x1068f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1068F8u;
    {
        const bool branch_taken_0x1068f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1068FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1068F8u;
            // 0x1068fc: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068f8) {
            ctx->pc = 0x106904u;
            goto label_106904;
        }
    }
    ctx->pc = 0x106900u;
label_106900:
    // 0x106900: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x106900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_106904:
    // 0x106904: 0xc0419b2  jal         func_1066C8
    ctx->pc = 0x106904u;
    SET_GPR_U32(ctx, 31, 0x10690Cu);
    ctx->pc = 0x106908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106904u;
            // 0x106908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1066C8u;
    if (runtime->hasFunction(0x1066C8u)) {
        auto targetFn = runtime->lookupFunction(0x1066C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10690Cu; }
        if (ctx->pc != 0x10690Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001066C8_0x1066c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10690Cu; }
        if (ctx->pc != 0x10690Cu) { return; }
    }
    ctx->pc = 0x10690Cu;
label_10690c:
    // 0x10690c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10690cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x106910: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x106910u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x106914: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x106914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106918: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x106918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
    // 0x10691c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10691cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106924: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x106924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106928: 0x3e00008  jr          $ra
    ctx->pc = 0x106928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10692Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106928u;
            // 0x10692c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106930u;
}
