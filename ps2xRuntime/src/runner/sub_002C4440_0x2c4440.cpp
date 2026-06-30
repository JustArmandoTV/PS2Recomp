#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C4440
// Address: 0x2c4440 - 0x2c45e0
void sub_002C4440_0x2c4440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4440_0x2c4440");
#endif

    switch (ctx->pc) {
        case 0x2c4470u: goto label_2c4470;
        case 0x2c44c4u: goto label_2c44c4;
        case 0x2c4548u: goto label_2c4548;
        case 0x2c4568u: goto label_2c4568;
        case 0x2c457cu: goto label_2c457c;
        case 0x2c4588u: goto label_2c4588;
        case 0x2c458cu: goto label_2c458c;
        case 0x2c45b0u: goto label_2c45b0;
        default: break;
    }

    ctx->pc = 0x2c4440u;

    // 0x2c4440: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c4440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c4444: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c4444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c4448: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c4448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c444c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c444cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c4450: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c4450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c4454: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c4454u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c445c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c445cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c4460: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c4460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4464: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c4464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4468: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2C4468u;
    SET_GPR_U32(ctx, 31, 0x2C4470u);
    ctx->pc = 0x2C446Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4468u;
            // 0x2c446c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4470u; }
        if (ctx->pc != 0x2C4470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4470u; }
        if (ctx->pc != 0x2C4470u) { return; }
    }
    ctx->pc = 0x2C4470u;
label_2c4470:
    // 0x2c4470: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c4470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c4474: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c4474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c4478: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c4478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2c447c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2c4480: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c4480u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c4484: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c4484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2c4488: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c4488u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c448c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c448cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c4490: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c4490u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2c4494: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c4494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c4498: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c4498u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2c449c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c449cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c44a0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c44a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2c44a4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c44a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c44a8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2c44ac: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c44acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2c44b0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c44b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2c44b4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2c44b8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c44b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c44bc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2C44BCu;
    SET_GPR_U32(ctx, 31, 0x2C44C4u);
    ctx->pc = 0x2C44C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C44BCu;
            // 0x2c44c0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C44C4u; }
        if (ctx->pc != 0x2C44C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C44C4u; }
        if (ctx->pc != 0x2C44C4u) { return; }
    }
    ctx->pc = 0x2C44C4u;
label_2c44c4:
    // 0x2c44c4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c44c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c44c8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2c44cc: 0x24631060  addiu       $v1, $v1, 0x1060
    ctx->pc = 0x2c44ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4192));
    // 0x2c44d0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2c44d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2c44d4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c44d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2c44d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c44dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c44dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c44e0: 0xac440db0  sw          $a0, 0xDB0($v0)
    ctx->pc = 0x2c44e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3504), GPR_U32(ctx, 4));
    // 0x2c44e4: 0x24631070  addiu       $v1, $v1, 0x1070
    ctx->pc = 0x2c44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4208));
    // 0x2c44e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c44ec: 0x244210a8  addiu       $v0, $v0, 0x10A8
    ctx->pc = 0x2c44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4264));
    // 0x2c44f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c44f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c44f4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c44f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2c44f8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c44f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2c44fc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c44fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2c4500: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c4500u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2c4504: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c4504u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2c4508: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c4508u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2c450c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c450cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2c4510: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c4510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2c4514: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c4514u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2c4518: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c4518u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2c451c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c451cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2c4520: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x2c4520u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x2c4524: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x2c4524u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x2c4528: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c4528u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c452c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C452Cu;
    {
        const bool branch_taken_0x2c452c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c452c) {
            ctx->pc = 0x2C45C0u;
            goto label_2c45c0;
        }
    }
    ctx->pc = 0x2C4534u;
    // 0x2c4534: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2c4534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2c4538: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c4538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c453c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c453cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2c4540: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2C4540u;
    SET_GPR_U32(ctx, 31, 0x2C4548u);
    ctx->pc = 0x2C4544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4540u;
            // 0x2c4544: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4548u; }
        if (ctx->pc != 0x2C4548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4548u; }
        if (ctx->pc != 0x2C4548u) { return; }
    }
    ctx->pc = 0x2C4548u;
label_2c4548:
    // 0x2c4548: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x2c4548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
    // 0x2c454c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c454cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c4550: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c4550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4554: 0x24a59080  addiu       $a1, $a1, -0x6F80
    ctx->pc = 0x2c4554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938752));
    // 0x2c4558: 0x24c641d0  addiu       $a2, $a2, 0x41D0
    ctx->pc = 0x2c4558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16848));
    // 0x2c455c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x2c455cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2c4560: 0xc040840  jal         func_102100
    ctx->pc = 0x2C4560u;
    SET_GPR_U32(ctx, 31, 0x2C4568u);
    ctx->pc = 0x2C4564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4560u;
            // 0x2c4564: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4568u; }
        if (ctx->pc != 0x2C4568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4568u; }
        if (ctx->pc != 0x2C4568u) { return; }
    }
    ctx->pc = 0x2C4568u;
label_2c4568:
    // 0x2c4568: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c4568u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2c456c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c456cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4570: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c4570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2c4574: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C4574u;
    SET_GPR_U32(ctx, 31, 0x2C457Cu);
    ctx->pc = 0x2C4578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4574u;
            // 0x2c4578: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C457Cu; }
        if (ctx->pc != 0x2C457Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C457Cu; }
        if (ctx->pc != 0x2C457Cu) { return; }
    }
    ctx->pc = 0x2C457Cu;
label_2c457c:
    // 0x2c457c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c4580: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C4580u;
    SET_GPR_U32(ctx, 31, 0x2C4588u);
    ctx->pc = 0x2C4584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4580u;
            // 0x2c4584: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4588u; }
        if (ctx->pc != 0x2C4588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4588u; }
        if (ctx->pc != 0x2C4588u) { return; }
    }
    ctx->pc = 0x2C4588u;
label_2c4588:
    // 0x2c4588: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c4588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c458c:
    // 0x2c458c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c458cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2c4590: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c4590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c4594: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c4594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2c4598: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c4598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c459c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2c45a0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c45a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2c45a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c45a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c45a8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2C45A8u;
    SET_GPR_U32(ctx, 31, 0x2C45B0u);
    ctx->pc = 0x2C45ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C45A8u;
            // 0x2c45ac: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C45B0u; }
        if (ctx->pc != 0x2C45B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C45B0u; }
        if (ctx->pc != 0x2C45B0u) { return; }
    }
    ctx->pc = 0x2C45B0u;
label_2c45b0:
    // 0x2c45b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c45b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c45b4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c45b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c45b8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C45B8u;
    {
        const bool branch_taken_0x2c45b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C45BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C45B8u;
            // 0x2c45bc: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c45b8) {
            ctx->pc = 0x2C458Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c458c;
        }
    }
    ctx->pc = 0x2C45C0u;
label_2c45c0:
    // 0x2c45c0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c45c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c45c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c45c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c45c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c45c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c45cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c45ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c45d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c45d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c45d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c45d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c45d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C45D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C45DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C45D8u;
            // 0x2c45dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C45E0u;
}
