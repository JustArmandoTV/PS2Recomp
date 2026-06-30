#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A87D0
// Address: 0x4a87d0 - 0x4a89c0
void sub_004A87D0_0x4a87d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A87D0_0x4a87d0");
#endif

    switch (ctx->pc) {
        case 0x4a88a4u: goto label_4a88a4;
        case 0x4a8990u: goto label_4a8990;
        case 0x4a89a8u: goto label_4a89a8;
        default: break;
    }

    ctx->pc = 0x4a87d0u;

    // 0x4a87d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a87d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a87d4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x4a87d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x4a87d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a87d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a87dc: 0x8ca60d6c  lw          $a2, 0xD6C($a1)
    ctx->pc = 0x4a87dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3436)));
    // 0x4a87e0: 0x80c70010  lb          $a3, 0x10($a2)
    ctx->pc = 0x4a87e0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4a87e4: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A87E4u;
    {
        const bool branch_taken_0x4a87e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a87e4) {
            ctx->pc = 0x4A87E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A87E4u;
            // 0x4a87e8: 0x8086008a  lb          $a2, 0x8A($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 138)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A87F4u;
            goto label_4a87f4;
        }
    }
    ctx->pc = 0x4A87ECu;
    // 0x4a87ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a87ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a87f0: 0x8086008a  lb          $a2, 0x8A($a0)
    ctx->pc = 0x4a87f0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 138)));
label_4a87f4:
    // 0x4a87f4: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x4a87f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
    // 0x4a87f8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4a87f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x4a87fc: 0x50c3002a  beql        $a2, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x4A87FCu;
    {
        const bool branch_taken_0x4a87fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a87fc) {
            ctx->pc = 0x4A8800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A87FCu;
            // 0x4a8800: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A88A8u;
            goto label_4a88a8;
        }
    }
    ctx->pc = 0x4A8804u;
    // 0x4a8804: 0xa086008b  sb          $a2, 0x8B($a0)
    ctx->pc = 0x4a8804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 139), (uint8_t)GPR_U32(ctx, 6));
    // 0x4a8808: 0xa087008a  sb          $a3, 0x8A($a0)
    ctx->pc = 0x4a8808u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 138), (uint8_t)GPR_U32(ctx, 7));
    // 0x4a880c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4a880cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a8810: 0x8ca20d98  lw          $v0, 0xD98($a1)
    ctx->pc = 0x4a8810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
    // 0x4a8814: 0xa0820094  sb          $v0, 0x94($a0)
    ctx->pc = 0x4a8814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 148), (uint8_t)GPR_U32(ctx, 2));
    // 0x4a8818: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x4a8818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x4a881c: 0x50660019  beql        $v1, $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x4A881Cu;
    {
        const bool branch_taken_0x4a881c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x4a881c) {
            ctx->pc = 0x4A8820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A881Cu;
            // 0x4a8820: 0x9082008c  lbu         $v0, 0x8C($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8884u;
            goto label_4a8884;
        }
    }
    ctx->pc = 0x4A8824u;
    // 0x4a8824: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4a8824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a8828: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A8828u;
    {
        const bool branch_taken_0x4a8828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a8828) {
            ctx->pc = 0x4A8880u;
            goto label_4a8880;
        }
    }
    ctx->pc = 0x4A8830u;
    // 0x4a8830: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a8830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a8834: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A8834u;
    {
        const bool branch_taken_0x4a8834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a8834) {
            ctx->pc = 0x4A8838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8834u;
            // 0x4a8838: 0x9083008c  lbu         $v1, 0x8C($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A885Cu;
            goto label_4a885c;
        }
    }
    ctx->pc = 0x4A883Cu;
    // 0x4a883c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a883cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a8840: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A8840u;
    {
        const bool branch_taken_0x4a8840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a8840) {
            ctx->pc = 0x4A8844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8840u;
            // 0x4a8844: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8850u;
            goto label_4a8850;
        }
    }
    ctx->pc = 0x4A8848u;
    // 0x4a8848: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4A8848u;
    {
        const bool branch_taken_0x4a8848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A884Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8848u;
            // 0x4a884c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8848) {
            ctx->pc = 0x4A8890u;
            goto label_4a8890;
        }
    }
    ctx->pc = 0x4A8850u;
label_4a8850:
    // 0x4a8850: 0xa082008d  sb          $v0, 0x8D($a0)
    ctx->pc = 0x4a8850u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 141), (uint8_t)GPR_U32(ctx, 2));
    // 0x4a8854: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4A8854u;
    {
        const bool branch_taken_0x4a8854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8854u;
            // 0x4a8858: 0xac800090  sw          $zero, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8854) {
            ctx->pc = 0x4A888Cu;
            goto label_4a888c;
        }
    }
    ctx->pc = 0x4A885Cu;
label_4a885c:
    // 0x4a885c: 0x9082008d  lbu         $v0, 0x8D($a0)
    ctx->pc = 0x4a885cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 141)));
    // 0x4a8860: 0xa082008c  sb          $v0, 0x8C($a0)
    ctx->pc = 0x4a8860u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x4a8864: 0xa083008d  sb          $v1, 0x8D($a0)
    ctx->pc = 0x4a8864u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 141), (uint8_t)GPR_U32(ctx, 3));
    // 0x4a8868: 0x8ca20e34  lw          $v0, 0xE34($a1)
    ctx->pc = 0x4a8868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3636)));
    // 0x4a886c: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A886Cu;
    {
        const bool branch_taken_0x4a886c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x4a886c) {
            ctx->pc = 0x4A888Cu;
            goto label_4a888c;
        }
    }
    ctx->pc = 0x4A8874u;
    // 0x4a8874: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4a8874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a8878: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A8878u;
    {
        const bool branch_taken_0x4a8878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A887Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8878u;
            // 0x4a887c: 0xa0820094  sb          $v0, 0x94($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 148), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8878) {
            ctx->pc = 0x4A888Cu;
            goto label_4a888c;
        }
    }
    ctx->pc = 0x4A8880u;
label_4a8880:
    // 0x4a8880: 0x9082008c  lbu         $v0, 0x8C($a0)
    ctx->pc = 0x4a8880u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
label_4a8884:
    // 0x4a8884: 0xa082008d  sb          $v0, 0x8D($a0)
    ctx->pc = 0x4a8884u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 141), (uint8_t)GPR_U32(ctx, 2));
    // 0x4a8888: 0xa080008c  sb          $zero, 0x8C($a0)
    ctx->pc = 0x4a8888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 140), (uint8_t)GPR_U32(ctx, 0));
label_4a888c:
    // 0x4a888c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a888cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a8890:
    // 0x4a8890: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x4a8890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x4a8894: 0xa083008e  sb          $v1, 0x8E($a0)
    ctx->pc = 0x4a8894u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 142), (uint8_t)GPR_U32(ctx, 3));
    // 0x4a8898: 0xa083008f  sb          $v1, 0x8F($a0)
    ctx->pc = 0x4a8898u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 143), (uint8_t)GPR_U32(ctx, 3));
    // 0x4a889c: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x4A889Cu;
    SET_GPR_U32(ctx, 31, 0x4A88A4u);
    ctx->pc = 0x4A88A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A889Cu;
            // 0x4a88a0: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A88A4u; }
        if (ctx->pc != 0x4A88A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A88A4u; }
        if (ctx->pc != 0x4A88A4u) { return; }
    }
    ctx->pc = 0x4A88A4u;
label_4a88a4:
    // 0x4a88a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a88a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a88a8:
    // 0x4a88a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A88A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A88ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A88A8u;
            // 0x4a88ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A88B0u;
    // 0x4a88b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4a88b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a88b4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x4a88b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4a88b8: 0xa085008a  sb          $a1, 0x8A($a0)
    ctx->pc = 0x4a88b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 138), (uint8_t)GPR_U32(ctx, 5));
    // 0x4a88bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4a88bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a88c0: 0xa085008b  sb          $a1, 0x8B($a0)
    ctx->pc = 0x4a88c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 139), (uint8_t)GPR_U32(ctx, 5));
    // 0x4a88c4: 0xa0850094  sb          $a1, 0x94($a0)
    ctx->pc = 0x4a88c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 148), (uint8_t)GPR_U32(ctx, 5));
    // 0x4a88c8: 0xa0800088  sb          $zero, 0x88($a0)
    ctx->pc = 0x4a88c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 136), (uint8_t)GPR_U32(ctx, 0));
    // 0x4a88cc: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x4a88ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x4a88d0: 0xa0860089  sb          $a2, 0x89($a0)
    ctx->pc = 0x4a88d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 137), (uint8_t)GPR_U32(ctx, 6));
    // 0x4a88d4: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x4a88d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x4a88d8: 0xa080008e  sb          $zero, 0x8E($a0)
    ctx->pc = 0x4a88d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x4a88dc: 0xa080008f  sb          $zero, 0x8F($a0)
    ctx->pc = 0x4a88dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 143), (uint8_t)GPR_U32(ctx, 0));
    // 0x4a88e0: 0x8c850078  lw          $a1, 0x78($a0)
    ctx->pc = 0x4a88e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x4a88e4: 0x50a30013  beql        $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4A88E4u;
    {
        const bool branch_taken_0x4a88e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a88e4) {
            ctx->pc = 0x4A88E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A88E4u;
            // 0x4a88e8: 0xac800070  sw          $zero, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8934u;
            goto label_4a8934;
        }
    }
    ctx->pc = 0x4A88ECu;
    // 0x4a88ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4a88ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a88f0: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4A88F0u;
    {
        const bool branch_taken_0x4a88f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a88f0) {
            ctx->pc = 0x4A8930u;
            goto label_4a8930;
        }
    }
    ctx->pc = 0x4A88F8u;
    // 0x4a88f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a88f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a88fc: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4A88FCu;
    {
        const bool branch_taken_0x4a88fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a88fc) {
            ctx->pc = 0x4A8900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A88FCu;
            // 0x4a8900: 0xa086008c  sb          $a2, 0x8C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 140), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8928u;
            goto label_4a8928;
        }
    }
    ctx->pc = 0x4A8904u;
    // 0x4a8904: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a8904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a8908: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A8908u;
    {
        const bool branch_taken_0x4a8908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a8908) {
            ctx->pc = 0x4A890Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8908u;
            // 0x4a890c: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8918u;
            goto label_4a8918;
        }
    }
    ctx->pc = 0x4A8910u;
    // 0x4a8910: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4A8910u;
    {
        const bool branch_taken_0x4a8910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8910) {
            ctx->pc = 0x4A8940u;
            goto label_4a8940;
        }
    }
    ctx->pc = 0x4A8918u;
label_4a8918:
    // 0x4a8918: 0xac830070  sw          $v1, 0x70($a0)
    ctx->pc = 0x4a8918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
    // 0x4a891c: 0xa080008c  sb          $zero, 0x8C($a0)
    ctx->pc = 0x4a891cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 140), (uint8_t)GPR_U32(ctx, 0));
    // 0x4a8920: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A8920u;
    {
        const bool branch_taken_0x4a8920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8920u;
            // 0x4a8924: 0xa086008d  sb          $a2, 0x8D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 141), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8920) {
            ctx->pc = 0x4A8940u;
            goto label_4a8940;
        }
    }
    ctx->pc = 0x4A8928u;
label_4a8928:
    // 0x4a8928: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A8928u;
    {
        const bool branch_taken_0x4a8928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A892Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8928u;
            // 0x4a892c: 0xa086008d  sb          $a2, 0x8D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 141), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8928) {
            ctx->pc = 0x4A8940u;
            goto label_4a8940;
        }
    }
    ctx->pc = 0x4A8930u;
label_4a8930:
    // 0x4a8930: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x4a8930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
label_4a8934:
    // 0x4a8934: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x4a8934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4a8938: 0xa080008c  sb          $zero, 0x8C($a0)
    ctx->pc = 0x4a8938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 140), (uint8_t)GPR_U32(ctx, 0));
    // 0x4a893c: 0xa083008d  sb          $v1, 0x8D($a0)
    ctx->pc = 0x4a893cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 141), (uint8_t)GPR_U32(ctx, 3));
label_4a8940:
    // 0x4a8940: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A8948u;
    // 0x4a8948: 0x0  nop
    ctx->pc = 0x4a8948u;
    // NOP
    // 0x4a894c: 0x0  nop
    ctx->pc = 0x4a894cu;
    // NOP
    // 0x4a8950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a8950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a8954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a8954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a8958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a8958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a895c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a895cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4a8960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a8960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8964: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4A8964u;
    {
        const bool branch_taken_0x4a8964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8964u;
            // 0x4a8968: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8964) {
            ctx->pc = 0x4A89A8u;
            goto label_4a89a8;
        }
    }
    ctx->pc = 0x4A896Cu;
    // 0x4a896c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a896cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4a8970: 0x244203b0  addiu       $v0, $v0, 0x3B0
    ctx->pc = 0x4a8970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 944));
    // 0x4a8974: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A8974u;
    {
        const bool branch_taken_0x4a8974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8974u;
            // 0x4a8978: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8974) {
            ctx->pc = 0x4A8990u;
            goto label_4a8990;
        }
    }
    ctx->pc = 0x4A897Cu;
    // 0x4a897c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4a897cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4a8980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a8980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8984: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4a8984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x4a8988: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x4A8988u;
    SET_GPR_U32(ctx, 31, 0x4A8990u);
    ctx->pc = 0x4A898Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8988u;
            // 0x4a898c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8990u; }
        if (ctx->pc != 0x4A8990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8990u; }
        if (ctx->pc != 0x4A8990u) { return; }
    }
    ctx->pc = 0x4A8990u;
label_4a8990:
    // 0x4a8990: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4a8990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x4a8994: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4a8994u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4a8998: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A8998u;
    {
        const bool branch_taken_0x4a8998 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4a8998) {
            ctx->pc = 0x4A899Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8998u;
            // 0x4a899c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A89ACu;
            goto label_4a89ac;
        }
    }
    ctx->pc = 0x4A89A0u;
    // 0x4a89a0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4A89A0u;
    SET_GPR_U32(ctx, 31, 0x4A89A8u);
    ctx->pc = 0x4A89A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A89A0u;
            // 0x4a89a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A89A8u; }
        if (ctx->pc != 0x4A89A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A89A8u; }
        if (ctx->pc != 0x4A89A8u) { return; }
    }
    ctx->pc = 0x4A89A8u;
label_4a89a8:
    // 0x4a89a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4a89a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a89ac:
    // 0x4a89ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a89acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a89b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a89b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a89b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a89b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a89b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A89B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A89BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A89B8u;
            // 0x4a89bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A89C0u;
}
