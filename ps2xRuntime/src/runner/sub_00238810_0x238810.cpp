#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238810
// Address: 0x238810 - 0x238960
void sub_00238810_0x238810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238810_0x238810");
#endif

    switch (ctx->pc) {
        case 0x238860u: goto label_238860;
        case 0x2388ccu: goto label_2388cc;
        case 0x2388e0u: goto label_2388e0;
        case 0x238904u: goto label_238904;
        case 0x238918u: goto label_238918;
        default: break;
    }

    ctx->pc = 0x238810u;

    // 0x238810: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x238810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x238814: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x238814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x238818: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x238818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x23881c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x23881cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x238820: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x238820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x238824: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x238824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x238828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23882c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23882cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x238830: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x238830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x238834: 0x2442e010  addiu       $v0, $v0, -0x1FF0
    ctx->pc = 0x238834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959120));
    // 0x238838: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x238838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x23883c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x23883cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x238840: 0x2442f1b0  addiu       $v0, $v0, -0xE50
    ctx->pc = 0x238840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963632));
    // 0x238844: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x238844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x238848: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x238848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x23884c: 0x2442f1c0  addiu       $v0, $v0, -0xE40
    ctx->pc = 0x23884cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963648));
    // 0x238850: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x238850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x238854: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x238854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238858: 0x3e00008  jr          $ra
    ctx->pc = 0x238858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23885Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238858u;
            // 0x23885c: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238860u;
label_238860:
    // 0x238860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238868: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x238868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x23886c: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x23886cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x238870: 0x8c66006c  lw          $a2, 0x6C($v1)
    ctx->pc = 0x238870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x238874: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x238874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x238878: 0x81040005  lb          $a0, 0x5($t0)
    ctx->pc = 0x238878u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x23887c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x23887cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x238880: 0x80a30005  lb          $v1, 0x5($a1)
    ctx->pc = 0x238880u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x238884: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x238884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x238888: 0x9489001a  lhu         $t1, 0x1A($a0)
    ctx->pc = 0x238888u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x23888c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23888cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x238890: 0x94a8001a  lhu         $t0, 0x1A($a1)
    ctx->pc = 0x238890u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x238894: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x238894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x238898: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x238898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x23889c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23889cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2388a0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2388a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2388a4: 0x806319f0  lb          $v1, 0x19F0($v1)
    ctx->pc = 0x2388a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 6640)));
    // 0x2388a8: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2388A8u;
    {
        const bool branch_taken_0x2388a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2388a8) {
            ctx->pc = 0x2388ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2388A8u;
            // 0x2388ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2388D0u;
            goto label_2388d0;
        }
    }
    ctx->pc = 0x2388B0u;
    // 0x2388b0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2388b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2388b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2388b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2388b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2388b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2388bc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2388bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2388c0: 0x90421a60  lbu         $v0, 0x1A60($v0)
    ctx->pc = 0x2388c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6752)));
    // 0x2388c4: 0xc08e258  jal         func_238960
    ctx->pc = 0x2388C4u;
    SET_GPR_U32(ctx, 31, 0x2388CCu);
    ctx->pc = 0x2388C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2388C4u;
            // 0x2388c8: 0xa0c20010  sb          $v0, 0x10($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238960u;
    if (runtime->hasFunction(0x238960u)) {
        auto targetFn = runtime->lookupFunction(0x238960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2388CCu; }
        if (ctx->pc != 0x2388CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238960_0x238960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2388CCu; }
        if (ctx->pc != 0x2388CCu) { return; }
    }
    ctx->pc = 0x2388CCu;
label_2388cc:
    // 0x2388cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2388ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2388d0:
    // 0x2388d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2388D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2388D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2388D0u;
            // 0x2388d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2388D8u;
    // 0x2388d8: 0x0  nop
    ctx->pc = 0x2388d8u;
    // NOP
    // 0x2388dc: 0x0  nop
    ctx->pc = 0x2388dcu;
    // NOP
label_2388e0:
    // 0x2388e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2388e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2388e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2388e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2388e8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2388e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2388ec: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x2388ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2388f0: 0x80830005  lb          $v1, 0x5($a0)
    ctx->pc = 0x2388f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x2388f4: 0x80a20005  lb          $v0, 0x5($a1)
    ctx->pc = 0x2388f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x2388f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2388f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2388fc: 0xc0928b8  jal         func_24A2E0
    ctx->pc = 0x2388FCu;
    SET_GPR_U32(ctx, 31, 0x238904u);
    ctx->pc = 0x238900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2388FCu;
            // 0x238900: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A2E0u;
    if (runtime->hasFunction(0x24A2E0u)) {
        auto targetFn = runtime->lookupFunction(0x24A2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238904u; }
        if (ctx->pc != 0x238904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A2E0_0x24a2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238904u; }
        if (ctx->pc != 0x238904u) { return; }
    }
    ctx->pc = 0x238904u;
label_238904:
    // 0x238904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x238904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238908: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x238908u;
    {
        const bool branch_taken_0x238908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x238908) {
            ctx->pc = 0x23890Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238908u;
            // 0x23890c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23891Cu;
            goto label_23891c;
        }
    }
    ctx->pc = 0x238910u;
    // 0x238910: 0xc08e2b0  jal         func_238AC0
    ctx->pc = 0x238910u;
    SET_GPR_U32(ctx, 31, 0x238918u);
    ctx->pc = 0x238AC0u;
    if (runtime->hasFunction(0x238AC0u)) {
        auto targetFn = runtime->lookupFunction(0x238AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238918u; }
        if (ctx->pc != 0x238918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238AC0_0x238ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238918u; }
        if (ctx->pc != 0x238918u) { return; }
    }
    ctx->pc = 0x238918u;
label_238918:
    // 0x238918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23891c:
    // 0x23891c: 0x3e00008  jr          $ra
    ctx->pc = 0x23891Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23891Cu;
            // 0x238920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238924u;
    // 0x238924: 0x0  nop
    ctx->pc = 0x238924u;
    // NOP
    // 0x238928: 0x0  nop
    ctx->pc = 0x238928u;
    // NOP
    // 0x23892c: 0x0  nop
    ctx->pc = 0x23892cu;
    // NOP
    // 0x238930: 0x808e238  j           func_2388E0
    ctx->pc = 0x238930u;
    ctx->pc = 0x238934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238930u;
            // 0x238934: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2388E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2388e0;
    ctx->pc = 0x238938u;
    // 0x238938: 0x0  nop
    ctx->pc = 0x238938u;
    // NOP
    // 0x23893c: 0x0  nop
    ctx->pc = 0x23893cu;
    // NOP
    // 0x238940: 0x808e218  j           func_238860
    ctx->pc = 0x238940u;
    ctx->pc = 0x238944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238940u;
            // 0x238944: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_238860;
    ctx->pc = 0x238948u;
    // 0x238948: 0x0  nop
    ctx->pc = 0x238948u;
    // NOP
    // 0x23894c: 0x0  nop
    ctx->pc = 0x23894cu;
    // NOP
    // 0x238950: 0x808bc90  j           func_22F240
    ctx->pc = 0x238950u;
    ctx->pc = 0x238954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238950u;
            // 0x238954: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F240u;
    {
        auto targetFn = runtime->lookupFunction(0x22F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x238958u;
    // 0x238958: 0x0  nop
    ctx->pc = 0x238958u;
    // NOP
    // 0x23895c: 0x0  nop
    ctx->pc = 0x23895cu;
    // NOP
}
