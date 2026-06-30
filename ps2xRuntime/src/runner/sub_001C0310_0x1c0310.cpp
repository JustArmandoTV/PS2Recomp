#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0310
// Address: 0x1c0310 - 0x1c0468
void sub_001C0310_0x1c0310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0310_0x1c0310");
#endif

    switch (ctx->pc) {
        case 0x1c0330u: goto label_1c0330;
        case 0x1c0384u: goto label_1c0384;
        case 0x1c03a0u: goto label_1c03a0;
        case 0x1c03b8u: goto label_1c03b8;
        default: break;
    }

    ctx->pc = 0x1c0310u;

    // 0x1c0310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c0310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c0314: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1c0314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1c0318: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c0318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c031c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c031cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0320: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c0320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0324: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c0324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c0328: 0xc05e086  jal         func_178218
    ctx->pc = 0x1C0328u;
    SET_GPR_U32(ctx, 31, 0x1C0330u);
    ctx->pc = 0x1C032Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0328u;
            // 0x1c032c: 0x2444b820  addiu       $a0, $v0, -0x47E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178218u;
    if (runtime->hasFunction(0x178218u)) {
        auto targetFn = runtime->lookupFunction(0x178218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0330u; }
        if (ctx->pc != 0x1C0330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178218_0x178218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0330u; }
        if (ctx->pc != 0x1C0330u) { return; }
    }
    ctx->pc = 0x1C0330u;
label_1c0330:
    // 0x1c0330: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c0330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c0334: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1c0334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0338: 0x2484a4c0  addiu       $a0, $a0, -0x5B40
    ctx->pc = 0x1c0338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943936));
    // 0x1c033c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c033cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c0340: 0xa2800a  movz        $s0, $a1, $v0
    ctx->pc = 0x1c0340u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x1c0344: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c0344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c0348: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1c0348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1c034c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c034cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c0350: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1c0350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c0354: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0354u;
    {
        const bool branch_taken_0x1c0354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0354u;
            // 0x1c0358: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0354) {
            ctx->pc = 0x1C0370u;
            goto label_1c0370;
        }
    }
    ctx->pc = 0x1C035Cu;
    // 0x1c035c: 0x8c62a4c4  lw          $v0, -0x5B3C($v1)
    ctx->pc = 0x1c035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943940)));
    // 0x1c0360: 0x1050003c  beq         $v0, $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C0360u;
    {
        const bool branch_taken_0x1c0360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1C0364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0360u;
            // 0x1c0364: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0360) {
            ctx->pc = 0x1C0454u;
            goto label_1c0454;
        }
    }
    ctx->pc = 0x1C0368u;
    // 0x1c0368: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0368u;
    {
        const bool branch_taken_0x1c0368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0368) {
            ctx->pc = 0x1C0374u;
            goto label_1c0374;
        }
    }
    ctx->pc = 0x1C0370u;
label_1c0370:
    // 0x1c0370: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c0370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c0374:
    // 0x1c0374: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0374u;
    {
        const bool branch_taken_0x1c0374 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0374) {
            ctx->pc = 0x1C0390u;
            goto label_1c0390;
        }
    }
    ctx->pc = 0x1C037Cu;
    // 0x1c037c: 0xc0701e2  jal         func_1C0788
    ctx->pc = 0x1C037Cu;
    SET_GPR_U32(ctx, 31, 0x1C0384u);
    ctx->pc = 0x1C0380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C037Cu;
            // 0x1c0380: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0788u;
    if (runtime->hasFunction(0x1C0788u)) {
        auto targetFn = runtime->lookupFunction(0x1C0788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0384u; }
        if (ctx->pc != 0x1C0384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0788_0x1c0788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0384u; }
        if (ctx->pc != 0x1C0384u) { return; }
    }
    ctx->pc = 0x1C0384u;
label_1c0384:
    // 0x1c0384: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1C0384u;
    {
        const bool branch_taken_0x1c0384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0384u;
            // 0x1c0388: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0384) {
            ctx->pc = 0x1C0458u;
            goto label_1c0458;
        }
    }
    ctx->pc = 0x1C038Cu;
    // 0x1c038c: 0x0  nop
    ctx->pc = 0x1c038cu;
    // NOP
label_1c0390:
    // 0x1c0390: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c0390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c0394: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c0394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0398: 0xc05e086  jal         func_178218
    ctx->pc = 0x1C0398u;
    SET_GPR_U32(ctx, 31, 0x1C03A0u);
    ctx->pc = 0x1C039Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0398u;
            // 0x1c039c: 0x2484b828  addiu       $a0, $a0, -0x47D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178218u;
    if (runtime->hasFunction(0x178218u)) {
        auto targetFn = runtime->lookupFunction(0x178218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C03A0u; }
        if (ctx->pc != 0x1C03A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178218_0x178218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C03A0u; }
        if (ctx->pc != 0x1C03A0u) { return; }
    }
    ctx->pc = 0x1C03A0u;
label_1c03a0:
    // 0x1c03a0: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x1c03a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x1c03a4: 0x3484ca00  ori         $a0, $a0, 0xCA00
    ctx->pc = 0x1c03a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51712);
    // 0x1c03a8: 0x9fa30000  lwu         $v1, 0x0($sp)
    ctx->pc = 0x1c03a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c03ac: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c03acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c03b0: 0xc0701e2  jal         func_1C0788
    ctx->pc = 0x1C03B0u;
    SET_GPR_U32(ctx, 31, 0x1C03B8u);
    ctx->pc = 0x1C03B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C03B0u;
            // 0x1c03b4: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0788u;
    if (runtime->hasFunction(0x1C0788u)) {
        auto targetFn = runtime->lookupFunction(0x1C0788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C03B8u; }
        if (ctx->pc != 0x1C03B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0788_0x1c0788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C03B8u; }
        if (ctx->pc != 0x1C03B8u) { return; }
    }
    ctx->pc = 0x1C03B8u;
label_1c03b8:
    // 0x1c03b8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c03b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c03bc: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x1c03bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c03c0: 0x24070082  addiu       $a3, $zero, 0x82
    ctx->pc = 0x1c03c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x1c03c4: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c03c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c03c8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1c03c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1c03cc: 0x8cc6b800  lw          $a2, -0x4800($a2)
    ctx->pc = 0x1c03ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948864)));
    // 0x1c03d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1c03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c03d4: 0x304300c7  andi        $v1, $v0, 0xC7
    ctx->pc = 0x1c03d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)199);
    // 0x1c03d8: 0x10670009  beq         $v1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C03D8u;
    {
        const bool branch_taken_0x1c03d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1C03DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C03D8u;
            // 0x1c03dc: 0xac82a4c8  sw          $v0, -0x5B38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294943944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03d8) {
            ctx->pc = 0x1C0400u;
            goto label_1c0400;
        }
    }
    ctx->pc = 0x1C03E0u;
    // 0x1c03e0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1c03e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1c03e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c03e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c03e8: 0x8c42b810  lw          $v0, -0x47F0($v0)
    ctx->pc = 0x1c03e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948880)));
    // 0x1c03ec: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1c03ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1c03f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1c03f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1c03f4: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1c03f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1c03f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C03F8u;
    {
        const bool branch_taken_0x1c03f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C03FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C03F8u;
            // 0x1c03fc: 0x2462b810  addiu       $v0, $v1, -0x47F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03f8) {
            ctx->pc = 0x1C0408u;
            goto label_1c0408;
        }
    }
    ctx->pc = 0x1C0400u;
label_1c0400:
    // 0x1c0400: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1c0400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1c0404: 0x2462b810  addiu       $v0, $v1, -0x47F0
    ctx->pc = 0x1c0404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948880));
label_1c0408:
    // 0x1c0408: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1c0408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1c040c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1c040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c0410: 0x3c05006e  lui         $a1, 0x6E
    ctx->pc = 0x1c0410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)110 << 16));
    // 0x1c0414: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c0414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c0418: 0x24841eb8  addiu       $a0, $a0, 0x1EB8
    ctx->pc = 0x1c0418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7864));
    // 0x1c041c: 0x24a51ec8  addiu       $a1, $a1, 0x1EC8
    ctx->pc = 0x1c041cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7880));
    // 0x1c0420: 0x3c07006e  lui         $a3, 0x6E
    ctx->pc = 0x1c0420u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)110 << 16));
    // 0x1c0424: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c0424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c0428: 0x3c06006e  lui         $a2, 0x6E
    ctx->pc = 0x1c0428u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)110 << 16));
    // 0x1c042c: 0x24e71ed8  addiu       $a3, $a3, 0x1ED8
    ctx->pc = 0x1c042cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7896));
    // 0x1c0430: 0x24c61edc  addiu       $a2, $a2, 0x1EDC
    ctx->pc = 0x1c0430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7900));
    // 0x1c0434: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x1c0434u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c0438: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x1c0438u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x1c043c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1c043cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c0440: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1c0440u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x1c0444: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x1c0444u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c0448: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x1c0448u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x1c044c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1c044cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1c0450: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1c0450u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1c0454:
    // 0x1c0454: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c0454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0458:
    // 0x1c0458: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c0458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c045c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C045Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C045Cu;
            // 0x1c0460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0464u;
    // 0x1c0464: 0x0  nop
    ctx->pc = 0x1c0464u;
    // NOP
}
