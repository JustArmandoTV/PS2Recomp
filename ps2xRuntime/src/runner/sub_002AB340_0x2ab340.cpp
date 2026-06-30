#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AB340
// Address: 0x2ab340 - 0x2ab4c0
void sub_002AB340_0x2ab340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB340_0x2ab340");
#endif

    switch (ctx->pc) {
        case 0x2ab440u: goto label_2ab440;
        default: break;
    }

    ctx->pc = 0x2ab340u;

    // 0x2ab340: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2ab340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2ab344: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ab344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ab348: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2ab348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2ab34c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2ab34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2ab350: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ab350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ab354: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x2ab354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x2ab358: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2ab358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2ab35c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ab35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ab360: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2ab360u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ab364: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB364u;
    {
        const bool branch_taken_0x2ab364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab364) {
            ctx->pc = 0x2AB374u;
            goto label_2ab374;
        }
    }
    ctx->pc = 0x2AB36Cu;
    // 0x2ab36c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2ab36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ab370: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2ab370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_2ab374:
    // 0x2ab374: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB37Cu;
    // 0x2ab37c: 0x0  nop
    ctx->pc = 0x2ab37cu;
    // NOP
    // 0x2ab380: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2ab380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2ab384: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2ab384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ab388: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2ab388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2ab38c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2ab38cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2ab390: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2ab390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2ab394: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2ab394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2ab398: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB398u;
            // 0x2ab39c: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB3A0u;
    // 0x2ab3a0: 0x8c870020  lw          $a3, 0x20($a0)
    ctx->pc = 0x2ab3a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ab3a4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2ab3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2ab3a8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2ab3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2ab3ac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2ab3acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2ab3b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2ab3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ab3b4: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x2ab3b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ab3b8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB3B8u;
    {
        const bool branch_taken_0x2ab3b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB3B8u;
            // 0x2ab3bc: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab3b8) {
            ctx->pc = 0x2AB3C4u;
            goto label_2ab3c4;
        }
    }
    ctx->pc = 0x2AB3C0u;
    // 0x2ab3c0: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x2ab3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_2ab3c4:
    // 0x2ab3c4: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x2ab3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ab3c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ab3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ab3cc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2ab3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ab3d0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2ab3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2ab3d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ab3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ab3d8: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x2ab3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ab3dc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ab3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ab3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB3E0u;
            // 0x2ab3e4: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB3E8u;
    // 0x2ab3e8: 0x0  nop
    ctx->pc = 0x2ab3e8u;
    // NOP
    // 0x2ab3ec: 0x0  nop
    ctx->pc = 0x2ab3ecu;
    // NOP
    // 0x2ab3f0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2ab3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2ab3f4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2ab3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ab3f8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ab3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ab3fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2ab3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2ab400: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2ab400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ab404: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2ab404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ab408: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2ab408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2ab40c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ab40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ab410: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x2ab410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ab414: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ab414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ab418: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB418u;
            // 0x2ab41c: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB420u;
    // 0x2ab420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ab420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ab424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ab424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ab428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ab428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ab42c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ab42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ab430: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ab430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab434: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x2ab434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2ab438: 0xc04a508  jal         func_129420
    ctx->pc = 0x2AB438u;
    SET_GPR_U32(ctx, 31, 0x2AB440u);
    ctx->pc = 0x2AB43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB438u;
            // 0x2ab43c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB440u; }
        if (ctx->pc != 0x2AB440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB440u; }
        if (ctx->pc != 0x2AB440u) { return; }
    }
    ctx->pc = 0x2AB440u;
label_2ab440:
    // 0x2ab440: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2ab440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2ab444: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ab444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab448: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ab448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ab44c: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2ab44cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x2ab450: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2ab450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2ab454: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ab454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ab458: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x2ab458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x2ab45c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ab45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ab460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ab464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab468: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB468u;
            // 0x2ab46c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB470u;
    // 0x2ab470: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2ab470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2ab474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab478: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2ab478u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ab47c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2ab47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2ab480: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ab480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ab484: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2ab484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2ab488: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2ab488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2ab48c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ab48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ab490: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB490u;
            // 0x2ab494: 0xac830024  sw          $v1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB498u;
    // 0x2ab498: 0x0  nop
    ctx->pc = 0x2ab498u;
    // NOP
    // 0x2ab49c: 0x0  nop
    ctx->pc = 0x2ab49cu;
    // NOP
    // 0x2ab4a0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2ab4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ab4a4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2ab4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2ab4a8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2ab4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ab4ac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2ab4acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2ab4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB4B0u;
            // 0x2ab4b4: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB4B8u;
    // 0x2ab4b8: 0x0  nop
    ctx->pc = 0x2ab4b8u;
    // NOP
    // 0x2ab4bc: 0x0  nop
    ctx->pc = 0x2ab4bcu;
    // NOP
}
