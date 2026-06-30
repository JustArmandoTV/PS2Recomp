#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00502340
// Address: 0x502340 - 0x5024c0
void sub_00502340_0x502340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00502340_0x502340");
#endif

    switch (ctx->pc) {
        case 0x50238cu: goto label_50238c;
        case 0x5023b4u: goto label_5023b4;
        case 0x5023c0u: goto label_5023c0;
        case 0x5023d0u: goto label_5023d0;
        case 0x5023dcu: goto label_5023dc;
        case 0x5023e8u: goto label_5023e8;
        case 0x5023f0u: goto label_5023f0;
        case 0x5023fcu: goto label_5023fc;
        case 0x50240cu: goto label_50240c;
        case 0x502420u: goto label_502420;
        case 0x502428u: goto label_502428;
        case 0x502434u: goto label_502434;
        case 0x50244cu: goto label_50244c;
        default: break;
    }

    ctx->pc = 0x502340u;

    // 0x502340: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x502340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x502344: 0x851826  xor         $v1, $a0, $a1
    ctx->pc = 0x502344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x502348: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x502348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x50234c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x50234cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x502350: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x502350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x502354: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x502354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x502358: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x502358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x50235c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50235cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x502360: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x502360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x502364: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x502364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x502368: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x502368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50236c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x502370: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x502370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x502374: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x502374u;
    {
        const bool branch_taken_0x502374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x502378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502374u;
            // 0x502378: 0xafa40068  sw          $a0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502374) {
            ctx->pc = 0x5024A0u;
            goto label_5024a0;
        }
    }
    ctx->pc = 0x50237Cu;
    // 0x50237c: 0x24b0fffc  addiu       $s0, $a1, -0x4
    ctx->pc = 0x50237cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x502380: 0x90082b  sltu        $at, $a0, $s0
    ctx->pc = 0x502380u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x502384: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x502384u;
    {
        const bool branch_taken_0x502384 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x502384) {
            ctx->pc = 0x5024A0u;
            goto label_5024a0;
        }
    }
    ctx->pc = 0x50238Cu;
label_50238c:
    // 0x50238c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x50238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x502390: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x502390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x502394: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x502394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x502398: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x502398u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x50239c: 0xa0720000  sb          $s2, 0x0($v1)
    ctx->pc = 0x50239cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x5023a0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x5023a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x5023a4: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x5023a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x5023a8: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x5023a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x5023ac: 0xc14094c  jal         func_502530
    ctx->pc = 0x5023ACu;
    SET_GPR_U32(ctx, 31, 0x5023B4u);
    ctx->pc = 0x5023B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5023ACu;
            // 0x5023b0: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x502530u;
    if (runtime->hasFunction(0x502530u)) {
        auto targetFn = runtime->lookupFunction(0x502530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5023B4u; }
        if (ctx->pc != 0x5023B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00502530_0x502530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5023B4u; }
        if (ctx->pc != 0x5023B4u) { return; }
    }
    ctx->pc = 0x5023B4u;
label_5023b4:
    // 0x5023b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x5023b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x5023b8: 0xc140138  jal         func_5004E0
    ctx->pc = 0x5023B8u;
    SET_GPR_U32(ctx, 31, 0x5023C0u);
    ctx->pc = 0x5023BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5023B8u;
            // 0x5023bc: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5004E0u;
    if (runtime->hasFunction(0x5004E0u)) {
        auto targetFn = runtime->lookupFunction(0x5004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5023C0u; }
        if (ctx->pc != 0x5023C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005004E0_0x5004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5023C0u; }
        if (ctx->pc != 0x5023C0u) { return; }
    }
    ctx->pc = 0x5023C0u;
label_5023c0:
    // 0x5023c0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x5023C0u;
    {
        const bool branch_taken_0x5023c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5023c0) {
            ctx->pc = 0x502440u;
            goto label_502440;
        }
    }
    ctx->pc = 0x5023C8u;
    // 0x5023c8: 0xc140140  jal         func_500500
    ctx->pc = 0x5023C8u;
    SET_GPR_U32(ctx, 31, 0x5023D0u);
    ctx->pc = 0x5023CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5023C8u;
            // 0x5023cc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500500u;
    if (runtime->hasFunction(0x500500u)) {
        auto targetFn = runtime->lookupFunction(0x500500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5023D0u; }
        if (ctx->pc != 0x5023D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500500_0x500500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5023D0u; }
        if (ctx->pc != 0x5023D0u) { return; }
    }
    ctx->pc = 0x5023D0u;
label_5023d0:
    // 0x5023d0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x5023d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x5023d4: 0xc140138  jal         func_5004E0
    ctx->pc = 0x5023D4u;
    SET_GPR_U32(ctx, 31, 0x5023DCu);
    ctx->pc = 0x5023D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5023D4u;
            // 0x5023d8: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5004E0u;
    if (runtime->hasFunction(0x5004E0u)) {
        auto targetFn = runtime->lookupFunction(0x5004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5023DCu; }
        if (ctx->pc != 0x5023DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005004E0_0x5004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5023DCu; }
        if (ctx->pc != 0x5023DCu) { return; }
    }
    ctx->pc = 0x5023DCu;
label_5023dc:
    // 0x5023dc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x5023DCu;
    {
        const bool branch_taken_0x5023dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5023dc) {
            ctx->pc = 0x502440u;
            goto label_502440;
        }
    }
    ctx->pc = 0x5023E4u;
    // 0x5023e4: 0x0  nop
    ctx->pc = 0x5023e4u;
    // NOP
label_5023e8:
    // 0x5023e8: 0xc14020c  jal         func_500830
    ctx->pc = 0x5023E8u;
    SET_GPR_U32(ctx, 31, 0x5023F0u);
    ctx->pc = 0x5023ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5023E8u;
            // 0x5023ec: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500830u;
    if (runtime->hasFunction(0x500830u)) {
        auto targetFn = runtime->lookupFunction(0x500830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5023F0u; }
        if (ctx->pc != 0x5023F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500830_0x500830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5023F0u; }
        if (ctx->pc != 0x5023F0u) { return; }
    }
    ctx->pc = 0x5023F0u;
label_5023f0:
    // 0x5023f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x5023f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5023f4: 0xc14020c  jal         func_500830
    ctx->pc = 0x5023F4u;
    SET_GPR_U32(ctx, 31, 0x5023FCu);
    ctx->pc = 0x5023F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5023F4u;
            // 0x5023f8: 0x27a40074  addiu       $a0, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500830u;
    if (runtime->hasFunction(0x500830u)) {
        auto targetFn = runtime->lookupFunction(0x500830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5023FCu; }
        if (ctx->pc != 0x5023FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500830_0x500830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5023FCu; }
        if (ctx->pc != 0x5023FCu) { return; }
    }
    ctx->pc = 0x5023FCu;
label_5023fc:
    // 0x5023fc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x5023fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x502400: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x502400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x502404: 0xc140934  jal         func_5024D0
    ctx->pc = 0x502404u;
    SET_GPR_U32(ctx, 31, 0x50240Cu);
    ctx->pc = 0x502408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502404u;
            // 0x502408: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5024D0u;
    if (runtime->hasFunction(0x5024D0u)) {
        auto targetFn = runtime->lookupFunction(0x5024D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50240Cu; }
        if (ctx->pc != 0x50240Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005024D0_0x5024d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50240Cu; }
        if (ctx->pc != 0x50240Cu) { return; }
    }
    ctx->pc = 0x50240Cu;
label_50240c:
    // 0x50240c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x50240Cu;
    {
        const bool branch_taken_0x50240c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50240c) {
            ctx->pc = 0x502420u;
            goto label_502420;
        }
    }
    ctx->pc = 0x502414u;
    // 0x502414: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x502414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x502418: 0xc140930  jal         func_5024C0
    ctx->pc = 0x502418u;
    SET_GPR_U32(ctx, 31, 0x502420u);
    ctx->pc = 0x50241Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502418u;
            // 0x50241c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5024C0u;
    if (runtime->hasFunction(0x5024C0u)) {
        auto targetFn = runtime->lookupFunction(0x5024C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502420u; }
        if (ctx->pc != 0x502420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005024C0_0x5024c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502420u; }
        if (ctx->pc != 0x502420u) { return; }
    }
    ctx->pc = 0x502420u;
label_502420:
    // 0x502420: 0xc140140  jal         func_500500
    ctx->pc = 0x502420u;
    SET_GPR_U32(ctx, 31, 0x502428u);
    ctx->pc = 0x502424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502420u;
            // 0x502424: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500500u;
    if (runtime->hasFunction(0x500500u)) {
        auto targetFn = runtime->lookupFunction(0x500500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502428u; }
        if (ctx->pc != 0x502428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500500_0x500500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502428u; }
        if (ctx->pc != 0x502428u) { return; }
    }
    ctx->pc = 0x502428u;
label_502428:
    // 0x502428: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x502428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x50242c: 0xc140138  jal         func_5004E0
    ctx->pc = 0x50242Cu;
    SET_GPR_U32(ctx, 31, 0x502434u);
    ctx->pc = 0x502430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50242Cu;
            // 0x502430: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5004E0u;
    if (runtime->hasFunction(0x5004E0u)) {
        auto targetFn = runtime->lookupFunction(0x5004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502434u; }
        if (ctx->pc != 0x502434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005004E0_0x5004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502434u; }
        if (ctx->pc != 0x502434u) { return; }
    }
    ctx->pc = 0x502434u;
label_502434:
    // 0x502434: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x502434u;
    {
        const bool branch_taken_0x502434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x502434) {
            ctx->pc = 0x5023E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5023e8;
        }
    }
    ctx->pc = 0x50243Cu;
    // 0x50243c: 0x0  nop
    ctx->pc = 0x50243cu;
    // NOP
label_502440:
    // 0x502440: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x502440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x502444: 0xc14094c  jal         func_502530
    ctx->pc = 0x502444u;
    SET_GPR_U32(ctx, 31, 0x50244Cu);
    ctx->pc = 0x502448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502444u;
            // 0x502448: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502530u;
    if (runtime->hasFunction(0x502530u)) {
        auto targetFn = runtime->lookupFunction(0x502530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50244Cu; }
        if (ctx->pc != 0x50244Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00502530_0x502530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50244Cu; }
        if (ctx->pc != 0x50244Cu) { return; }
    }
    ctx->pc = 0x50244Cu;
label_50244c:
    // 0x50244c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x50244cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x502450: 0x13303c  dsll32      $a2, $s3, 0
    ctx->pc = 0x502450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 0));
    // 0x502454: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x502454u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x502458: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x502458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x50245c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x50245cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x502460: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x502460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x502464: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x502464u;
    {
        const bool branch_taken_0x502464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x502464) {
            ctx->pc = 0x502480u;
            goto label_502480;
        }
    }
    ctx->pc = 0x50246Cu;
    // 0x50246c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x50246cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x502470: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x502470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x502474: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x502474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x502478: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x502478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50247c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x50247cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_502480:
    // 0x502480: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x502480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x502484: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x502484u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x502488: 0x24730004  addiu       $s3, $v1, 0x4
    ctx->pc = 0x502488u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x50248c: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x50248cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x502490: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x502490u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x502494: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x502494u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x502498: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x502498u;
    {
        const bool branch_taken_0x502498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x50249Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502498u;
            // 0x50249c: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502498) {
            ctx->pc = 0x50238Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50238c;
        }
    }
    ctx->pc = 0x5024A0u;
label_5024a0:
    // 0x5024a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x5024a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x5024a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5024a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5024a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5024a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5024ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5024acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5024b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5024b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5024b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5024b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5024b8: 0x3e00008  jr          $ra
    ctx->pc = 0x5024B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5024BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5024B8u;
            // 0x5024bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5024C0u;
}
