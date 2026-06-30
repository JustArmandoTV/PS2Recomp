#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DF350
// Address: 0x2df350 - 0x2df4f0
void sub_002DF350_0x2df350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF350_0x2df350");
#endif

    switch (ctx->pc) {
        case 0x2df378u: goto label_2df378;
        case 0x2df3a4u: goto label_2df3a4;
        case 0x2df424u: goto label_2df424;
        case 0x2df4b4u: goto label_2df4b4;
        case 0x2df4bcu: goto label_2df4bc;
        case 0x2df4c4u: goto label_2df4c4;
        case 0x2df4ccu: goto label_2df4cc;
        default: break;
    }

    ctx->pc = 0x2df350u;

    // 0x2df350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df354: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2df354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2df358: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2df358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2df35c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2df35cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2df360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2df360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2df364: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2df364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2df368: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2df368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df36c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2df36cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df370: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2DF370u;
    SET_GPR_U32(ctx, 31, 0x2DF378u);
    ctx->pc = 0x2DF374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF370u;
            // 0x2df374: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF378u; }
        if (ctx->pc != 0x2DF378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF378u; }
        if (ctx->pc != 0x2DF378u) { return; }
    }
    ctx->pc = 0x2DF378u;
label_2df378:
    // 0x2df378: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2df378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2df37c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x2df37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2df380: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2df380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x2df384: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x2df384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x2df388: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2df388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2df38c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2df38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2df390: 0x24422f40  addiu       $v0, $v0, 0x2F40
    ctx->pc = 0x2df390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12096));
    // 0x2df394: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2df394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2df398: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2df398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2df39c: 0xc075128  jal         func_1D44A0
    ctx->pc = 0x2DF39Cu;
    SET_GPR_U32(ctx, 31, 0x2DF3A4u);
    ctx->pc = 0x2DF3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF39Cu;
            // 0x2df3a0: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF3A4u; }
        if (ctx->pc != 0x2DF3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF3A4u; }
        if (ctx->pc != 0x2DF3A4u) { return; }
    }
    ctx->pc = 0x2DF3A4u;
label_2df3a4:
    // 0x2df3a4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2df3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2df3a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2df3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2df3ac: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x2df3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
    // 0x2df3b0: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x2df3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2df3b4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2df3b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2df3b8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF3B8u;
    {
        const bool branch_taken_0x2df3b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df3b8) {
            ctx->pc = 0x2DF3BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF3B8u;
            // 0x2df3bc: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DF3CCu;
            goto label_2df3cc;
        }
    }
    ctx->pc = 0x2DF3C0u;
    // 0x2df3c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2df3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2df3c4: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x2df3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
    // 0x2df3c8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2df3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2df3cc:
    // 0x2df3cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2df3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2df3d0: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x2df3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
    // 0x2df3d4: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x2df3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2df3d8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2df3d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2df3dc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF3DCu;
    {
        const bool branch_taken_0x2df3dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df3dc) {
            ctx->pc = 0x2DF3E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF3DCu;
            // 0x2df3e0: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DF3F0u;
            goto label_2df3f0;
        }
    }
    ctx->pc = 0x2DF3E4u;
    // 0x2df3e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2df3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2df3e8: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x2df3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
    // 0x2df3ec: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2df3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2df3f0:
    // 0x2df3f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2df3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2df3f4: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x2df3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
    // 0x2df3f8: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x2df3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2df3fc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2df3fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2df400: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF400u;
    {
        const bool branch_taken_0x2df400 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df400) {
            ctx->pc = 0x2DF404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF400u;
            // 0x2df404: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DF414u;
            goto label_2df414;
        }
    }
    ctx->pc = 0x2DF408u;
    // 0x2df408: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2df408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2df40c: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x2df40cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
    // 0x2df410: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2df410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2df414:
    // 0x2df414: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2df414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df418: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2df418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2df41c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2df41cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2df420: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2df420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2df424:
    // 0x2df424: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x2df424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x2df428: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2df428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2df42c: 0x8c64e3a8  lw          $a0, -0x1C58($v1)
    ctx->pc = 0x2df42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960040)));
    // 0x2df430: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2df430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2df434: 0xac44e3a8  sw          $a0, -0x1C58($v0)
    ctx->pc = 0x2df434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960040), GPR_U32(ctx, 4));
    // 0x2df438: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x2df438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2df43c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2df43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2df440: 0xc4202a  slt         $a0, $a2, $a0
    ctx->pc = 0x2df440u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2df444: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2DF444u;
    {
        const bool branch_taken_0x2df444 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF444u;
            // 0x2df448: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df444) {
            ctx->pc = 0x2DF424u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2df424;
        }
    }
    ctx->pc = 0x2DF44Cu;
    // 0x2df44c: 0x8e060054  lw          $a2, 0x54($s0)
    ctx->pc = 0x2df44cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2df450: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2df450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2df454: 0x8c45e478  lw          $a1, -0x1B88($v0)
    ctx->pc = 0x2df454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960248)));
    // 0x2df458: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2df458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2df45c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x2df45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2df460: 0x8cc70030  lw          $a3, 0x30($a2)
    ctx->pc = 0x2df460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2df464: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2df464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2df468: 0xa03027  not         $a2, $a1
    ctx->pc = 0x2df468u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x2df46c: 0x8ce50090  lw          $a1, 0x90($a3)
    ctx->pc = 0x2df46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 144)));
    // 0x2df470: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x2df470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x2df474: 0xace50090  sw          $a1, 0x90($a3)
    ctx->pc = 0x2df474u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 5));
    // 0x2df478: 0x8e060054  lw          $a2, 0x54($s0)
    ctx->pc = 0x2df478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2df47c: 0x8c63e480  lw          $v1, -0x1B80($v1)
    ctx->pc = 0x2df47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960256)));
    // 0x2df480: 0x8cc60030  lw          $a2, 0x30($a2)
    ctx->pc = 0x2df480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2df484: 0x602827  not         $a1, $v1
    ctx->pc = 0x2df484u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x2df488: 0x8cc30120  lw          $v1, 0x120($a2)
    ctx->pc = 0x2df488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
    // 0x2df48c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2df48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2df490: 0xacc30120  sw          $v1, 0x120($a2)
    ctx->pc = 0x2df490u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 3));
    // 0x2df494: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x2df494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2df498: 0x8c42e488  lw          $v0, -0x1B78($v0)
    ctx->pc = 0x2df498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960264)));
    // 0x2df49c: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x2df49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2df4a0: 0x401827  not         $v1, $v0
    ctx->pc = 0x2df4a0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x2df4a4: 0x8ca201b0  lw          $v0, 0x1B0($a1)
    ctx->pc = 0x2df4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x2df4a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2df4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2df4ac: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2DF4ACu;
    SET_GPR_U32(ctx, 31, 0x2DF4B4u);
    ctx->pc = 0x2DF4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF4ACu;
            // 0x2df4b0: 0xaca201b0  sw          $v0, 0x1B0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF4B4u; }
        if (ctx->pc != 0x2DF4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF4B4u; }
        if (ctx->pc != 0x2DF4B4u) { return; }
    }
    ctx->pc = 0x2DF4B4u;
label_2df4b4:
    // 0x2df4b4: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2DF4B4u;
    SET_GPR_U32(ctx, 31, 0x2DF4BCu);
    ctx->pc = 0x2DF4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF4B4u;
            // 0x2df4b8: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF4BCu; }
        if (ctx->pc != 0x2DF4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF4BCu; }
        if (ctx->pc != 0x2DF4BCu) { return; }
    }
    ctx->pc = 0x2DF4BCu;
label_2df4bc:
    // 0x2df4bc: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2DF4BCu;
    SET_GPR_U32(ctx, 31, 0x2DF4C4u);
    ctx->pc = 0x2DF4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF4BCu;
            // 0x2df4c0: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF4C4u; }
        if (ctx->pc != 0x2DF4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF4C4u; }
        if (ctx->pc != 0x2DF4C4u) { return; }
    }
    ctx->pc = 0x2DF4C4u;
label_2df4c4:
    // 0x2df4c4: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2DF4C4u;
    SET_GPR_U32(ctx, 31, 0x2DF4CCu);
    ctx->pc = 0x2DF4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF4C4u;
            // 0x2df4c8: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF4CCu; }
        if (ctx->pc != 0x2DF4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF4CCu; }
        if (ctx->pc != 0x2DF4CCu) { return; }
    }
    ctx->pc = 0x2DF4CCu;
label_2df4cc:
    // 0x2df4cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2df4ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df4d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2df4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df4d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2df4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df4d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF4DCu;
            // 0x2df4e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF4E4u;
    // 0x2df4e4: 0x0  nop
    ctx->pc = 0x2df4e4u;
    // NOP
    // 0x2df4e8: 0x0  nop
    ctx->pc = 0x2df4e8u;
    // NOP
    // 0x2df4ec: 0x0  nop
    ctx->pc = 0x2df4ecu;
    // NOP
}
