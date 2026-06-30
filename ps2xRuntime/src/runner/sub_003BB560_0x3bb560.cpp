#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BB560
// Address: 0x3bb560 - 0x3bb720
void sub_003BB560_0x3bb560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB560_0x3bb560");
#endif

    switch (ctx->pc) {
        case 0x3bb5bcu: goto label_3bb5bc;
        case 0x3bb5ccu: goto label_3bb5cc;
        case 0x3bb5d8u: goto label_3bb5d8;
        case 0x3bb608u: goto label_3bb608;
        case 0x3bb630u: goto label_3bb630;
        case 0x3bb64cu: goto label_3bb64c;
        case 0x3bb658u: goto label_3bb658;
        case 0x3bb674u: goto label_3bb674;
        case 0x3bb680u: goto label_3bb680;
        case 0x3bb6b8u: goto label_3bb6b8;
        case 0x3bb6c4u: goto label_3bb6c4;
        case 0x3bb6d4u: goto label_3bb6d4;
        case 0x3bb6e8u: goto label_3bb6e8;
        case 0x3bb6f0u: goto label_3bb6f0;
        default: break;
    }

    ctx->pc = 0x3bb560u;

    // 0x3bb560: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3bb560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3bb564: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bb564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3bb568: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3bb568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3bb56c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bb56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3bb570: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bb570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bb574: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bb574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bb578: 0x90830059  lbu         $v1, 0x59($a0)
    ctx->pc = 0x3bb578u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 89)));
    // 0x3bb57c: 0x1460005f  bnez        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x3BB57Cu;
    {
        const bool branch_taken_0x3bb57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB57Cu;
            // 0x3bb580: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb57c) {
            ctx->pc = 0x3BB6FCu;
            goto label_3bb6fc;
        }
    }
    ctx->pc = 0x3BB584u;
    // 0x3bb584: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3bb584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3bb588: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bb588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3bb58c: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x3bb58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x3bb590: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bb590u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb594: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x3bb594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bb598: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3bb598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3bb59c: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x3bb59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3bb5a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bb5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bb5a4: 0x261105f0  addiu       $s1, $s0, 0x5F0
    ctx->pc = 0x3bb5a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1520));
    // 0x3bb5a8: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x3bb5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x3bb5ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bb5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb5b0: 0x26070820  addiu       $a3, $s0, 0x820
    ctx->pc = 0x3bb5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x3bb5b4: 0xc0b838c  jal         func_2E0E30
    ctx->pc = 0x3BB5B4u;
    SET_GPR_U32(ctx, 31, 0x3BB5BCu);
    ctx->pc = 0x3BB5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB5B4u;
            // 0x3bb5b8: 0x26120580  addiu       $s2, $s0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E30u;
    if (runtime->hasFunction(0x2E0E30u)) {
        auto targetFn = runtime->lookupFunction(0x2E0E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB5BCu; }
        if (ctx->pc != 0x3BB5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0E30_0x2e0e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB5BCu; }
        if (ctx->pc != 0x3BB5BCu) { return; }
    }
    ctx->pc = 0x3BB5BCu;
label_3bb5bc:
    // 0x3bb5bc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3bb5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3bb5c0: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x3bb5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x3bb5c4: 0xc04cc90  jal         func_133240
    ctx->pc = 0x3BB5C4u;
    SET_GPR_U32(ctx, 31, 0x3BB5CCu);
    ctx->pc = 0x3BB5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB5C4u;
            // 0x3bb5c8: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB5CCu; }
        if (ctx->pc != 0x3BB5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB5CCu; }
        if (ctx->pc != 0x3BB5CCu) { return; }
    }
    ctx->pc = 0x3BB5CCu;
label_3bb5cc:
    // 0x3bb5cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3bb5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3bb5d0: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3BB5D0u;
    SET_GPR_U32(ctx, 31, 0x3BB5D8u);
    ctx->pc = 0x3BB5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB5D0u;
            // 0x3bb5d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB5D8u; }
        if (ctx->pc != 0x3BB5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB5D8u; }
        if (ctx->pc != 0x3BB5D8u) { return; }
    }
    ctx->pc = 0x3BB5D8u;
label_3bb5d8:
    // 0x3bb5d8: 0x96230056  lhu         $v1, 0x56($s1)
    ctx->pc = 0x3bb5d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 86)));
    // 0x3bb5dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3bb5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3bb5e0: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x3bb5e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3bb5e4: 0x50200046  beql        $at, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x3BB5E4u;
    {
        const bool branch_taken_0x3bb5e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb5e4) {
            ctx->pc = 0x3BB5E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB5E4u;
            // 0x3bb5e8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BB700u;
            goto label_3bb700;
        }
    }
    ctx->pc = 0x3BB5ECu;
    // 0x3bb5ec: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x3bb5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x3bb5f0: 0x84630028  lh          $v1, 0x28($v1)
    ctx->pc = 0x3bb5f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x3bb5f4: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x3BB5F4u;
    {
        const bool branch_taken_0x3bb5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb5f4) {
            ctx->pc = 0x3BB6FCu;
            goto label_3bb6fc;
        }
    }
    ctx->pc = 0x3BB5FCu;
    // 0x3bb5fc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3bb5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3bb600: 0xc04cc08  jal         func_133020
    ctx->pc = 0x3BB600u;
    SET_GPR_U32(ctx, 31, 0x3BB608u);
    ctx->pc = 0x3BB604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB600u;
            // 0x3bb604: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB608u; }
        if (ctx->pc != 0x3BB608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB608u; }
        if (ctx->pc != 0x3BB608u) { return; }
    }
    ctx->pc = 0x3BB608u;
label_3bb608:
    // 0x3bb608: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3bb608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bb60c: 0x0  nop
    ctx->pc = 0x3bb60cu;
    // NOP
    // 0x3bb610: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3bb610u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bb614: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x3BB614u;
    {
        const bool branch_taken_0x3bb614 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bb614) {
            ctx->pc = 0x3BB6FCu;
            goto label_3bb6fc;
        }
    }
    ctx->pc = 0x3BB61Cu;
    // 0x3bb61c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bb61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3bb620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb624: 0xa2620059  sb          $v0, 0x59($s3)
    ctx->pc = 0x3bb624u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 89), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bb628: 0xc0ab808  jal         func_2AE020
    ctx->pc = 0x3BB628u;
    SET_GPR_U32(ctx, 31, 0x3BB630u);
    ctx->pc = 0x3BB62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB628u;
            // 0x3bb62c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB630u; }
        if (ctx->pc != 0x3BB630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB630u; }
        if (ctx->pc != 0x3BB630u) { return; }
    }
    ctx->pc = 0x3BB630u;
label_3bb630:
    // 0x3bb630: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3bb630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x3bb634: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x3bb634u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
    // 0x3bb638: 0xc4401360  lwc1        $f0, 0x1360($v0)
    ctx->pc = 0x3bb638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bb63c: 0x260402e0  addiu       $a0, $s0, 0x2E0
    ctx->pc = 0x3bb63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    // 0x3bb640: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bb640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb644: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3BB644u;
    SET_GPR_U32(ctx, 31, 0x3BB64Cu);
    ctx->pc = 0x3BB648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB644u;
            // 0x3bb648: 0xe6400110  swc1        $f0, 0x110($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 272), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB64Cu; }
        if (ctx->pc != 0x3BB64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB64Cu; }
        if (ctx->pc != 0x3BB64Cu) { return; }
    }
    ctx->pc = 0x3BB64Cu;
label_3bb64c:
    // 0x3bb64c: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3bb64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3bb650: 0xc075318  jal         func_1D4C60
    ctx->pc = 0x3BB650u;
    SET_GPR_U32(ctx, 31, 0x3BB658u);
    ctx->pc = 0x3BB654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB650u;
            // 0x3bb654: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB658u; }
        if (ctx->pc != 0x3BB658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB658u; }
        if (ctx->pc != 0x3BB658u) { return; }
    }
    ctx->pc = 0x3BB658u;
label_3bb658:
    // 0x3bb658: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x3bb658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x3bb65c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3bb65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3bb660: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bb660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bb664: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x3bb664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x3bb668: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x3bb668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x3bb66c: 0xc0c6250  jal         func_318940
    ctx->pc = 0x3BB66Cu;
    SET_GPR_U32(ctx, 31, 0x3BB674u);
    ctx->pc = 0x3BB670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB66Cu;
            // 0x3bb670: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB674u; }
        if (ctx->pc != 0x3BB674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB674u; }
        if (ctx->pc != 0x3BB674u) { return; }
    }
    ctx->pc = 0x3BB674u;
label_3bb674:
    // 0x3bb674: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3bb674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3bb678: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3BB678u;
    SET_GPR_U32(ctx, 31, 0x3BB680u);
    ctx->pc = 0x3BB67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB678u;
            // 0x3bb67c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB680u; }
        if (ctx->pc != 0x3BB680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB680u; }
        if (ctx->pc != 0x3BB680u) { return; }
    }
    ctx->pc = 0x3BB680u;
label_3bb680:
    // 0x3bb680: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x3bb680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x3bb684: 0x84420024  lh          $v0, 0x24($v0)
    ctx->pc = 0x3bb684u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x3bb688: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3bb688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3bb68c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3BB68Cu;
    {
        const bool branch_taken_0x3bb68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb68c) {
            ctx->pc = 0x3BB690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB68Cu;
            // 0x3bb690: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BB6BCu;
            goto label_3bb6bc;
        }
    }
    ctx->pc = 0x3BB694u;
    // 0x3bb694: 0x96230056  lhu         $v1, 0x56($s1)
    ctx->pc = 0x3bb694u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 86)));
    // 0x3bb698: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3bb698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bb69c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BB69Cu;
    {
        const bool branch_taken_0x3bb69c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bb69c) {
            ctx->pc = 0x3BB6B8u;
            goto label_3bb6b8;
        }
    }
    ctx->pc = 0x3BB6A4u;
    // 0x3bb6a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3bb6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3bb6a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3bb6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3bb6ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bb6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bb6b0: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x3BB6B0u;
    SET_GPR_U32(ctx, 31, 0x3BB6B8u);
    ctx->pc = 0x3BB6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB6B0u;
            // 0x3bb6b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB6B8u; }
        if (ctx->pc != 0x3BB6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB6B8u; }
        if (ctx->pc != 0x3BB6B8u) { return; }
    }
    ctx->pc = 0x3BB6B8u;
label_3bb6b8:
    // 0x3bb6b8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3bb6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3bb6bc:
    // 0x3bb6bc: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3BB6BCu;
    SET_GPR_U32(ctx, 31, 0x3BB6C4u);
    ctx->pc = 0x3BB6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB6BCu;
            // 0x3bb6c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB6C4u; }
        if (ctx->pc != 0x3BB6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB6C4u; }
        if (ctx->pc != 0x3BB6C4u) { return; }
    }
    ctx->pc = 0x3BB6C4u;
label_3bb6c4:
    // 0x3bb6c4: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3bb6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3bb6c8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3bb6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3bb6cc: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x3BB6CCu;
    SET_GPR_U32(ctx, 31, 0x3BB6D4u);
    ctx->pc = 0x3BB6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB6CCu;
            // 0x3bb6d0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB6D4u; }
        if (ctx->pc != 0x3BB6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB6D4u; }
        if (ctx->pc != 0x3BB6D4u) { return; }
    }
    ctx->pc = 0x3BB6D4u;
label_3bb6d4:
    // 0x3bb6d4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3bb6d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3bb6d8: 0x2604092c  addiu       $a0, $s0, 0x92C
    ctx->pc = 0x3bb6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
    // 0x3bb6dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3bb6dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3bb6e0: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x3BB6E0u;
    SET_GPR_U32(ctx, 31, 0x3BB6E8u);
    ctx->pc = 0x3BB6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB6E0u;
            // 0x3bb6e4: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB6E8u; }
        if (ctx->pc != 0x3BB6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB6E8u; }
        if (ctx->pc != 0x3BB6E8u) { return; }
    }
    ctx->pc = 0x3BB6E8u;
label_3bb6e8:
    // 0x3bb6e8: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x3BB6E8u;
    SET_GPR_U32(ctx, 31, 0x3BB6F0u);
    ctx->pc = 0x3BB6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB6E8u;
            // 0x3bb6ec: 0x26040890  addiu       $a0, $s0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB6F0u; }
        if (ctx->pc != 0x3BB6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB6F0u; }
        if (ctx->pc != 0x3BB6F0u) { return; }
    }
    ctx->pc = 0x3BB6F0u;
label_3bb6f0:
    // 0x3bb6f0: 0x8e030d74  lw          $v1, 0xD74($s0)
    ctx->pc = 0x3bb6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
    // 0x3bb6f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3bb6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bb6f8: 0xac6402b0  sw          $a0, 0x2B0($v1)
    ctx->pc = 0x3bb6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 688), GPR_U32(ctx, 4));
label_3bb6fc:
    // 0x3bb6fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bb6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3bb700:
    // 0x3bb700: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3bb700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bb704: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bb704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bb708: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bb708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb70c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bb70cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb710: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB710u;
            // 0x3bb714: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BB718u;
    // 0x3bb718: 0x0  nop
    ctx->pc = 0x3bb718u;
    // NOP
    // 0x3bb71c: 0x0  nop
    ctx->pc = 0x3bb71cu;
    // NOP
}
