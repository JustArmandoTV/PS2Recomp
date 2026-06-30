#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00361410
// Address: 0x361410 - 0x361740
void sub_00361410_0x361410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361410_0x361410");
#endif

    switch (ctx->pc) {
        case 0x361448u: goto label_361448;
        case 0x36148cu: goto label_36148c;
        case 0x3614acu: goto label_3614ac;
        case 0x3614c0u: goto label_3614c0;
        case 0x36158cu: goto label_36158c;
        case 0x3615a8u: goto label_3615a8;
        case 0x361644u: goto label_361644;
        case 0x361670u: goto label_361670;
        default: break;
    }

    ctx->pc = 0x361410u;

    // 0x361410: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x361410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x361414: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x361414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x361418: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x361418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x36141c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36141cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x361420: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x361420u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361424: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x361424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x361428: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x361428u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36142c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36142cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x361430: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x361430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361434: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x361434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x361438: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x361438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x36143c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361440: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x361440u;
    {
        const bool branch_taken_0x361440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x361440u;
            // 0x361444: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361440) {
            ctx->pc = 0x361468u;
            goto label_361468;
        }
    }
    ctx->pc = 0x361448u;
label_361448:
    // 0x361448: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x361448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x36144c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x36144cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x361450: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x361450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361454: 0x0  nop
    ctx->pc = 0x361454u;
    // NOP
    // 0x361458: 0x0  nop
    ctx->pc = 0x361458u;
    // NOP
    // 0x36145c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36145Cu;
    {
        const bool branch_taken_0x36145c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36145c) {
            ctx->pc = 0x361448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_361448;
        }
    }
    ctx->pc = 0x361464u;
    // 0x361464: 0x0  nop
    ctx->pc = 0x361464u;
    // NOP
label_361468:
    // 0x361468: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x361468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
    // 0x36146c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x36146cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x361470: 0x440019  multu       $v0, $a0
    ctx->pc = 0x361470u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x361474: 0x1010  mfhi        $v0
    ctx->pc = 0x361474u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x361478: 0x28842  srl         $s1, $v0, 1
    ctx->pc = 0x361478u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x36147c: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x36147cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x361480: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x361480u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x361484: 0xc040138  jal         func_1004E0
    ctx->pc = 0x361484u;
    SET_GPR_U32(ctx, 31, 0x36148Cu);
    ctx->pc = 0x361488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361484u;
            // 0x361488: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36148Cu; }
        if (ctx->pc != 0x36148Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36148Cu; }
        if (ctx->pc != 0x36148Cu) { return; }
    }
    ctx->pc = 0x36148Cu;
label_36148c:
    // 0x36148c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x36148cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x361490: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x361490u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x361494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x361494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361498: 0x24a51520  addiu       $a1, $a1, 0x1520
    ctx->pc = 0x361498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5408));
    // 0x36149c: 0x24c63260  addiu       $a2, $a2, 0x3260
    ctx->pc = 0x36149cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12896));
    // 0x3614a0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x3614a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3614a4: 0xc040840  jal         func_102100
    ctx->pc = 0x3614A4u;
    SET_GPR_U32(ctx, 31, 0x3614ACu);
    ctx->pc = 0x3614A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3614A4u;
            // 0x3614a8: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3614ACu; }
        if (ctx->pc != 0x3614ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3614ACu; }
        if (ctx->pc != 0x3614ACu) { return; }
    }
    ctx->pc = 0x3614ACu;
label_3614ac:
    // 0x3614ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3614acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3614b0: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x3614b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x3614b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3614b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3614b8: 0xc075128  jal         func_1D44A0
    ctx->pc = 0x3614B8u;
    SET_GPR_U32(ctx, 31, 0x3614C0u);
    ctx->pc = 0x3614BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3614B8u;
            // 0x3614bc: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3614C0u; }
        if (ctx->pc != 0x3614C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3614C0u; }
        if (ctx->pc != 0x3614C0u) { return; }
    }
    ctx->pc = 0x3614C0u;
label_3614c0:
    // 0x3614c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3614c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3614c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3614c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3614c8: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x3614c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x3614cc: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x3614ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3614d0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3614d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3614d4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3614D4u;
    {
        const bool branch_taken_0x3614d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3614d4) {
            ctx->pc = 0x3614D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3614D4u;
            // 0x3614d8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3614E8u;
            goto label_3614e8;
        }
    }
    ctx->pc = 0x3614DCu;
    // 0x3614dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3614dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3614e0: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x3614e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x3614e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3614e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3614e8:
    // 0x3614e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3614e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3614ec: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3614ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x3614f0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3614f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3614f4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3614f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3614f8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3614F8u;
    {
        const bool branch_taken_0x3614f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3614f8) {
            ctx->pc = 0x3614FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3614F8u;
            // 0x3614fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36150Cu;
            goto label_36150c;
        }
    }
    ctx->pc = 0x361500u;
    // 0x361500: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361504: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x361504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x361508: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x361508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36150c:
    // 0x36150c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36150cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361510: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x361510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x361514: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x361518: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361518u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36151c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36151Cu;
    {
        const bool branch_taken_0x36151c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36151c) {
            ctx->pc = 0x361520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36151Cu;
            // 0x361520: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x361530u;
            goto label_361530;
        }
    }
    ctx->pc = 0x361524u;
    // 0x361524: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361528: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x361528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x36152c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x36152cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_361530:
    // 0x361530: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361534: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x361534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x361538: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36153c: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x36153cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x361540: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361540u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361544: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x361544u;
    {
        const bool branch_taken_0x361544 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361544) {
            ctx->pc = 0x361548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x361544u;
            // 0x361548: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x361558u;
            goto label_361558;
        }
    }
    ctx->pc = 0x36154Cu;
    // 0x36154c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36154cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361550: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x361550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x361554: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x361554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_361558:
    // 0x361558: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36155c: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x36155cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x361560: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x361564: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x361564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x361568: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361568u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36156c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36156Cu;
    {
        const bool branch_taken_0x36156c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36156c) {
            ctx->pc = 0x361570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36156Cu;
            // 0x361570: 0x26120020  addiu       $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x361580u;
            goto label_361580;
        }
    }
    ctx->pc = 0x361574u;
    // 0x361574: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361578: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x361578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x36157c: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x36157cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_361580:
    // 0x361580: 0x2630ffff  addiu       $s0, $s1, -0x1
    ctx->pc = 0x361580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x361584: 0x12000056  beqz        $s0, . + 4 + (0x56 << 2)
    ctx->pc = 0x361584u;
    {
        const bool branch_taken_0x361584 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x361584) {
            ctx->pc = 0x3616E0u;
            goto label_3616e0;
        }
    }
    ctx->pc = 0x36158Cu;
label_36158c:
    // 0x36158c: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x36158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x361590: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x361590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361594: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x361594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x361598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x361598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36159c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3615a0: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x3615A0u;
    SET_GPR_U32(ctx, 31, 0x3615A8u);
    ctx->pc = 0x3615A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3615A0u;
            // 0x3615a4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3615A8u; }
        if (ctx->pc != 0x3615A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3615A8u; }
        if (ctx->pc != 0x3615A8u) { return; }
    }
    ctx->pc = 0x3615A8u;
label_3615a8:
    // 0x3615a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3615a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3615ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3615acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3615b0: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3615b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
    // 0x3615b4: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3615b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x3615b8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3615b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3615bc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3615BCu;
    {
        const bool branch_taken_0x3615bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3615bc) {
            ctx->pc = 0x3615D0u;
            goto label_3615d0;
        }
    }
    ctx->pc = 0x3615C4u;
    // 0x3615c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3615c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3615c8: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3615c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
    // 0x3615cc: 0x0  nop
    ctx->pc = 0x3615ccu;
    // NOP
label_3615d0:
    // 0x3615d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3615d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3615d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3615d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3615d8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3615d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
    // 0x3615dc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3615dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x3615e0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3615e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3615e4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3615E4u;
    {
        const bool branch_taken_0x3615e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3615e4) {
            ctx->pc = 0x3615F8u;
            goto label_3615f8;
        }
    }
    ctx->pc = 0x3615ECu;
    // 0x3615ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3615ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3615f0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3615f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
    // 0x3615f4: 0x0  nop
    ctx->pc = 0x3615f4u;
    // NOP
label_3615f8:
    // 0x3615f8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3615f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3615fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3615fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x361600: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x361600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
    // 0x361604: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x361604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x361608: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x361608u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x36160c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x36160Cu;
    {
        const bool branch_taken_0x36160c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36160c) {
            ctx->pc = 0x361620u;
            goto label_361620;
        }
    }
    ctx->pc = 0x361614u;
    // 0x361614: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x361614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x361618: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x361618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
    // 0x36161c: 0x0  nop
    ctx->pc = 0x36161cu;
    // NOP
label_361620:
    // 0x361620: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x361620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x361624: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x361624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x361628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x361628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36162c: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x36162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x361630: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x361630u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x361634: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x361634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x361638: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x361638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x36163c: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x36163Cu;
    SET_GPR_U32(ctx, 31, 0x361644u);
    ctx->pc = 0x361640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36163Cu;
            // 0x361640: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361644u; }
        if (ctx->pc != 0x361644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361644u; }
        if (ctx->pc != 0x361644u) { return; }
    }
    ctx->pc = 0x361644u;
label_361644:
    // 0x361644: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x361644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x361648: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x361648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36164c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x36164cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x361650: 0x26460014  addiu       $a2, $s2, 0x14
    ctx->pc = 0x361650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x361654: 0x26470018  addiu       $a3, $s2, 0x18
    ctx->pc = 0x361654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x361658: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x361658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x36165c: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x36165cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x361660: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x361660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x361664: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x361664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x361668: 0xc075188  jal         func_1D4620
    ctx->pc = 0x361668u;
    SET_GPR_U32(ctx, 31, 0x361670u);
    ctx->pc = 0x36166Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361668u;
            // 0x36166c: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361670u; }
        if (ctx->pc != 0x361670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361670u; }
        if (ctx->pc != 0x361670u) { return; }
    }
    ctx->pc = 0x361670u;
label_361670:
    // 0x361670: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x361670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x361674: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361678: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x361678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36167c: 0xae840020  sw          $a0, 0x20($s4)
    ctx->pc = 0x36167cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 4));
    // 0x361680: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x361680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x361684: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x361684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x361688: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36168c: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x36168cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x361690: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361690u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361694: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x361694u;
    {
        const bool branch_taken_0x361694 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361694) {
            ctx->pc = 0x3616A8u;
            goto label_3616a8;
        }
    }
    ctx->pc = 0x36169Cu;
    // 0x36169c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36169cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3616a0: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3616a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x3616a4: 0x0  nop
    ctx->pc = 0x3616a4u;
    // NOP
label_3616a8:
    // 0x3616a8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3616a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3616ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3616acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3616b0: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3616b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x3616b4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3616b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3616b8: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x3616b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3616bc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3616bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3616c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3616C0u;
    {
        const bool branch_taken_0x3616c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3616c0) {
            ctx->pc = 0x3616D0u;
            goto label_3616d0;
        }
    }
    ctx->pc = 0x3616C8u;
    // 0x3616c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3616c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3616cc: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3616ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3616d0:
    // 0x3616d0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3616d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3616d4: 0x1600ffad  bnez        $s0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x3616D4u;
    {
        const bool branch_taken_0x3616d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3616D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3616D4u;
            // 0x3616d8: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3616d4) {
            ctx->pc = 0x36158Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36158c;
        }
    }
    ctx->pc = 0x3616DCu;
    // 0x3616dc: 0x0  nop
    ctx->pc = 0x3616dcu;
    // NOP
label_3616e0:
    // 0x3616e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3616e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3616e4: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x3616e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
    // 0x3616e8: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x3616e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3616ec: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3616ECu;
    {
        const bool branch_taken_0x3616ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3616ec) {
            ctx->pc = 0x3616FCu;
            goto label_3616fc;
        }
    }
    ctx->pc = 0x3616F4u;
    // 0x3616f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3616f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3616f8: 0xac73e3c8  sw          $s3, -0x1C38($v1)
    ctx->pc = 0x3616f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 19));
label_3616fc:
    // 0x3616fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3616fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361700: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x361700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
    // 0x361704: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x361704u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x361708: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x361708u;
    {
        const bool branch_taken_0x361708 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361708) {
            ctx->pc = 0x36170Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x361708u;
            // 0x36170c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36171Cu;
            goto label_36171c;
        }
    }
    ctx->pc = 0x361710u;
    // 0x361710: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361714: 0xac73e3d0  sw          $s3, -0x1C30($v1)
    ctx->pc = 0x361714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 19));
    // 0x361718: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x361718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_36171c:
    // 0x36171c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36171cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x361720: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x361720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361724: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x361724u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x361728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x361728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36172c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36172cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361730: 0x3e00008  jr          $ra
    ctx->pc = 0x361730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x361730u;
            // 0x361734: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x361738u;
    // 0x361738: 0x0  nop
    ctx->pc = 0x361738u;
    // NOP
    // 0x36173c: 0x0  nop
    ctx->pc = 0x36173cu;
    // NOP
}
