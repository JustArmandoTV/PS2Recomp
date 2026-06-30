#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055D1C0
// Address: 0x55d1c0 - 0x55d430
void sub_0055D1C0_0x55d1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055D1C0_0x55d1c0");
#endif

    switch (ctx->pc) {
        case 0x55d1f0u: goto label_55d1f0;
        case 0x55d244u: goto label_55d244;
        case 0x55d2c8u: goto label_55d2c8;
        case 0x55d2e8u: goto label_55d2e8;
        case 0x55d2fcu: goto label_55d2fc;
        case 0x55d308u: goto label_55d308;
        case 0x55d30cu: goto label_55d30c;
        case 0x55d330u: goto label_55d330;
        case 0x55d3b0u: goto label_55d3b0;
        case 0x55d3b8u: goto label_55d3b8;
        default: break;
    }

    ctx->pc = 0x55d1c0u;

    // 0x55d1c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x55d1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x55d1c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x55d1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x55d1c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x55d1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x55d1cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x55d1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x55d1d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x55d1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x55d1d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x55d1d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55d1d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55d1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x55d1dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55d1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x55d1e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x55d1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55d1e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x55d1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55d1e8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x55D1E8u;
    SET_GPR_U32(ctx, 31, 0x55D1F0u);
    ctx->pc = 0x55D1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D1E8u;
            // 0x55d1ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D1F0u; }
        if (ctx->pc != 0x55D1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D1F0u; }
        if (ctx->pc != 0x55D1F0u) { return; }
    }
    ctx->pc = 0x55D1F0u;
label_55d1f0:
    // 0x55d1f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x55d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x55d1f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x55d1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x55d1f8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x55d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x55d1fc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x55d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x55d200: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x55d200u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x55d204: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x55d204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x55d208: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x55d208u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x55d20c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x55d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x55d210: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x55d210u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x55d214: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x55d214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x55d218: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x55d218u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x55d21c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x55d21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x55d220: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x55d220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x55d224: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x55d224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x55d228: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x55d228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x55d22c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x55d22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x55d230: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x55d230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x55d234: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x55d234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x55d238: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x55d238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x55d23c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x55D23Cu;
    SET_GPR_U32(ctx, 31, 0x55D244u);
    ctx->pc = 0x55D240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D23Cu;
            // 0x55d240: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D244u; }
        if (ctx->pc != 0x55D244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D244u; }
        if (ctx->pc != 0x55D244u) { return; }
    }
    ctx->pc = 0x55D244u;
label_55d244:
    // 0x55d244: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x55d244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x55d248: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x55d248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x55d24c: 0x24637c20  addiu       $v1, $v1, 0x7C20
    ctx->pc = 0x55d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31776));
    // 0x55d250: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x55d250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x55d254: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x55d254u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x55d258: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55d258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x55d25c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x55d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x55d260: 0xac44e3f8  sw          $a0, -0x1C08($v0)
    ctx->pc = 0x55d260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960120), GPR_U32(ctx, 4));
    // 0x55d264: 0x24637c30  addiu       $v1, $v1, 0x7C30
    ctx->pc = 0x55d264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31792));
    // 0x55d268: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x55d268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x55d26c: 0x24427c68  addiu       $v0, $v0, 0x7C68
    ctx->pc = 0x55d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31848));
    // 0x55d270: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x55d270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x55d274: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x55d274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x55d278: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x55d278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x55d27c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x55d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x55d280: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x55d280u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x55d284: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x55d284u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x55d288: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x55d288u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x55d28c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x55d28cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x55d290: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x55d290u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x55d294: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x55d294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x55d298: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x55d298u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x55d29c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x55d29cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x55d2a0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x55d2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x55d2a4: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x55D2A4u;
    {
        const bool branch_taken_0x55d2a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d2a4) {
            ctx->pc = 0x55D340u;
            goto label_55d340;
        }
    }
    ctx->pc = 0x55D2ACu;
    // 0x55d2ac: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x55d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x55d2b0: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x55d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x55d2b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x55d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x55d2b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x55d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x55d2bc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x55d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x55d2c0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x55D2C0u;
    SET_GPR_U32(ctx, 31, 0x55D2C8u);
    ctx->pc = 0x55D2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D2C0u;
            // 0x55d2c4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D2C8u; }
        if (ctx->pc != 0x55D2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D2C8u; }
        if (ctx->pc != 0x55D2C8u) { return; }
    }
    ctx->pc = 0x55D2C8u;
label_55d2c8:
    // 0x55d2c8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x55d2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x55d2cc: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x55d2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x55d2d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x55d2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55d2d4: 0x24a5d360  addiu       $a1, $a1, -0x2CA0
    ctx->pc = 0x55d2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955872));
    // 0x55d2d8: 0x24c6c470  addiu       $a2, $a2, -0x3B90
    ctx->pc = 0x55d2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952048));
    // 0x55d2dc: 0x240702a0  addiu       $a3, $zero, 0x2A0
    ctx->pc = 0x55d2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x55d2e0: 0xc040840  jal         func_102100
    ctx->pc = 0x55D2E0u;
    SET_GPR_U32(ctx, 31, 0x55D2E8u);
    ctx->pc = 0x55D2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D2E0u;
            // 0x55d2e4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D2E8u; }
        if (ctx->pc != 0x55D2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D2E8u; }
        if (ctx->pc != 0x55D2E8u) { return; }
    }
    ctx->pc = 0x55D2E8u;
label_55d2e8:
    // 0x55d2e8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x55d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x55d2ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x55d2ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55d2f0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x55d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x55d2f4: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x55D2F4u;
    SET_GPR_U32(ctx, 31, 0x55D2FCu);
    ctx->pc = 0x55D2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D2F4u;
            // 0x55d2f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D2FCu; }
        if (ctx->pc != 0x55D2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D2FCu; }
        if (ctx->pc != 0x55D2FCu) { return; }
    }
    ctx->pc = 0x55D2FCu;
label_55d2fc:
    // 0x55d2fc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x55d2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x55d300: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x55D300u;
    SET_GPR_U32(ctx, 31, 0x55D308u);
    ctx->pc = 0x55D304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D300u;
            // 0x55d304: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D308u; }
        if (ctx->pc != 0x55D308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D308u; }
        if (ctx->pc != 0x55D308u) { return; }
    }
    ctx->pc = 0x55D308u;
label_55d308:
    // 0x55d308: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x55d308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55d30c:
    // 0x55d30c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x55d30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x55d310: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x55d310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x55d314: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x55d314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x55d318: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x55d318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x55d31c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x55d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x55d320: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x55d320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x55d324: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x55d324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x55d328: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x55D328u;
    SET_GPR_U32(ctx, 31, 0x55D330u);
    ctx->pc = 0x55D32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D328u;
            // 0x55d32c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D330u; }
        if (ctx->pc != 0x55D330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D330u; }
        if (ctx->pc != 0x55D330u) { return; }
    }
    ctx->pc = 0x55D330u;
label_55d330:
    // 0x55d330: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x55d330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x55d334: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x55d334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x55d338: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x55D338u;
    {
        const bool branch_taken_0x55d338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x55D33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55D338u;
            // 0x55d33c: 0x265202a0  addiu       $s2, $s2, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55d338) {
            ctx->pc = 0x55D30Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55d30c;
        }
    }
    ctx->pc = 0x55D340u;
label_55d340:
    // 0x55d340: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x55d340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55d344: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x55d344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x55d348: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x55d348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x55d34c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x55d34cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x55d350: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x55d350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x55d354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55d354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x55d358: 0x3e00008  jr          $ra
    ctx->pc = 0x55D358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55D35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55D358u;
            // 0x55d35c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55D360u;
    // 0x55d360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x55d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x55d364: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x55d364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x55d368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x55d368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x55d36c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x55d36cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x55d370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55d370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x55d374: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x55d374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x55d378: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x55d378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x55d37c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x55d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x55d380: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x55d380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x55d384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x55d384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x55d388: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x55d388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x55d38c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x55d38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55d390: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x55d390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x55d394: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x55d394u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x55d398: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x55d398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x55d39c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x55d39cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x55d3a0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x55d3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x55d3a4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x55d3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x55d3a8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x55D3A8u;
    SET_GPR_U32(ctx, 31, 0x55D3B0u);
    ctx->pc = 0x55D3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D3A8u;
            // 0x55d3ac: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D3B0u; }
        if (ctx->pc != 0x55D3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D3B0u; }
        if (ctx->pc != 0x55D3B0u) { return; }
    }
    ctx->pc = 0x55D3B0u;
label_55d3b0:
    // 0x55d3b0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x55D3B0u;
    SET_GPR_U32(ctx, 31, 0x55D3B8u);
    ctx->pc = 0x55D3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D3B0u;
            // 0x55d3b4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D3B8u; }
        if (ctx->pc != 0x55D3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D3B8u; }
        if (ctx->pc != 0x55D3B8u) { return; }
    }
    ctx->pc = 0x55D3B8u;
label_55d3b8:
    // 0x55d3b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x55d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x55d3bc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x55d3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x55d3c0: 0x8c470e80  lw          $a3, 0xE80($v0)
    ctx->pc = 0x55d3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x55d3c4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x55d3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x55d3c8: 0x24c6c560  addiu       $a2, $a2, -0x3AA0
    ctx->pc = 0x55d3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952288));
    // 0x55d3cc: 0x24a57be0  addiu       $a1, $a1, 0x7BE0
    ctx->pc = 0x55d3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31712));
    // 0x55d3d0: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x55d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
    // 0x55d3d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x55d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x55d3d8: 0x8ce70788  lw          $a3, 0x788($a3)
    ctx->pc = 0x55d3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1928)));
    // 0x55d3dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x55d3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55d3e0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x55d3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x55d3e4: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x55d3e4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x55d3e8: 0xa206004d  sb          $a2, 0x4D($s0)
    ctx->pc = 0x55d3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 6));
    // 0x55d3ec: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x55d3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x55d3f0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x55d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x55d3f4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x55d3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x55d3f8: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x55d3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
    // 0x55d3fc: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x55d3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x55d400: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x55d400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x55d404: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x55d404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x55d408: 0xae030288  sw          $v1, 0x288($s0)
    ctx->pc = 0x55d408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 3));
    // 0x55d40c: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x55d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x55d410: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x55d410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x55d414: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x55d414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x55d418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55d418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x55d41c: 0x3e00008  jr          $ra
    ctx->pc = 0x55D41Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55D420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55D41Cu;
            // 0x55d420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55D424u;
    // 0x55d424: 0x0  nop
    ctx->pc = 0x55d424u;
    // NOP
    // 0x55d428: 0x0  nop
    ctx->pc = 0x55d428u;
    // NOP
    // 0x55d42c: 0x0  nop
    ctx->pc = 0x55d42cu;
    // NOP
}
