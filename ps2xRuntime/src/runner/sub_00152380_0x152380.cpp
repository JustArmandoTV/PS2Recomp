#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00152380
// Address: 0x152380 - 0x152610
void sub_00152380_0x152380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152380_0x152380");
#endif

    switch (ctx->pc) {
        case 0x152480u: goto label_152480;
        case 0x152490u: goto label_152490;
        case 0x1525d4u: goto label_1525d4;
        case 0x1525e4u: goto label_1525e4;
        case 0x1525f4u: goto label_1525f4;
        case 0x152604u: goto label_152604;
        default: break;
    }

    ctx->pc = 0x152380u;

    // 0x152380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152384: 0x3c030180  lui         $v1, 0x180
    ctx->pc = 0x152384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)384 << 16));
    // 0x152388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15238c: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x15238cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x152390: 0x8ca8001c  lw          $t0, 0x1C($a1)
    ctx->pc = 0x152390u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x152394: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x152394u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x152398: 0x14e3003f  bne         $a3, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x152398u;
    {
        const bool branch_taken_0x152398 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x15239Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152398u;
            // 0x15239c: 0x8ca90024  lw          $t1, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152398) {
            ctx->pc = 0x152498u;
            goto label_152498;
        }
    }
    ctx->pc = 0x1523A0u;
    // 0x1523a0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1523a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1523a4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1523a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1523a8: 0x50e30010  beql        $a3, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1523A8u;
    {
        const bool branch_taken_0x1523a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1523a8) {
            ctx->pc = 0x1523ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1523A8u;
            // 0x1523ac: 0x84a6000a  lh          $a2, 0xA($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1523ECu;
            goto label_1523ec;
        }
    }
    ctx->pc = 0x1523B0u;
    // 0x1523b0: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1523b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1523b4: 0x50e30003  beql        $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1523B4u;
    {
        const bool branch_taken_0x1523b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1523b4) {
            ctx->pc = 0x1523B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1523B4u;
            // 0x1523b8: 0x84a3000a  lh          $v1, 0xA($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1523C4u;
            goto label_1523c4;
        }
    }
    ctx->pc = 0x1523BCu;
    // 0x1523bc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1523BCu;
    {
        const bool branch_taken_0x1523bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1523C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1523BCu;
            // 0x1523c0: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1523bc) {
            ctx->pc = 0x15243Cu;
            goto label_15243c;
        }
    }
    ctx->pc = 0x1523C4u;
label_1523c4:
    // 0x1523c4: 0x5c600090  bgtzl       $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x1523C4u;
    {
        const bool branch_taken_0x1523c4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1523c4) {
            ctx->pc = 0x1523C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1523C4u;
            // 0x1523c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152608u;
            goto label_152608;
        }
    }
    ctx->pc = 0x1523CCu;
    // 0x1523cc: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x1523ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1523d0: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1523d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1523d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1523d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1523d8: 0x8ce40050  lw          $a0, 0x50($a3)
    ctx->pc = 0x1523d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x1523dc: 0x24e60058  addiu       $a2, $a3, 0x58
    ctx->pc = 0x1523dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 88));
    // 0x1523e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1523e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1523e4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1523E4u;
    {
        const bool branch_taken_0x1523e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1523E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1523E4u;
            // 0x1523e8: 0xace30050  sw          $v1, 0x50($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1523e4) {
            ctx->pc = 0x152438u;
            goto label_152438;
        }
    }
    ctx->pc = 0x1523ECu;
label_1523ec:
    // 0x1523ec: 0x28c10002  slti        $at, $a2, 0x2
    ctx->pc = 0x1523ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1523f0: 0x10200084  beqz        $at, . + 4 + (0x84 << 2)
    ctx->pc = 0x1523F0u;
    {
        const bool branch_taken_0x1523f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1523f0) {
            ctx->pc = 0x152604u;
            goto label_152604;
        }
    }
    ctx->pc = 0x1523F8u;
    // 0x1523f8: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x1523f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1523fc: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1523fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x152400: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x152400u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x152404: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x152404u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x152408: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x152408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x15240c: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x15240cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x152410: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x152410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x152414: 0x8cc40050  lw          $a0, 0x50($a2)
    ctx->pc = 0x152414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x152418: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x152418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15241c: 0xacc30050  sw          $v1, 0x50($a2)
    ctx->pc = 0x15241cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 3));
    // 0x152420: 0x84a4000a  lh          $a0, 0xA($a1)
    ctx->pc = 0x152420u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x152424: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x152424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x152428: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x152428u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15242c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15242cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x152430: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x152430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x152434: 0x24660058  addiu       $a2, $v1, 0x58
    ctx->pc = 0x152434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_152438:
    // 0x152438: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x152438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_15243c:
    // 0x15243c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x15243cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x152440: 0x30840e77  andi        $a0, $a0, 0xE77
    ctx->pc = 0x152440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3703);
    // 0x152444: 0x1083006f  beq         $a0, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x152444u;
    {
        const bool branch_taken_0x152444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x152444) {
            ctx->pc = 0x152604u;
            goto label_152604;
        }
    }
    ctx->pc = 0x15244Cu;
    // 0x15244c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15244cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152450: 0x1083006c  beq         $a0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x152450u;
    {
        const bool branch_taken_0x152450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x152450) {
            ctx->pc = 0x152604u;
            goto label_152604;
        }
    }
    ctx->pc = 0x152458u;
    // 0x152458: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x152458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15245c: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15245Cu;
    {
        const bool branch_taken_0x15245c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15245c) {
            ctx->pc = 0x152460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15245Cu;
            // 0x152460: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152488u;
            goto label_152488;
        }
    }
    ctx->pc = 0x152464u;
    // 0x152464: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x152464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x152468: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x152468u;
    {
        const bool branch_taken_0x152468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x152468) {
            ctx->pc = 0x15246Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152468u;
            // 0x15246c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152478u;
            goto label_152478;
        }
    }
    ctx->pc = 0x152470u;
    // 0x152470: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x152470u;
    {
        const bool branch_taken_0x152470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152470) {
            ctx->pc = 0x152604u;
            goto label_152604;
        }
    }
    ctx->pc = 0x152478u;
label_152478:
    // 0x152478: 0xc04e170  jal         func_1385C0
    ctx->pc = 0x152478u;
    SET_GPR_U32(ctx, 31, 0x152480u);
    ctx->pc = 0x15247Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152478u;
            // 0x15247c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1385C0u;
    if (runtime->hasFunction(0x1385C0u)) {
        auto targetFn = runtime->lookupFunction(0x1385C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152480u; }
        if (ctx->pc != 0x152480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001385C0_0x1385c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152480u; }
        if (ctx->pc != 0x152480u) { return; }
    }
    ctx->pc = 0x152480u;
label_152480:
    // 0x152480: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x152480u;
    {
        const bool branch_taken_0x152480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152480) {
            ctx->pc = 0x152604u;
            goto label_152604;
        }
    }
    ctx->pc = 0x152488u;
label_152488:
    // 0x152488: 0xc04e150  jal         func_138540
    ctx->pc = 0x152488u;
    SET_GPR_U32(ctx, 31, 0x152490u);
    ctx->pc = 0x15248Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152488u;
            // 0x15248c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138540u;
    if (runtime->hasFunction(0x138540u)) {
        auto targetFn = runtime->lookupFunction(0x138540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152490u; }
        if (ctx->pc != 0x152490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138540_0x138540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152490u; }
        if (ctx->pc != 0x152490u) { return; }
    }
    ctx->pc = 0x152490u;
label_152490:
    // 0x152490: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x152490u;
    {
        const bool branch_taken_0x152490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152490) {
            ctx->pc = 0x152604u;
            goto label_152604;
        }
    }
    ctx->pc = 0x152498u;
label_152498:
    // 0x152498: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x152498u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15249c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x15249cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1524a0: 0x51430017  beql        $t2, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1524A0u;
    {
        const bool branch_taken_0x1524a0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 3));
        if (branch_taken_0x1524a0) {
            ctx->pc = 0x1524A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1524A0u;
            // 0x1524a4: 0x84aa000a  lh          $t2, 0xA($a1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152500u;
            goto label_152500;
        }
    }
    ctx->pc = 0x1524A8u;
    // 0x1524a8: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1524a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1524ac: 0x51430003  beql        $t2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1524ACu;
    {
        const bool branch_taken_0x1524ac = (GPR_U64(ctx, 10) == GPR_U64(ctx, 3));
        if (branch_taken_0x1524ac) {
            ctx->pc = 0x1524B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1524ACu;
            // 0x1524b0: 0x84a3000a  lh          $v1, 0xA($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1524BCu;
            goto label_1524bc;
        }
    }
    ctx->pc = 0x1524B4u;
    // 0x1524b4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1524B4u;
    {
        const bool branch_taken_0x1524b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1524B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1524B4u;
            // 0x1524b8: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524b4) {
            ctx->pc = 0x152584u;
            goto label_152584;
        }
    }
    ctx->pc = 0x1524BCu;
label_1524bc:
    // 0x1524bc: 0x1c600051  bgtz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1524BCu;
    {
        const bool branch_taken_0x1524bc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1524bc) {
            ctx->pc = 0x152604u;
            goto label_152604;
        }
    }
    ctx->pc = 0x1524C4u;
    // 0x1524c4: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x1524c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1524c8: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1524c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1524cc: 0x8d6a0050  lw          $t2, 0x50($t3)
    ctx->pc = 0x1524ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x1524d0: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1524d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1524d4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1524d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1524d8: 0x1442024  and         $a0, $t2, $a0
    ctx->pc = 0x1524d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x1524dc: 0x10e30006  beq         $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1524DCu;
    {
        const bool branch_taken_0x1524dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1524E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1524DCu;
            // 0x1524e0: 0xad640050  sw          $a0, 0x50($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524dc) {
            ctx->pc = 0x1524F8u;
            goto label_1524f8;
        }
    }
    ctx->pc = 0x1524E4u;
    // 0x1524e4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1524e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1524e8: 0x50e30025  beql        $a3, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1524E8u;
    {
        const bool branch_taken_0x1524e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1524e8) {
            ctx->pc = 0x1524ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1524E8u;
            // 0x1524ec: 0x25660058  addiu       $a2, $t3, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 88));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152580u;
            goto label_152580;
        }
    }
    ctx->pc = 0x1524F0u;
    // 0x1524f0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1524F0u;
    {
        const bool branch_taken_0x1524f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1524f0) {
            ctx->pc = 0x152580u;
            goto label_152580;
        }
    }
    ctx->pc = 0x1524F8u;
label_1524f8:
    // 0x1524f8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1524F8u;
    {
        const bool branch_taken_0x1524f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1524FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1524F8u;
            // 0x1524fc: 0x2566005c  addiu       $a2, $t3, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524f8) {
            ctx->pc = 0x152580u;
            goto label_152580;
        }
    }
    ctx->pc = 0x152500u;
label_152500:
    // 0x152500: 0x29410002  slti        $at, $t2, 0x2
    ctx->pc = 0x152500u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x152504: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x152504u;
    {
        const bool branch_taken_0x152504 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x152504) {
            ctx->pc = 0x152604u;
            goto label_152604;
        }
    }
    ctx->pc = 0x15250Cu;
    // 0x15250c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x15250cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x152510: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x152510u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x152514: 0x8a5023  subu        $t2, $a0, $t2
    ctx->pc = 0x152514u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x152518: 0xa5900  sll         $t3, $t2, 4
    ctx->pc = 0x152518u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x15251c: 0x3c04dfff  lui         $a0, 0xDFFF
    ctx->pc = 0x15251cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57343 << 16));
    // 0x152520: 0x1636021  addu        $t4, $t3, $v1
    ctx->pc = 0x152520u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x152524: 0x348affff  ori         $t2, $a0, 0xFFFF
    ctx->pc = 0x152524u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x152528: 0x8d8b0050  lw          $t3, 0x50($t4)
    ctx->pc = 0x152528u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x15252c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x15252cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x152530: 0x16a5024  and         $t2, $t3, $t2
    ctx->pc = 0x152530u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x152534: 0x10e4000c  beq         $a3, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x152534u;
    {
        const bool branch_taken_0x152534 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x152538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152534u;
            // 0x152538: 0xad8a0050  sw          $t2, 0x50($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 80), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152534) {
            ctx->pc = 0x152568u;
            goto label_152568;
        }
    }
    ctx->pc = 0x15253Cu;
    // 0x15253c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x15253cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x152540: 0x50e40003  beql        $a3, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152540u;
    {
        const bool branch_taken_0x152540 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x152540) {
            ctx->pc = 0x152544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152540u;
            // 0x152544: 0x84a6000a  lh          $a2, 0xA($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152550u;
            goto label_152550;
        }
    }
    ctx->pc = 0x152548u;
    // 0x152548: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x152548u;
    {
        const bool branch_taken_0x152548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152548) {
            ctx->pc = 0x152580u;
            goto label_152580;
        }
    }
    ctx->pc = 0x152550u;
label_152550:
    // 0x152550: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x152550u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x152554: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x152554u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x152558: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x152558u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15255c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15255cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x152560: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152560u;
    {
        const bool branch_taken_0x152560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152560u;
            // 0x152564: 0x24660058  addiu       $a2, $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152560) {
            ctx->pc = 0x152580u;
            goto label_152580;
        }
    }
    ctx->pc = 0x152568u;
label_152568:
    // 0x152568: 0x84a6000a  lh          $a2, 0xA($a1)
    ctx->pc = 0x152568u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x15256c: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x15256cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x152570: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x152570u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x152574: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x152574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x152578: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x152578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15257c: 0x2466005c  addiu       $a2, $v1, 0x5C
    ctx->pc = 0x15257cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
label_152580:
    // 0x152580: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x152580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_152584:
    // 0x152584: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x152584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x152588: 0x30840e77  andi        $a0, $a0, 0xE77
    ctx->pc = 0x152588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3703);
    // 0x15258c: 0x5083001b  beql        $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x15258Cu;
    {
        const bool branch_taken_0x15258c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15258c) {
            ctx->pc = 0x152590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15258Cu;
            // 0x152590: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1525FCu;
            goto label_1525fc;
        }
    }
    ctx->pc = 0x152594u;
    // 0x152594: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x152594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x152598: 0x50830014  beql        $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x152598u;
    {
        const bool branch_taken_0x152598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x152598) {
            ctx->pc = 0x15259Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152598u;
            // 0x15259c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1525ECu;
            goto label_1525ec;
        }
    }
    ctx->pc = 0x1525A0u;
    // 0x1525a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1525a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1525a4: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1525A4u;
    {
        const bool branch_taken_0x1525a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1525a4) {
            ctx->pc = 0x1525A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1525A4u;
            // 0x1525a8: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1525DCu;
            goto label_1525dc;
        }
    }
    ctx->pc = 0x1525ACu;
    // 0x1525ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1525acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1525b0: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1525B0u;
    {
        const bool branch_taken_0x1525b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1525b0) {
            ctx->pc = 0x1525B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1525B0u;
            // 0x1525b4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1525CCu;
            goto label_1525cc;
        }
    }
    ctx->pc = 0x1525B8u;
    // 0x1525b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1525b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1525bc: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1525BCu;
    {
        const bool branch_taken_0x1525bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1525bc) {
            ctx->pc = 0x152604u;
            goto label_152604;
        }
    }
    ctx->pc = 0x1525C4u;
    // 0x1525c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1525C4u;
    {
        const bool branch_taken_0x1525c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525c4) {
            ctx->pc = 0x152604u;
            goto label_152604;
        }
    }
    ctx->pc = 0x1525CCu;
label_1525cc:
    // 0x1525cc: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x1525CCu;
    SET_GPR_U32(ctx, 31, 0x1525D4u);
    ctx->pc = 0x1525D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1525CCu;
            // 0x1525d0: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1525D4u; }
        if (ctx->pc != 0x1525D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1525D4u; }
        if (ctx->pc != 0x1525D4u) { return; }
    }
    ctx->pc = 0x1525D4u;
label_1525d4:
    // 0x1525d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1525D4u;
    {
        const bool branch_taken_0x1525d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525d4) {
            ctx->pc = 0x152604u;
            goto label_152604;
        }
    }
    ctx->pc = 0x1525DCu;
label_1525dc:
    // 0x1525dc: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x1525DCu;
    SET_GPR_U32(ctx, 31, 0x1525E4u);
    ctx->pc = 0x1525E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1525DCu;
            // 0x1525e0: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1525E4u; }
        if (ctx->pc != 0x1525E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1525E4u; }
        if (ctx->pc != 0x1525E4u) { return; }
    }
    ctx->pc = 0x1525E4u;
label_1525e4:
    // 0x1525e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1525E4u;
    {
        const bool branch_taken_0x1525e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525e4) {
            ctx->pc = 0x152604u;
            goto label_152604;
        }
    }
    ctx->pc = 0x1525ECu;
label_1525ec:
    // 0x1525ec: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x1525ECu;
    SET_GPR_U32(ctx, 31, 0x1525F4u);
    ctx->pc = 0x1525F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1525ECu;
            // 0x1525f0: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1525F4u; }
        if (ctx->pc != 0x1525F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1525F4u; }
        if (ctx->pc != 0x1525F4u) { return; }
    }
    ctx->pc = 0x1525F4u;
label_1525f4:
    // 0x1525f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1525F4u;
    {
        const bool branch_taken_0x1525f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525f4) {
            ctx->pc = 0x152604u;
            goto label_152604;
        }
    }
    ctx->pc = 0x1525FCu;
label_1525fc:
    // 0x1525fc: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x1525FCu;
    SET_GPR_U32(ctx, 31, 0x152604u);
    ctx->pc = 0x152600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1525FCu;
            // 0x152600: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152604u; }
        if (ctx->pc != 0x152604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152604u; }
        if (ctx->pc != 0x152604u) { return; }
    }
    ctx->pc = 0x152604u;
label_152604:
    // 0x152604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_152608:
    // 0x152608: 0x3e00008  jr          $ra
    ctx->pc = 0x152608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152608u;
            // 0x15260c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152610u;
}
