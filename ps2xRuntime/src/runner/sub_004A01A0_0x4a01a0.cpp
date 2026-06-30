#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A01A0
// Address: 0x4a01a0 - 0x4a03f0
void sub_004A01A0_0x4a01a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A01A0_0x4a01a0");
#endif

    switch (ctx->pc) {
        case 0x4a01d0u: goto label_4a01d0;
        case 0x4a0224u: goto label_4a0224;
        case 0x4a02a0u: goto label_4a02a0;
        case 0x4a02c0u: goto label_4a02c0;
        case 0x4a02d4u: goto label_4a02d4;
        case 0x4a02e0u: goto label_4a02e0;
        case 0x4a02e4u: goto label_4a02e4;
        case 0x4a0308u: goto label_4a0308;
        case 0x4a0390u: goto label_4a0390;
        case 0x4a0398u: goto label_4a0398;
        default: break;
    }

    ctx->pc = 0x4a01a0u;

    // 0x4a01a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a01a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4a01a4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4a01a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a01a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a01a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4a01ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a01acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4a01b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a01b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4a01b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a01b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a01b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a01b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a01bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a01bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4a01c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4a01c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a01c4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4a01c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a01c8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4A01C8u;
    SET_GPR_U32(ctx, 31, 0x4A01D0u);
    ctx->pc = 0x4A01CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A01C8u;
            // 0x4a01cc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A01D0u; }
        if (ctx->pc != 0x4A01D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A01D0u; }
        if (ctx->pc != 0x4A01D0u) { return; }
    }
    ctx->pc = 0x4A01D0u;
label_4a01d0:
    // 0x4a01d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4a01d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4a01d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4a01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4a01d8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4a01d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4a01dc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4a01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4a01e0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4a01e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4a01e4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4a01e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x4a01e8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4a01e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4a01ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4a01ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a01f0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4a01f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x4a01f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a01f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4a01f8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4a01f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x4a01fc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4a01fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4a0200: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4a0200u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x4a0204: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4a0204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4a0208: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4a0208u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x4a020c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4a020cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x4a0210: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4a0210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x4a0214: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4a0214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4a0218: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4a0218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4a021c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x4A021Cu;
    SET_GPR_U32(ctx, 31, 0x4A0224u);
    ctx->pc = 0x4A0220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A021Cu;
            // 0x4a0220: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0224u; }
        if (ctx->pc != 0x4A0224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0224u; }
        if (ctx->pc != 0x4A0224u) { return; }
    }
    ctx->pc = 0x4A0224u;
label_4a0224:
    // 0x4a0224: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4a0224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4a0228: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4a0228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x4a022c: 0x24630098  addiu       $v1, $v1, 0x98
    ctx->pc = 0x4a022cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
    // 0x4a0230: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4a0230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x4a0234: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4a0234u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x4a0238: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a0238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4a023c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4a023cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4a0240: 0xac447c28  sw          $a0, 0x7C28($v0)
    ctx->pc = 0x4a0240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31784), GPR_U32(ctx, 4));
    // 0x4a0244: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x4a0244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x4a0248: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a0248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4a024c: 0x244200e8  addiu       $v0, $v0, 0xE8
    ctx->pc = 0x4a024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x4a0250: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4a0250u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4a0254: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4a0254u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x4a0258: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4a0258u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x4a025c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4a025cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x4a0260: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4a0260u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x4a0264: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4a0264u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x4a0268: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4a0268u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x4a026c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4a026cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x4a0270: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4a0270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x4a0274: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4a0274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x4a0278: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4a0278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x4a027c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4a027cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x4a0280: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4a0280u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x4a0284: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4A0284u;
    {
        const bool branch_taken_0x4a0284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0284) {
            ctx->pc = 0x4A0318u;
            goto label_4a0318;
        }
    }
    ctx->pc = 0x4A028Cu;
    // 0x4a028c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x4a028cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x4a0290: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4a0290u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4a0294: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4a0294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4a0298: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4A0298u;
    SET_GPR_U32(ctx, 31, 0x4A02A0u);
    ctx->pc = 0x4A029Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0298u;
            // 0x4a029c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A02A0u; }
        if (ctx->pc != 0x4A02A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A02A0u; }
        if (ctx->pc != 0x4A02A0u) { return; }
    }
    ctx->pc = 0x4A02A0u;
label_4a02a0:
    // 0x4a02a0: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x4a02a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x4a02a4: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x4a02a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x4a02a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a02a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a02ac: 0x24a50340  addiu       $a1, $a1, 0x340
    ctx->pc = 0x4a02acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 832));
    // 0x4a02b0: 0x24c6f460  addiu       $a2, $a2, -0xBA0
    ctx->pc = 0x4a02b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964320));
    // 0x4a02b4: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x4a02b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x4a02b8: 0xc040840  jal         func_102100
    ctx->pc = 0x4A02B8u;
    SET_GPR_U32(ctx, 31, 0x4A02C0u);
    ctx->pc = 0x4A02BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A02B8u;
            // 0x4a02bc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A02C0u; }
        if (ctx->pc != 0x4A02C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A02C0u; }
        if (ctx->pc != 0x4A02C0u) { return; }
    }
    ctx->pc = 0x4A02C0u;
label_4a02c0:
    // 0x4a02c0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4a02c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x4a02c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a02c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a02c8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4a02c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x4a02cc: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4A02CCu;
    SET_GPR_U32(ctx, 31, 0x4A02D4u);
    ctx->pc = 0x4A02D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A02CCu;
            // 0x4a02d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A02D4u; }
        if (ctx->pc != 0x4A02D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A02D4u; }
        if (ctx->pc != 0x4A02D4u) { return; }
    }
    ctx->pc = 0x4A02D4u;
label_4a02d4:
    // 0x4a02d4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4a02d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4a02d8: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4A02D8u;
    SET_GPR_U32(ctx, 31, 0x4A02E0u);
    ctx->pc = 0x4A02DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A02D8u;
            // 0x4a02dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A02E0u; }
        if (ctx->pc != 0x4A02E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A02E0u; }
        if (ctx->pc != 0x4A02E0u) { return; }
    }
    ctx->pc = 0x4A02E0u;
label_4a02e0:
    // 0x4a02e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a02e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a02e4:
    // 0x4a02e4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4a02e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x4a02e8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4a02e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4a02ec: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4a02ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x4a02f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a02f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a02f4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4a02f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x4a02f8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4a02f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4a02fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4a0300: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x4A0300u;
    SET_GPR_U32(ctx, 31, 0x4A0308u);
    ctx->pc = 0x4A0304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0300u;
            // 0x4a0304: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0308u; }
        if (ctx->pc != 0x4A0308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0308u; }
        if (ctx->pc != 0x4A0308u) { return; }
    }
    ctx->pc = 0x4A0308u;
label_4a0308:
    // 0x4a0308: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4a0308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4a030c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4a030cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4a0310: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4A0310u;
    {
        const bool branch_taken_0x4a0310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0310u;
            // 0x4a0314: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0310) {
            ctx->pc = 0x4A02E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a02e4;
        }
    }
    ctx->pc = 0x4A0318u;
label_4a0318:
    // 0x4a0318: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4a0318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a031c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a031cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a0320: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a0320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a0324: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a0324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a0328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a0328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a032c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a032cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0330: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0330u;
            // 0x4a0334: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A0338u;
    // 0x4a0338: 0x0  nop
    ctx->pc = 0x4a0338u;
    // NOP
    // 0x4a033c: 0x0  nop
    ctx->pc = 0x4a033cu;
    // NOP
    // 0x4a0340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a0340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a0344: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4a0344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4a0348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a0348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a034c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a034cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4a0350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a0350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4a0354: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4a0354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x4a0358: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4a0358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4a035c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a035cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a0360: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x4a0360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x4a0364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a0364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a0368: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a0368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a036c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a036cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0370: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x4a0370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x4a0374: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4a0374u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4a0378: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x4a0378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x4a037c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4a037cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x4a0380: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x4a0380u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x4a0384: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x4a0384u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x4a0388: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4A0388u;
    SET_GPR_U32(ctx, 31, 0x4A0390u);
    ctx->pc = 0x4A038Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0388u;
            // 0x4a038c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0390u; }
        if (ctx->pc != 0x4A0390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0390u; }
        if (ctx->pc != 0x4A0390u) { return; }
    }
    ctx->pc = 0x4A0390u;
label_4a0390:
    // 0x4a0390: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x4A0390u;
    SET_GPR_U32(ctx, 31, 0x4A0398u);
    ctx->pc = 0x4A0394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0390u;
            // 0x4a0394: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0398u; }
        if (ctx->pc != 0x4A0398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0398u; }
        if (ctx->pc != 0x4A0398u) { return; }
    }
    ctx->pc = 0x4A0398u;
label_4a0398:
    // 0x4a0398: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a0398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4a039c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x4a039cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x4a03a0: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x4a03a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4a03a4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4a03a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x4a03a8: 0x24a5c560  addiu       $a1, $a1, -0x3AA0
    ctx->pc = 0x4a03a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952288));
    // 0x4a03ac: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x4a03acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x4a03b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a03b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a03b4: 0x8cc60788  lw          $a2, 0x788($a2)
    ctx->pc = 0x4a03b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1928)));
    // 0x4a03b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a03b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a03bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4a03bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4a03c0: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x4a03c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a03c4: 0xa205004d  sb          $a1, 0x4D($s0)
    ctx->pc = 0x4a03c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 5));
    // 0x4a03c8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4a03c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4a03cc: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x4a03ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x4a03d0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4a03d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x4a03d4: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x4a03d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x4a03d8: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x4a03d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x4a03dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a03dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a03e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a03e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a03e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A03E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A03E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A03E4u;
            // 0x4a03e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A03ECu;
    // 0x4a03ec: 0x0  nop
    ctx->pc = 0x4a03ecu;
    // NOP
}
