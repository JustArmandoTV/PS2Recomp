#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A07E0
// Address: 0x3a07e0 - 0x3a0980
void sub_003A07E0_0x3a07e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A07E0_0x3a07e0");
#endif

    switch (ctx->pc) {
        case 0x3a0818u: goto label_3a0818;
        case 0x3a0844u: goto label_3a0844;
        case 0x3a0868u: goto label_3a0868;
        case 0x3a08acu: goto label_3a08ac;
        case 0x3a08ccu: goto label_3a08cc;
        case 0x3a0928u: goto label_3a0928;
        default: break;
    }

    ctx->pc = 0x3a07e0u;

    // 0x3a07e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a07e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3a07e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a07e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3a07e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a07e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3a07ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a07ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3a07f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a07f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3a07f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3a07f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a07f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a07f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a07fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a07fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a0800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a0804: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x3a0804u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
    // 0x3a0808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a0808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a080c: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x3a080cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
    // 0x3a0810: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3a0810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3a0814: 0x8c51077c  lw          $s1, 0x77C($v0)
    ctx->pc = 0x3a0814u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_3a0818:
    // 0x3a0818: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a0818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3a081c: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x3a081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3a0820: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x3a0820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x3a0824: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3a0824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3a0828: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3A0828u;
    {
        const bool branch_taken_0x3a0828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A082Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0828u;
            // 0x3a082c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0828) {
            ctx->pc = 0x3A0898u;
            goto label_3a0898;
        }
    }
    ctx->pc = 0x3A0830u;
    // 0x3a0830: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a0830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3a0834: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x3a0834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x3a0838: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x3a0838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x3a083c: 0xc0bd4bc  jal         func_2F52F0
    ctx->pc = 0x3A083Cu;
    SET_GPR_U32(ctx, 31, 0x3A0844u);
    ctx->pc = 0x3A0840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A083Cu;
            // 0x3a0840: 0x244400d0  addiu       $a0, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F52F0u;
    if (runtime->hasFunction(0x2F52F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F52F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0844u; }
        if (ctx->pc != 0x3A0844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F52F0_0x2f52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0844u; }
        if (ctx->pc != 0x3A0844u) { return; }
    }
    ctx->pc = 0x3A0844u;
label_3a0844:
    // 0x3a0844: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3a0844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a0848: 0x9282004c  lbu         $v0, 0x4C($s4)
    ctx->pc = 0x3a0848u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x3a084c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3A084Cu;
    {
        const bool branch_taken_0x3a084c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a084c) {
            ctx->pc = 0x3A0880u;
            goto label_3a0880;
        }
    }
    ctx->pc = 0x3A0854u;
    // 0x3a0854: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a0854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3a0858: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x3a0858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x3a085c: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x3a085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x3a0860: 0xc0bd4bc  jal         func_2F52F0
    ctx->pc = 0x3A0860u;
    SET_GPR_U32(ctx, 31, 0x3A0868u);
    ctx->pc = 0x3A0864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0860u;
            // 0x3a0864: 0x244400d0  addiu       $a0, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F52F0u;
    if (runtime->hasFunction(0x2F52F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F52F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0868u; }
        if (ctx->pc != 0x3A0868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F52F0_0x2f52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0868u; }
        if (ctx->pc != 0x3A0868u) { return; }
    }
    ctx->pc = 0x3A0868u;
label_3a0868:
    // 0x3a0868: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3a0868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a086c: 0x9282004c  lbu         $v0, 0x4C($s4)
    ctx->pc = 0x3a086cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x3a0870: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a0870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a0874: 0x54430033  bnel        $v0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3A0874u;
    {
        const bool branch_taken_0x3a0874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a0874) {
            ctx->pc = 0x3A0878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0874u;
            // 0x3a0878: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A0944u;
            goto label_3a0944;
        }
    }
    ctx->pc = 0x3A087Cu;
    // 0x3a087c: 0x0  nop
    ctx->pc = 0x3a087cu;
    // NOP
label_3a0880:
    // 0x3a0880: 0x82020e3f  lb          $v0, 0xE3F($s0)
    ctx->pc = 0x3a0880u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3647)));
    // 0x3a0884: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3A0884u;
    {
        const bool branch_taken_0x3a0884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0884) {
            ctx->pc = 0x3A0940u;
            goto label_3a0940;
        }
    }
    ctx->pc = 0x3A088Cu;
    // 0x3a088c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3A088Cu;
    {
        const bool branch_taken_0x3a088c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a088c) {
            ctx->pc = 0x3A08C0u;
            goto label_3a08c0;
        }
    }
    ctx->pc = 0x3A0894u;
    // 0x3a0894: 0x0  nop
    ctx->pc = 0x3a0894u;
    // NOP
label_3a0898:
    // 0x3a0898: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a0898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3a089c: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x3a089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x3a08a0: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x3a08a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x3a08a4: 0xc0bd4bc  jal         func_2F52F0
    ctx->pc = 0x3A08A4u;
    SET_GPR_U32(ctx, 31, 0x3A08ACu);
    ctx->pc = 0x3A08A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A08A4u;
            // 0x3a08a8: 0x244400d0  addiu       $a0, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F52F0u;
    if (runtime->hasFunction(0x2F52F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F52F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A08ACu; }
        if (ctx->pc != 0x3A08ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F52F0_0x2f52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A08ACu; }
        if (ctx->pc != 0x3A08ACu) { return; }
    }
    ctx->pc = 0x3A08ACu;
label_3a08ac:
    // 0x3a08ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3a08acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a08b0: 0x9282004c  lbu         $v0, 0x4C($s4)
    ctx->pc = 0x3a08b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x3a08b4: 0x14430022  bne         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3A08B4u;
    {
        const bool branch_taken_0x3a08b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a08b4) {
            ctx->pc = 0x3A0940u;
            goto label_3a0940;
        }
    }
    ctx->pc = 0x3A08BCu;
    // 0x3a08bc: 0x0  nop
    ctx->pc = 0x3a08bcu;
    // NOP
label_3a08c0:
    // 0x3a08c0: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x3a08c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x3a08c4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3A08C4u;
    SET_GPR_U32(ctx, 31, 0x3A08CCu);
    ctx->pc = 0x3A08C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A08C4u;
            // 0x3a08c8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A08CCu; }
        if (ctx->pc != 0x3A08CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A08CCu; }
        if (ctx->pc != 0x3A08CCu) { return; }
    }
    ctx->pc = 0x3A08CCu;
label_3a08cc:
    // 0x3a08cc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3a08d0: 0x8e830078  lw          $v1, 0x78($s4)
    ctx->pc = 0x3a08d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x3a08d4: 0x8c42f350  lw          $v0, -0xCB0($v0)
    ctx->pc = 0x3a08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964048)));
    // 0x3a08d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a08d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a08dc: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x3a08dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x3a08e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3a08e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3a08e4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A08E4u;
    {
        const bool branch_taken_0x3a08e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3a08e4) {
            ctx->pc = 0x3A08E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A08E4u;
            // 0x3a08e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A08F8u;
            goto label_3a08f8;
        }
    }
    ctx->pc = 0x3A08ECu;
    // 0x3a08ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a08ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a08f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A08F0u;
    {
        const bool branch_taken_0x3a08f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A08F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A08F0u;
            // 0x3a08f4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a08f0) {
            ctx->pc = 0x3A0910u;
            goto label_3a0910;
        }
    }
    ctx->pc = 0x3A08F8u;
label_3a08f8:
    // 0x3a08f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a08f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a08fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a08fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a0900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a0900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a0904: 0x0  nop
    ctx->pc = 0x3a0904u;
    // NOP
    // 0x3a0908: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3a0908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a090c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3a090cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3a0910:
    // 0x3a0910: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x3a0910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a0914: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3a0914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3a0918: 0x26850050  addiu       $a1, $s4, 0x50
    ctx->pc = 0x3a0918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x3a091c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a091cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a0920: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x3A0920u;
    SET_GPR_U32(ctx, 31, 0x3A0928u);
    ctx->pc = 0x3A0924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0920u;
            // 0x3a0924: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0928u; }
        if (ctx->pc != 0x3A0928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0928u; }
        if (ctx->pc != 0x3A0928u) { return; }
    }
    ctx->pc = 0x3A0928u;
label_3a0928:
    // 0x3a0928: 0xc6810074  lwc1        $f1, 0x74($s4)
    ctx->pc = 0x3a0928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a092c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3a092cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a0930: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0930u;
    {
        const bool branch_taken_0x3a0930 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a0930) {
            ctx->pc = 0x3A0940u;
            goto label_3a0940;
        }
    }
    ctx->pc = 0x3A0938u;
    // 0x3a0938: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A0938u;
    {
        const bool branch_taken_0x3a0938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A093Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0938u;
            // 0x3a093c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0938) {
            ctx->pc = 0x3A0954u;
            goto label_3a0954;
        }
    }
    ctx->pc = 0x3A0940u;
label_3a0940:
    // 0x3a0940: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a0940u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3a0944:
    // 0x3a0944: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x3a0944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3a0948: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x3A0948u;
    {
        const bool branch_taken_0x3a0948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A094Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0948u;
            // 0x3a094c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0948) {
            ctx->pc = 0x3A0818u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a0818;
        }
    }
    ctx->pc = 0x3A0950u;
    // 0x3a0950: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a0950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0954:
    // 0x3a0954: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a0954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a0958: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a0958u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a095c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a095cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a0960: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a0960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a0964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a096c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A096Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A096Cu;
            // 0x3a0970: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A0974u;
    // 0x3a0974: 0x0  nop
    ctx->pc = 0x3a0974u;
    // NOP
    // 0x3a0978: 0x0  nop
    ctx->pc = 0x3a0978u;
    // NOP
    // 0x3a097c: 0x0  nop
    ctx->pc = 0x3a097cu;
    // NOP
}
