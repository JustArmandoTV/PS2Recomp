#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A9400
// Address: 0x4a9400 - 0x4a99e0
void sub_004A9400_0x4a9400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9400_0x4a9400");
#endif

    switch (ctx->pc) {
        case 0x4a9478u: goto label_4a9478;
        case 0x4a9488u: goto label_4a9488;
        case 0x4a96b4u: goto label_4a96b4;
        case 0x4a9750u: goto label_4a9750;
        case 0x4a9758u: goto label_4a9758;
        case 0x4a9760u: goto label_4a9760;
        case 0x4a9768u: goto label_4a9768;
        case 0x4a9774u: goto label_4a9774;
        case 0x4a977cu: goto label_4a977c;
        case 0x4a978cu: goto label_4a978c;
        case 0x4a97a4u: goto label_4a97a4;
        case 0x4a97d4u: goto label_4a97d4;
        case 0x4a97f8u: goto label_4a97f8;
        case 0x4a9800u: goto label_4a9800;
        case 0x4a98a0u: goto label_4a98a0;
        case 0x4a98a8u: goto label_4a98a8;
        case 0x4a98b0u: goto label_4a98b0;
        case 0x4a98bcu: goto label_4a98bc;
        case 0x4a98c8u: goto label_4a98c8;
        case 0x4a98d0u: goto label_4a98d0;
        case 0x4a98dcu: goto label_4a98dc;
        case 0x4a98f4u: goto label_4a98f4;
        case 0x4a9904u: goto label_4a9904;
        case 0x4a9944u: goto label_4a9944;
        case 0x4a9998u: goto label_4a9998;
        case 0x4a99a4u: goto label_4a99a4;
        case 0x4a99b0u: goto label_4a99b0;
        case 0x4a99bcu: goto label_4a99bc;
        default: break;
    }

    ctx->pc = 0x4a9400u;

    // 0x4a9400: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x4a9400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x4a9404: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x4a9404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4a9408: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4a9408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4a940c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4a940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4a9410: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a9410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4a9414: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a9414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4a9418: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a9418u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a941c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a941cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4a9420: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4a9420u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9424: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4a9424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a9428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a942c: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x4a942cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4a9430: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4a9430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9434: 0x14c3000d  bne         $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4A9434u;
    {
        const bool branch_taken_0x4a9434 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x4A9438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9434u;
            // 0x4a9438: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9434) {
            ctx->pc = 0x4A946Cu;
            goto label_4a946c;
        }
    }
    ctx->pc = 0x4A943Cu;
    // 0x4a943c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4a943cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a9440: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4a9440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a9444: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4a9444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a9448: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4a9448u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4a944c: 0xae840004  sw          $a0, 0x4($s4)
    ctx->pc = 0x4a944cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 4));
    // 0x4a9450: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x4a9450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4a9454: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x4a9454u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x4a9458: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x4a9458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4a945c: 0xae84000c  sw          $a0, 0xC($s4)
    ctx->pc = 0x4a945cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 4));
    // 0x4a9460: 0xae860010  sw          $a2, 0x10($s4)
    ctx->pc = 0x4a9460u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 6));
    // 0x4a9464: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x4A9464u;
    {
        const bool branch_taken_0x4a9464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9464u;
            // 0x4a9468: 0xae830014  sw          $v1, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9464) {
            ctx->pc = 0x4A99BCu;
            goto label_4a99bc;
        }
    }
    ctx->pc = 0x4A946Cu;
label_4a946c:
    // 0x4a946c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x4a946cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x4a9470: 0xc12a7a0  jal         func_4A9E80
    ctx->pc = 0x4A9470u;
    SET_GPR_U32(ctx, 31, 0x4A9478u);
    ctx->pc = 0x4A9474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9470u;
            // 0x4a9474: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9478u; }
        if (ctx->pc != 0x4A9478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9478u; }
        if (ctx->pc != 0x4A9478u) { return; }
    }
    ctx->pc = 0x4A9478u;
label_4a9478:
    // 0x4a9478: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x4a9478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x4a947c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x4a947cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x4a9480: 0xc12a7a0  jal         func_4A9E80
    ctx->pc = 0x4A9480u;
    SET_GPR_U32(ctx, 31, 0x4A9488u);
    ctx->pc = 0x4A9484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9480u;
            // 0x4a9484: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9488u; }
        if (ctx->pc != 0x4A9488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9488u; }
        if (ctx->pc != 0x4A9488u) { return; }
    }
    ctx->pc = 0x4A9488u;
label_4a9488:
    // 0x4a9488: 0x8fad01d0  lw          $t5, 0x1D0($sp)
    ctx->pc = 0x4a9488u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x4a948c: 0x8e4c0000  lw          $t4, 0x0($s2)
    ctx->pc = 0x4a948cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a9490: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x4a9490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a9494: 0x18d1823  subu        $v1, $t4, $t5
    ctx->pc = 0x4a9494u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x4a9498: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9498u;
    {
        const bool branch_taken_0x4a9498 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4A949Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9498u;
            // 0x4a949c: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9498) {
            ctx->pc = 0x4A94A8u;
            goto label_4a94a8;
        }
    }
    ctx->pc = 0x4A94A0u;
    // 0x4a94a0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x4a94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x4a94a4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4a94a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4a94a8:
    // 0x4a94a8: 0x184182b  sltu        $v1, $t4, $a0
    ctx->pc = 0x4a94a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4a94ac: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4A94ACu;
    {
        const bool branch_taken_0x4a94ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a94ac) {
            ctx->pc = 0x4A94B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A94ACu;
            // 0x4a94b0: 0x1a4182b  sltu        $v1, $t5, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A94E4u;
            goto label_4a94e4;
        }
    }
    ctx->pc = 0x4A94B4u;
    // 0x4a94b4: 0x1a4082b  sltu        $at, $t5, $a0
    ctx->pc = 0x4a94b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4a94b8: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A94B8u;
    {
        const bool branch_taken_0x4a94b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a94b8) {
            ctx->pc = 0x4A94BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A94B8u;
            // 0x4a94bc: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9510u;
            goto label_4a9510;
        }
    }
    ctx->pc = 0x4A94C0u;
    // 0x4a94c0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x4a94c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4a94c4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4a94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a94c8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x4a94c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a94cc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A94CCu;
    {
        const bool branch_taken_0x4a94cc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4A94D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A94CCu;
            // 0x4a94d0: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a94cc) {
            ctx->pc = 0x4A94DCu;
            goto label_4a94dc;
        }
    }
    ctx->pc = 0x4A94D4u;
    // 0x4a94d4: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x4a94d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x4a94d8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4a94d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_4a94dc:
    // 0x4a94dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4A94DCu;
    {
        const bool branch_taken_0x4a94dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A94E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A94DCu;
            // 0x4a94e0: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a94dc) {
            ctx->pc = 0x4A950Cu;
            goto label_4a950c;
        }
    }
    ctx->pc = 0x4A94E4u;
label_4a94e4:
    // 0x4a94e4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A94E4u;
    {
        const bool branch_taken_0x4a94e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a94e4) {
            ctx->pc = 0x4A950Cu;
            goto label_4a950c;
        }
    }
    ctx->pc = 0x4A94ECu;
    // 0x4a94ec: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x4a94ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4a94f0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4a94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a94f4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x4a94f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a94f8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A94F8u;
    {
        const bool branch_taken_0x4a94f8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4A94FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A94F8u;
            // 0x4a94fc: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a94f8) {
            ctx->pc = 0x4A9508u;
            goto label_4a9508;
        }
    }
    ctx->pc = 0x4A9500u;
    // 0x4a9500: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x4a9500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x4a9504: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4a9504u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_4a9508:
    // 0x4a9508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a9508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a950c:
    // 0x4a950c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x4a950cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4a9510:
    // 0x4a9510: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x4a9510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4a9514: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x4a9514u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a9518: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9518u;
    {
        const bool branch_taken_0x4a9518 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4A951Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9518u;
            // 0x4a951c: 0x35883  sra         $t3, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9518) {
            ctx->pc = 0x4A9528u;
            goto label_4a9528;
        }
    }
    ctx->pc = 0x4A9520u;
    // 0x4a9520: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x4a9520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x4a9524: 0x35883  sra         $t3, $v1, 2
    ctx->pc = 0x4a9524u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 3), 2));
label_4a9528:
    // 0x4a9528: 0x8faa01e0  lw          $t2, 0x1E0($sp)
    ctx->pc = 0x4a9528u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x4a952c: 0x8fa901e4  lw          $t1, 0x1E4($sp)
    ctx->pc = 0x4a952cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x4a9530: 0x12a2023  subu        $a0, $t1, $t2
    ctx->pc = 0x4a9530u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x4a9534: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9534u;
    {
        const bool branch_taken_0x4a9534 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4A9538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9534u;
            // 0x4a9538: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9534) {
            ctx->pc = 0x4A9544u;
            goto label_4a9544;
        }
    }
    ctx->pc = 0x4A953Cu;
    // 0x4a953c: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x4a953cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x4a9540: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4a9540u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_4a9544:
    // 0x4a9544: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x4a9544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x4a9548: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4a9548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a954c: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x4a954cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4a9550: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x4a9550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x4a9554: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x4a9554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a9558: 0x8fa801b8  lw          $t0, 0x1B8($sp)
    ctx->pc = 0x4a9558u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x4a955c: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x4a955cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4a9560: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9560u;
    {
        const bool branch_taken_0x4a9560 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4A9564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9560u;
            // 0x4a9564: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9560) {
            ctx->pc = 0x4A9570u;
            goto label_4a9570;
        }
    }
    ctx->pc = 0x4A9568u;
    // 0x4a9568: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x4a9568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x4a956c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4a956cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4a9570:
    // 0x4a9570: 0xa8182b  sltu        $v1, $a1, $t0
    ctx->pc = 0x4a9570u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4a9574: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4A9574u;
    {
        const bool branch_taken_0x4a9574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a9574) {
            ctx->pc = 0x4A9578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9574u;
            // 0x4a9578: 0x88182b  sltu        $v1, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A95ACu;
            goto label_4a95ac;
        }
    }
    ctx->pc = 0x4A957Cu;
    // 0x4a957c: 0x88082b  sltu        $at, $a0, $t0
    ctx->pc = 0x4a957cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4a9580: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A9580u;
    {
        const bool branch_taken_0x4a9580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9580) {
            ctx->pc = 0x4A9584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9580u;
            // 0x4a9584: 0x8e2e0014  lw          $t6, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A95D8u;
            goto label_4a95d8;
        }
    }
    ctx->pc = 0x4A9588u;
    // 0x4a9588: 0x8fa601bc  lw          $a2, 0x1BC($sp)
    ctx->pc = 0x4a9588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x4a958c: 0x8fa301b4  lw          $v1, 0x1B4($sp)
    ctx->pc = 0x4a958cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x4a9590: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x4a9590u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4a9594: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9594u;
    {
        const bool branch_taken_0x4a9594 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x4A9598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9594u;
            // 0x4a9598: 0x61883  sra         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9594) {
            ctx->pc = 0x4A95A4u;
            goto label_4a95a4;
        }
    }
    ctx->pc = 0x4A959Cu;
    // 0x4a959c: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x4a959cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x4a95a0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4a95a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_4a95a4:
    // 0x4a95a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4A95A4u;
    {
        const bool branch_taken_0x4a95a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A95A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A95A4u;
            // 0x4a95a8: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a95a4) {
            ctx->pc = 0x4A95D4u;
            goto label_4a95d4;
        }
    }
    ctx->pc = 0x4A95ACu;
label_4a95ac:
    // 0x4a95ac: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A95ACu;
    {
        const bool branch_taken_0x4a95ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a95ac) {
            ctx->pc = 0x4A95D4u;
            goto label_4a95d4;
        }
    }
    ctx->pc = 0x4A95B4u;
    // 0x4a95b4: 0x8fa601bc  lw          $a2, 0x1BC($sp)
    ctx->pc = 0x4a95b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x4a95b8: 0x8fa301b4  lw          $v1, 0x1B4($sp)
    ctx->pc = 0x4a95b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x4a95bc: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x4a95bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4a95c0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A95C0u;
    {
        const bool branch_taken_0x4a95c0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x4A95C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A95C0u;
            // 0x4a95c4: 0x61883  sra         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a95c0) {
            ctx->pc = 0x4A95D0u;
            goto label_4a95d0;
        }
    }
    ctx->pc = 0x4A95C8u;
    // 0x4a95c8: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x4a95c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x4a95cc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4a95ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_4a95d0:
    // 0x4a95d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a95d4:
    // 0x4a95d4: 0x8e2e0014  lw          $t6, 0x14($s1)
    ctx->pc = 0x4a95d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4a95d8:
    // 0x4a95d8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x4a95d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4a95dc: 0x8fa701c0  lw          $a3, 0x1C0($sp)
    ctx->pc = 0x4a95dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x4a95e0: 0x8fa601c4  lw          $a2, 0x1C4($sp)
    ctx->pc = 0x4a95e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x4a95e4: 0x1c37023  subu        $t6, $t6, $v1
    ctx->pc = 0x4a95e4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x4a95e8: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A95E8u;
    {
        const bool branch_taken_0x4a95e8 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x4A95ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A95E8u;
            // 0x4a95ec: 0xe1883  sra         $v1, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a95e8) {
            ctx->pc = 0x4A95F8u;
            goto label_4a95f8;
        }
    }
    ctx->pc = 0x4A95F0u;
    // 0x4a95f0: 0x25c30003  addiu       $v1, $t6, 0x3
    ctx->pc = 0x4a95f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 3));
    // 0x4a95f4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4a95f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_4a95f8:
    // 0x4a95f8: 0x279c0  sll         $t7, $v0, 7
    ctx->pc = 0x4a95f8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x4a95fc: 0xc77023  subu        $t6, $a2, $a3
    ctx->pc = 0x4a95fcu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4a9600: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9600u;
    {
        const bool branch_taken_0x4a9600 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x4A9604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9600u;
            // 0x4a9604: 0xe1083  sra         $v0, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9600) {
            ctx->pc = 0x4A9610u;
            goto label_4a9610;
        }
    }
    ctx->pc = 0x4A9608u;
    // 0x4a9608: 0x25c20003  addiu       $v0, $t6, 0x3
    ctx->pc = 0x4a9608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 3));
    // 0x4a960c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4a960cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4a9610:
    // 0x4a9610: 0x1e21023  subu        $v0, $t7, $v0
    ctx->pc = 0x4a9610u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x4a9614: 0x8e350008  lw          $s5, 0x8($s1)
    ctx->pc = 0x4a9614u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4a9618: 0x8c7823  subu        $t7, $a0, $t4
    ctx->pc = 0x4a9618u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x4a961c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4a961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a9620: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9620u;
    {
        const bool branch_taken_0x4a9620 = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x4A9624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9620u;
            // 0x4a9624: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9620) {
            ctx->pc = 0x4A9630u;
            goto label_4a9630;
        }
    }
    ctx->pc = 0x4A9628u;
    // 0x4a9628: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x4a9628u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
    // 0x4a962c: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x4a962cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_4a9630:
    // 0x4a9630: 0x95782b  sltu        $t7, $a0, $s5
    ctx->pc = 0x4a9630u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x4a9634: 0x55e0000d  bnel        $t7, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4A9634u;
    {
        const bool branch_taken_0x4a9634 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a9634) {
            ctx->pc = 0x4A9638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9634u;
            // 0x4a9638: 0x195782b  sltu        $t7, $t4, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A966Cu;
            goto label_4a966c;
        }
    }
    ctx->pc = 0x4A963Cu;
    // 0x4a963c: 0x195082b  sltu        $at, $t4, $s5
    ctx->pc = 0x4a963cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x4a9640: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A9640u;
    {
        const bool branch_taken_0x4a9640 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9640) {
            ctx->pc = 0x4A9644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9640u;
            // 0x4a9644: 0xe79c0  sll         $t7, $t6, 7 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9698u;
            goto label_4a9698;
        }
    }
    ctx->pc = 0x4A9648u;
    // 0x4a9648: 0x8e35000c  lw          $s5, 0xC($s1)
    ctx->pc = 0x4a9648u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4a964c: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x4a964cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4a9650: 0x2afa823  subu        $s5, $s5, $t7
    ctx->pc = 0x4a9650u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
    // 0x4a9654: 0x6a10003  bgez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9654u;
    {
        const bool branch_taken_0x4a9654 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x4A9658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9654u;
            // 0x4a9658: 0x157883  sra         $t7, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9654) {
            ctx->pc = 0x4A9664u;
            goto label_4a9664;
        }
    }
    ctx->pc = 0x4A965Cu;
    // 0x4a965c: 0x26af0003  addiu       $t7, $s5, 0x3
    ctx->pc = 0x4a965cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x4a9660: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x4a9660u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
label_4a9664:
    // 0x4a9664: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4A9664u;
    {
        const bool branch_taken_0x4a9664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9664u;
            // 0x4a9668: 0x1cf7023  subu        $t6, $t6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9664) {
            ctx->pc = 0x4A9694u;
            goto label_4a9694;
        }
    }
    ctx->pc = 0x4A966Cu;
label_4a966c:
    // 0x4a966c: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A966Cu;
    {
        const bool branch_taken_0x4a966c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a966c) {
            ctx->pc = 0x4A9694u;
            goto label_4a9694;
        }
    }
    ctx->pc = 0x4A9674u;
    // 0x4a9674: 0x8e35000c  lw          $s5, 0xC($s1)
    ctx->pc = 0x4a9674u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4a9678: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x4a9678u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4a967c: 0x2afa823  subu        $s5, $s5, $t7
    ctx->pc = 0x4a967cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
    // 0x4a9680: 0x6a10003  bgez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9680u;
    {
        const bool branch_taken_0x4a9680 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x4A9684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9680u;
            // 0x4a9684: 0x157883  sra         $t7, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9680) {
            ctx->pc = 0x4A9690u;
            goto label_4a9690;
        }
    }
    ctx->pc = 0x4A9688u;
    // 0x4a9688: 0x26af0003  addiu       $t7, $s5, 0x3
    ctx->pc = 0x4a9688u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x4a968c: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x4a968cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
label_4a9690:
    // 0x4a9690: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x4a9690u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_4a9694:
    // 0x4a9694: 0xe79c0  sll         $t7, $t6, 7
    ctx->pc = 0x4a9694u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 7));
label_4a9698:
    // 0x4a9698: 0x8e6e001c  lw          $t6, 0x1C($s3)
    ctx->pc = 0x4a9698u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x4a969c: 0x1e31823  subu        $v1, $t7, $v1
    ctx->pc = 0x4a969cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x4a96a0: 0x163a821  addu        $s5, $t3, $v1
    ctx->pc = 0x4a96a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x4a96a4: 0x56ae0005  bnel        $s5, $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A96A4u;
    {
        const bool branch_taken_0x4a96a4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 14));
        if (branch_taken_0x4a96a4) {
            ctx->pc = 0x4A96A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A96A4u;
            // 0x4a96a8: 0x202082b  sltu        $at, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A96BCu;
            goto label_4a96bc;
        }
    }
    ctx->pc = 0x4A96ACu;
    // 0x4a96ac: 0xc0b64ec  jal         func_2D93B0
    ctx->pc = 0x4A96ACu;
    SET_GPR_U32(ctx, 31, 0x4A96B4u);
    ctx->pc = 0x4A96B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A96ACu;
            // 0x4a96b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D93B0u;
    if (runtime->hasFunction(0x2D93B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A96B4u; }
        if (ctx->pc != 0x4A96B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D93B0_0x2d93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A96B4u; }
        if (ctx->pc != 0x4A96B4u) { return; }
    }
    ctx->pc = 0x4A96B4u;
label_4a96b4:
    // 0x4a96b4: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x4A96B4u;
    {
        const bool branch_taken_0x4a96b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a96b4) {
            ctx->pc = 0x4A9988u;
            goto label_4a9988;
        }
    }
    ctx->pc = 0x4A96BCu;
label_4a96bc:
    // 0x4a96bc: 0x50200057  beql        $at, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x4A96BCu;
    {
        const bool branch_taken_0x4a96bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a96bc) {
            ctx->pc = 0x4A96C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A96BCu;
            // 0x4a96c0: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A981Cu;
            goto label_4a981c;
        }
    }
    ctx->pc = 0x4A96C4u;
    // 0x4a96c4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4a96c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4a96c8: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x4a96c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x4a96cc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4a96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4a96d0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x4a96d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4a96d4: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x4a96d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    // 0x4a96d8: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x4a96d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x4a96dc: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x4a96dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4a96e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a96e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a96e4: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x4a96e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
    // 0x4a96e8: 0xafa30144  sw          $v1, 0x144($sp)
    ctx->pc = 0x4a96e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 3));
    // 0x4a96ec: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x4a96ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x4a96f0: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x4a96f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4a96f4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4a96f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a96f8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4a96f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4a96fc: 0xafa60140  sw          $a2, 0x140($sp)
    ctx->pc = 0x4a96fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 6));
    // 0x4a9700: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x4a9700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x4a9704: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x4a9704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x4a9708: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x4a9708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a970c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x4a970cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4a9710: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x4a9710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x4a9714: 0xafa60154  sw          $a2, 0x154($sp)
    ctx->pc = 0x4a9714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 6));
    // 0x4a9718: 0xafa30164  sw          $v1, 0x164($sp)
    ctx->pc = 0x4a9718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 3));
    // 0x4a971c: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x4a971cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x4a9720: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x4a9720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4a9724: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x4a9724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x4a9728: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x4a9728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x4a972c: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x4a972cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x4a9730: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4a9730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x4a9734: 0xafad0170  sw          $t5, 0x170($sp)
    ctx->pc = 0x4a9734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 13));
    // 0x4a9738: 0xafaa0180  sw          $t2, 0x180($sp)
    ctx->pc = 0x4a9738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 10));
    // 0x4a973c: 0xafa90184  sw          $t1, 0x184($sp)
    ctx->pc = 0x4a973cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 9));
    // 0x4a9740: 0xafa60160  sw          $a2, 0x160($sp)
    ctx->pc = 0x4a9740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 6));
    // 0x4a9744: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x4a9744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
    // 0x4a9748: 0xc12a6e4  jal         func_4A9B90
    ctx->pc = 0x4A9748u;
    SET_GPR_U32(ctx, 31, 0x4A9750u);
    ctx->pc = 0x4A974Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9748u;
            // 0x4a974c: 0xafa2017c  sw          $v0, 0x17C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9B90u;
    if (runtime->hasFunction(0x4A9B90u)) {
        auto targetFn = runtime->lookupFunction(0x4A9B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9750u; }
        if (ctx->pc != 0x4A9750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9B90_0x4a9b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9750u; }
        if (ctx->pc != 0x4A9750u) { return; }
    }
    ctx->pc = 0x4A9750u;
label_4a9750:
    // 0x4a9750: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A9750u;
    {
        const bool branch_taken_0x4a9750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9750) {
            ctx->pc = 0x4A9798u;
            goto label_4a9798;
        }
    }
    ctx->pc = 0x4A9758u;
label_4a9758:
    // 0x4a9758: 0xc12a6f0  jal         func_4A9BC0
    ctx->pc = 0x4A9758u;
    SET_GPR_U32(ctx, 31, 0x4A9760u);
    ctx->pc = 0x4A975Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9758u;
            // 0x4a975c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9BC0u;
    if (runtime->hasFunction(0x4A9BC0u)) {
        auto targetFn = runtime->lookupFunction(0x4A9BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9760u; }
        if (ctx->pc != 0x4A9760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9BC0_0x4a9bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9760u; }
        if (ctx->pc != 0x4A9760u) { return; }
    }
    ctx->pc = 0x4A9760u;
label_4a9760:
    // 0x4a9760: 0xc12a6ec  jal         func_4A9BB0
    ctx->pc = 0x4A9760u;
    SET_GPR_U32(ctx, 31, 0x4A9768u);
    ctx->pc = 0x4A9764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9760u;
            // 0x4a9764: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9BB0u;
    if (runtime->hasFunction(0x4A9BB0u)) {
        auto targetFn = runtime->lookupFunction(0x4A9BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9768u; }
        if (ctx->pc != 0x4A9768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9BB0_0x4a9bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9768u; }
        if (ctx->pc != 0x4A9768u) { return; }
    }
    ctx->pc = 0x4A9768u;
label_4a9768:
    // 0x4a9768: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4a9768u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a976c: 0xc12a6f0  jal         func_4A9BC0
    ctx->pc = 0x4A976Cu;
    SET_GPR_U32(ctx, 31, 0x4A9774u);
    ctx->pc = 0x4A9770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A976Cu;
            // 0x4a9770: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9BC0u;
    if (runtime->hasFunction(0x4A9BC0u)) {
        auto targetFn = runtime->lookupFunction(0x4A9BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9774u; }
        if (ctx->pc != 0x4A9774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9BC0_0x4a9bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9774u; }
        if (ctx->pc != 0x4A9774u) { return; }
    }
    ctx->pc = 0x4A9774u;
label_4a9774:
    // 0x4a9774: 0xc12a6ec  jal         func_4A9BB0
    ctx->pc = 0x4A9774u;
    SET_GPR_U32(ctx, 31, 0x4A977Cu);
    ctx->pc = 0x4A9778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9774u;
            // 0x4a9778: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9BB0u;
    if (runtime->hasFunction(0x4A9BB0u)) {
        auto targetFn = runtime->lookupFunction(0x4A9BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A977Cu; }
        if (ctx->pc != 0x4A977Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9BB0_0x4a9bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A977Cu; }
        if (ctx->pc != 0x4A977Cu) { return; }
    }
    ctx->pc = 0x4A977Cu;
label_4a977c:
    // 0x4a977c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x4a977cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x4a9780: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4a9780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x4a9784: 0xc12a6e4  jal         func_4A9B90
    ctx->pc = 0x4A9784u;
    SET_GPR_U32(ctx, 31, 0x4A978Cu);
    ctx->pc = 0x4A9788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9784u;
            // 0x4a9788: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9B90u;
    if (runtime->hasFunction(0x4A9B90u)) {
        auto targetFn = runtime->lookupFunction(0x4A9B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A978Cu; }
        if (ctx->pc != 0x4A978Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9B90_0x4a9b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A978Cu; }
        if (ctx->pc != 0x4A978Cu) { return; }
    }
    ctx->pc = 0x4A978Cu;
label_4a978c:
    // 0x4a978c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x4A978Cu;
    {
        const bool branch_taken_0x4a978c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a978c) {
            ctx->pc = 0x4A9758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a9758;
        }
    }
    ctx->pc = 0x4A9794u;
    // 0x4a9794: 0x0  nop
    ctx->pc = 0x4a9794u;
    // NOP
label_4a9798:
    // 0x4a9798: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x4a9798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x4a979c: 0xc12a6d4  jal         func_4A9B50
    ctx->pc = 0x4A979Cu;
    SET_GPR_U32(ctx, 31, 0x4A97A4u);
    ctx->pc = 0x4A97A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A979Cu;
            // 0x4a97a0: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9B50u;
    if (runtime->hasFunction(0x4A9B50u)) {
        auto targetFn = runtime->lookupFunction(0x4A9B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A97A4u; }
        if (ctx->pc != 0x4A97A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9B50_0x4a9b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A97A4u; }
        if (ctx->pc != 0x4A97A4u) { return; }
    }
    ctx->pc = 0x4A97A4u;
label_4a97a4:
    // 0x4a97a4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x4a97a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4a97a8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4a97a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x4a97ac: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x4a97acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x4a97b0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x4a97b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x4a97b4: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x4a97b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x4a97b8: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x4a97b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    // 0x4a97bc: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x4a97bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4a97c0: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x4a97c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x4a97c4: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x4A97C4u;
    {
        const bool branch_taken_0x4a97c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a97c4) {
            ctx->pc = 0x4A9988u;
            goto label_4a9988;
        }
    }
    ctx->pc = 0x4A97CCu;
    // 0x4a97cc: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x4A97CCu;
    {
        const bool branch_taken_0x4a97cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A97D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A97CCu;
            // 0x4a97d0: 0x26710004  addiu       $s1, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a97cc) {
            ctx->pc = 0x4A9988u;
            goto label_4a9988;
        }
    }
    ctx->pc = 0x4A97D4u;
label_4a97d4:
    // 0x4a97d4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4a97d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4a97d8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4a97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4a97dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a97dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4a97e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a97e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a97e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4a97e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a97e8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A97E8u;
    {
        const bool branch_taken_0x4a97e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a97e8) {
            ctx->pc = 0x4A97F8u;
            goto label_4a97f8;
        }
    }
    ctx->pc = 0x4A97F0u;
    // 0x4a97f0: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x4A97F0u;
    SET_GPR_U32(ctx, 31, 0x4A97F8u);
    ctx->pc = 0x4A97F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A97F0u;
            // 0x4a97f4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A97F8u; }
        if (ctx->pc != 0x4A97F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A97F8u; }
        if (ctx->pc != 0x4A97F8u) { return; }
    }
    ctx->pc = 0x4A97F8u;
label_4a97f8:
    // 0x4a97f8: 0xc0b6368  jal         func_2D8DA0
    ctx->pc = 0x4A97F8u;
    SET_GPR_U32(ctx, 31, 0x4A9800u);
    ctx->pc = 0x4A97FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A97F8u;
            // 0x4a97fc: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8DA0u;
    if (runtime->hasFunction(0x2D8DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9800u; }
        if (ctx->pc != 0x4A9800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8DA0_0x2d8da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9800u; }
        if (ctx->pc != 0x4A9800u) { return; }
    }
    ctx->pc = 0x4A9800u;
label_4a9800:
    // 0x4a9800: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x4a9800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4a9804: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x4a9804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x4a9808: 0x2c410100  sltiu       $at, $v0, 0x100
    ctx->pc = 0x4a9808u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x4a980c: 0x1020fff1  beqz        $at, . + 4 + (-0xF << 2)
    ctx->pc = 0x4A980Cu;
    {
        const bool branch_taken_0x4a980c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A980Cu;
            // 0x4a9810: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a980c) {
            ctx->pc = 0x4A97D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a97d4;
        }
    }
    ctx->pc = 0x4A9814u;
    // 0x4a9814: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x4A9814u;
    {
        const bool branch_taken_0x4a9814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9814) {
            ctx->pc = 0x4A9988u;
            goto label_4a9988;
        }
    }
    ctx->pc = 0x4A981Cu;
label_4a981c:
    // 0x4a981c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4a981cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x4a9820: 0xafa600e4  sw          $a2, 0xE4($sp)
    ctx->pc = 0x4a9820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 6));
    // 0x4a9824: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x4a9824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a9828: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x4a9828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x4a982c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4a982cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a9830: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x4a9830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x4a9834: 0xafa600b4  sw          $a2, 0xB4($sp)
    ctx->pc = 0x4a9834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 6));
    // 0x4a9838: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x4a9838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x4a983c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x4a983cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x4a9840: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x4a9840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4a9844: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x4a9844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4a9848: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4a9848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4a984c: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x4a984cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x4a9850: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x4a9850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x4a9854: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x4a9854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x4a9858: 0x8fa601bc  lw          $a2, 0x1BC($sp)
    ctx->pc = 0x4a9858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x4a985c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a985cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a9860: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4a9860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4a9864: 0xafa600dc  sw          $a2, 0xDC($sp)
    ctx->pc = 0x4a9864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
    // 0x4a9868: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x4a9868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x4a986c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x4a986cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x4a9870: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4a9870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4a9874: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4a9874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4a9878: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4a9878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4a987c: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x4a987cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x4a9880: 0xafac00b0  sw          $t4, 0xB0($sp)
    ctx->pc = 0x4a9880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 12));
    // 0x4a9884: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x4a9884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x4a9888: 0xafa800d8  sw          $t0, 0xD8($sp)
    ctx->pc = 0x4a9888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 8));
    // 0x4a988c: 0xafa700e0  sw          $a3, 0xE0($sp)
    ctx->pc = 0x4a988cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 7));
    // 0x4a9890: 0xafa600f8  sw          $a2, 0xF8($sp)
    ctx->pc = 0x4a9890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
    // 0x4a9894: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x4a9894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x4a9898: 0xc12a6e4  jal         func_4A9B90
    ctx->pc = 0x4A9898u;
    SET_GPR_U32(ctx, 31, 0x4A98A0u);
    ctx->pc = 0x4A989Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9898u;
            // 0x4a989c: 0xafa20104  sw          $v0, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9B90u;
    if (runtime->hasFunction(0x4A9B90u)) {
        auto targetFn = runtime->lookupFunction(0x4A9B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A98A0u; }
        if (ctx->pc != 0x4A98A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9B90_0x4a9b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A98A0u; }
        if (ctx->pc != 0x4A98A0u) { return; }
    }
    ctx->pc = 0x4A98A0u;
label_4a98a0:
    // 0x4a98a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A98A0u;
    {
        const bool branch_taken_0x4a98a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a98a0) {
            ctx->pc = 0x4A98E8u;
            goto label_4a98e8;
        }
    }
    ctx->pc = 0x4A98A8u;
label_4a98a8:
    // 0x4a98a8: 0xc12a6ec  jal         func_4A9BB0
    ctx->pc = 0x4A98A8u;
    SET_GPR_U32(ctx, 31, 0x4A98B0u);
    ctx->pc = 0x4A98ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A98A8u;
            // 0x4a98ac: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9BB0u;
    if (runtime->hasFunction(0x4A9BB0u)) {
        auto targetFn = runtime->lookupFunction(0x4A9BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A98B0u; }
        if (ctx->pc != 0x4A98B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9BB0_0x4a9bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A98B0u; }
        if (ctx->pc != 0x4A98B0u) { return; }
    }
    ctx->pc = 0x4A98B0u;
label_4a98b0:
    // 0x4a98b0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4a98b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a98b4: 0xc12a6ec  jal         func_4A9BB0
    ctx->pc = 0x4A98B4u;
    SET_GPR_U32(ctx, 31, 0x4A98BCu);
    ctx->pc = 0x4A98B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A98B4u;
            // 0x4a98b8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9BB0u;
    if (runtime->hasFunction(0x4A9BB0u)) {
        auto targetFn = runtime->lookupFunction(0x4A9BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A98BCu; }
        if (ctx->pc != 0x4A98BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9BB0_0x4a9bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A98BCu; }
        if (ctx->pc != 0x4A98BCu) { return; }
    }
    ctx->pc = 0x4A98BCu;
label_4a98bc:
    // 0x4a98bc: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x4a98bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x4a98c0: 0xc12a6bc  jal         func_4A9AF0
    ctx->pc = 0x4A98C0u;
    SET_GPR_U32(ctx, 31, 0x4A98C8u);
    ctx->pc = 0x4A98C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A98C0u;
            // 0x4a98c4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9AF0u;
    if (runtime->hasFunction(0x4A9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x4A9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A98C8u; }
        if (ctx->pc != 0x4A98C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9AF0_0x4a9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A98C8u; }
        if (ctx->pc != 0x4A98C8u) { return; }
    }
    ctx->pc = 0x4A98C8u;
label_4a98c8:
    // 0x4a98c8: 0xc12a6bc  jal         func_4A9AF0
    ctx->pc = 0x4A98C8u;
    SET_GPR_U32(ctx, 31, 0x4A98D0u);
    ctx->pc = 0x4A98CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A98C8u;
            // 0x4a98cc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9AF0u;
    if (runtime->hasFunction(0x4A9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x4A9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A98D0u; }
        if (ctx->pc != 0x4A98D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9AF0_0x4a9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A98D0u; }
        if (ctx->pc != 0x4A98D0u) { return; }
    }
    ctx->pc = 0x4A98D0u;
label_4a98d0:
    // 0x4a98d0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4a98d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x4a98d4: 0xc12a6e4  jal         func_4A9B90
    ctx->pc = 0x4A98D4u;
    SET_GPR_U32(ctx, 31, 0x4A98DCu);
    ctx->pc = 0x4A98D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A98D4u;
            // 0x4a98d8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9B90u;
    if (runtime->hasFunction(0x4A9B90u)) {
        auto targetFn = runtime->lookupFunction(0x4A9B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A98DCu; }
        if (ctx->pc != 0x4A98DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9B90_0x4a9b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A98DCu; }
        if (ctx->pc != 0x4A98DCu) { return; }
    }
    ctx->pc = 0x4A98DCu;
label_4a98dc:
    // 0x4a98dc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x4A98DCu;
    {
        const bool branch_taken_0x4a98dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a98dc) {
            ctx->pc = 0x4A98A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a98a8;
        }
    }
    ctx->pc = 0x4A98E4u;
    // 0x4a98e4: 0x0  nop
    ctx->pc = 0x4a98e4u;
    // NOP
label_4a98e8:
    // 0x4a98e8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x4a98e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x4a98ec: 0xc12a6d4  jal         func_4A9B50
    ctx->pc = 0x4A98ECu;
    SET_GPR_U32(ctx, 31, 0x4A98F4u);
    ctx->pc = 0x4A98F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A98ECu;
            // 0x4a98f0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9B50u;
    if (runtime->hasFunction(0x4A9B50u)) {
        auto targetFn = runtime->lookupFunction(0x4A9B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A98F4u; }
        if (ctx->pc != 0x4A98F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9B50_0x4a9b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A98F4u; }
        if (ctx->pc != 0x4A98F4u) { return; }
    }
    ctx->pc = 0x4A98F4u;
label_4a98f4:
    // 0x4a98f4: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x4a98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x4a98f8: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x4a98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x4a98fc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4A98FCu;
    {
        const bool branch_taken_0x4a98fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A98FCu;
            // 0x4a9900: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a98fc) {
            ctx->pc = 0x4A9950u;
            goto label_4a9950;
        }
    }
    ctx->pc = 0x4A9904u;
label_4a9904:
    // 0x4a9904: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x4a9904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a9908: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x4a9908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
    // 0x4a990c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x4a990cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4a9910: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x4a9910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4a9914: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4a9914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4a9918: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4a9918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4a991c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4a991cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4a9920: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x4a9920u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x4a9924: 0x1810  mfhi        $v1
    ctx->pc = 0x4a9924u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4a9928: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a9928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4a992c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x4a992cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a9930: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4a9930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a9934: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A9934u;
    {
        const bool branch_taken_0x4a9934 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9934) {
            ctx->pc = 0x4A9948u;
            goto label_4a9948;
        }
    }
    ctx->pc = 0x4A993Cu;
    // 0x4a993c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x4A993Cu;
    SET_GPR_U32(ctx, 31, 0x4A9944u);
    ctx->pc = 0x4A9940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A993Cu;
            // 0x4a9940: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9944u; }
        if (ctx->pc != 0x4A9944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9944u; }
        if (ctx->pc != 0x4A9944u) { return; }
    }
    ctx->pc = 0x4A9944u;
label_4a9944:
    // 0x4a9944: 0x0  nop
    ctx->pc = 0x4a9944u;
    // NOP
label_4a9948:
    // 0x4a9948: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4a9948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x4a994c: 0x0  nop
    ctx->pc = 0x4a994cu;
    // NOP
label_4a9950:
    // 0x4a9950: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x4a9950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x4a9954: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9954u;
    {
        const bool branch_taken_0x4a9954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a9954) {
            ctx->pc = 0x4A9958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9954u;
            // 0x4a9958: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9964u;
            goto label_4a9964;
        }
    }
    ctx->pc = 0x4A995Cu;
    // 0x4a995c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A995Cu;
    {
        const bool branch_taken_0x4a995c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A995Cu;
            // 0x4a9960: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a995c) {
            ctx->pc = 0x4A9968u;
            goto label_4a9968;
        }
    }
    ctx->pc = 0x4A9964u;
label_4a9964:
    // 0x4a9964: 0x221c0  sll         $a0, $v0, 7
    ctx->pc = 0x4a9964u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_4a9968:
    // 0x4a9968: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x4a9968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4a996c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x4a996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x4a9970: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4a9970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a9974: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x4a9974u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a9978: 0x2c410100  sltiu       $at, $v0, 0x100
    ctx->pc = 0x4a9978u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x4a997c: 0x5020ffe1  beql        $at, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x4A997Cu;
    {
        const bool branch_taken_0x4a997c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a997c) {
            ctx->pc = 0x4A9980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A997Cu;
            // 0x4a9980: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a9904;
        }
    }
    ctx->pc = 0x4A9984u;
    // 0x4a9984: 0x0  nop
    ctx->pc = 0x4a9984u;
    // NOP
label_4a9988:
    // 0x4a9988: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a9988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a998c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4a998cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4a9990: 0xc12a7a0  jal         func_4A9E80
    ctx->pc = 0x4A9990u;
    SET_GPR_U32(ctx, 31, 0x4A9998u);
    ctx->pc = 0x4A9994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9990u;
            // 0x4a9994: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9998u; }
        if (ctx->pc != 0x4A9998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9998u; }
        if (ctx->pc != 0x4A9998u) { return; }
    }
    ctx->pc = 0x4A9998u;
label_4a9998:
    // 0x4a9998: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4a9998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4a999c: 0xc12a6d4  jal         func_4A9B50
    ctx->pc = 0x4A999Cu;
    SET_GPR_U32(ctx, 31, 0x4A99A4u);
    ctx->pc = 0x4A99A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A999Cu;
            // 0x4a99a0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9B50u;
    if (runtime->hasFunction(0x4A9B50u)) {
        auto targetFn = runtime->lookupFunction(0x4A9B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A99A4u; }
        if (ctx->pc != 0x4A99A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9B50_0x4a9b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A99A4u; }
        if (ctx->pc != 0x4A99A4u) { return; }
    }
    ctx->pc = 0x4A99A4u;
label_4a99a4:
    // 0x4a99a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a99a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a99a8: 0xc12a678  jal         func_4A99E0
    ctx->pc = 0x4A99A8u;
    SET_GPR_U32(ctx, 31, 0x4A99B0u);
    ctx->pc = 0x4A99ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A99A8u;
            // 0x4a99ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A99E0u;
    if (runtime->hasFunction(0x4A99E0u)) {
        auto targetFn = runtime->lookupFunction(0x4A99E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A99B0u; }
        if (ctx->pc != 0x4A99B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A99E0_0x4a99e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A99B0u; }
        if (ctx->pc != 0x4A99B0u) { return; }
    }
    ctx->pc = 0x4A99B0u;
label_4a99b0:
    // 0x4a99b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4a99b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a99b4: 0xc12a6d4  jal         func_4A9B50
    ctx->pc = 0x4A99B4u;
    SET_GPR_U32(ctx, 31, 0x4A99BCu);
    ctx->pc = 0x4A99B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A99B4u;
            // 0x4a99b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9B50u;
    if (runtime->hasFunction(0x4A9B50u)) {
        auto targetFn = runtime->lookupFunction(0x4A9B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A99BCu; }
        if (ctx->pc != 0x4A99BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9B50_0x4a9b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A99BCu; }
        if (ctx->pc != 0x4A99BCu) { return; }
    }
    ctx->pc = 0x4A99BCu;
label_4a99bc:
    // 0x4a99bc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4a99bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a99c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4a99c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a99c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a99c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a99c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a99c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a99cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a99ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a99d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a99d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a99d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a99d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a99d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A99D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A99DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A99D8u;
            // 0x4a99dc: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A99E0u;
}
