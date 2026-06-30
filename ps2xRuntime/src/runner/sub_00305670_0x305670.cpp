#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00305670
// Address: 0x305670 - 0x305770
void sub_00305670_0x305670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305670_0x305670");
#endif

    switch (ctx->pc) {
        case 0x305698u: goto label_305698;
        case 0x3056d4u: goto label_3056d4;
        case 0x3056e8u: goto label_3056e8;
        case 0x3056fcu: goto label_3056fc;
        case 0x305708u: goto label_305708;
        case 0x30571cu: goto label_30571c;
        case 0x305738u: goto label_305738;
        case 0x305740u: goto label_305740;
        case 0x305748u: goto label_305748;
        case 0x305754u: goto label_305754;
        default: break;
    }

    ctx->pc = 0x305670u;

    // 0x305670: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x305670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x305674: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x305674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x305678: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x305678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30567c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x305680: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x305680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305684: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x305684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x305688: 0x8c910d74  lw          $s1, 0xD74($a0)
    ctx->pc = 0x305688u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3444)));
    // 0x30568c: 0x26500580  addiu       $s0, $s2, 0x580
    ctx->pc = 0x30568cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x305690: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x305690u;
    SET_GPR_U32(ctx, 31, 0x305698u);
    ctx->pc = 0x305694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305690u;
            // 0x305694: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305698u; }
        if (ctx->pc != 0x305698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305698u; }
        if (ctx->pc != 0x305698u) { return; }
    }
    ctx->pc = 0x305698u;
label_305698:
    // 0x305698: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x305698u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x30569c: 0x3c03be8e  lui         $v1, 0xBE8E
    ctx->pc = 0x30569cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48782 << 16));
    // 0x3056a0: 0xae470dbc  sw          $a3, 0xDBC($s2)
    ctx->pc = 0x3056a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3516), GPR_U32(ctx, 7));
    // 0x3056a4: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x3056a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
    // 0x3056a8: 0xae470694  sw          $a3, 0x694($s2)
    ctx->pc = 0x3056a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1684), GPR_U32(ctx, 7));
    // 0x3056ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3056acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3056b0: 0x8e460550  lw          $a2, 0x550($s2)
    ctx->pc = 0x3056b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
    // 0x3056b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3056b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3056b8: 0xacc7002c  sw          $a3, 0x2C($a2)
    ctx->pc = 0x3056b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 7));
    // 0x3056bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3056bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3056c0: 0xe6400de0  swc1        $f0, 0xDE0($s2)
    ctx->pc = 0x3056c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3552), bits); }
    // 0x3056c4: 0xae430ddc  sw          $v1, 0xDDC($s2)
    ctx->pc = 0x3056c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3548), GPR_U32(ctx, 3));
    // 0x3056c8: 0xae400de8  sw          $zero, 0xDE8($s2)
    ctx->pc = 0x3056c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3560), GPR_U32(ctx, 0));
    // 0x3056cc: 0xc077fb0  jal         func_1DFEC0
    ctx->pc = 0x3056CCu;
    SET_GPR_U32(ctx, 31, 0x3056D4u);
    ctx->pc = 0x3056D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3056CCu;
            // 0x3056d0: 0xae000118  sw          $zero, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3056D4u; }
        if (ctx->pc != 0x3056D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3056D4u; }
        if (ctx->pc != 0x3056D4u) { return; }
    }
    ctx->pc = 0x3056D4u;
label_3056d4:
    // 0x3056d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3056d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3056d8: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x3056d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x3056dc: 0xae2202b0  sw          $v0, 0x2B0($s1)
    ctx->pc = 0x3056dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 2));
    // 0x3056e0: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x3056E0u;
    SET_GPR_U32(ctx, 31, 0x3056E8u);
    ctx->pc = 0x3056E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3056E0u;
            // 0x3056e4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3056E8u; }
        if (ctx->pc != 0x3056E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3056E8u; }
        if (ctx->pc != 0x3056E8u) { return; }
    }
    ctx->pc = 0x3056E8u;
label_3056e8:
    // 0x3056e8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x3056e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x3056ec: 0x264402e0  addiu       $a0, $s2, 0x2E0
    ctx->pc = 0x3056ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
    // 0x3056f0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3056f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3056f4: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3056F4u;
    SET_GPR_U32(ctx, 31, 0x3056FCu);
    ctx->pc = 0x3056F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3056F4u;
            // 0x3056f8: 0x24c62b60  addiu       $a2, $a2, 0x2B60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3056FCu; }
        if (ctx->pc != 0x3056FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3056FCu; }
        if (ctx->pc != 0x3056FCu) { return; }
    }
    ctx->pc = 0x3056FCu;
label_3056fc:
    // 0x3056fc: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x3056fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
    // 0x305700: 0xc075318  jal         func_1D4C60
    ctx->pc = 0x305700u;
    SET_GPR_U32(ctx, 31, 0x305708u);
    ctx->pc = 0x305704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305700u;
            // 0x305704: 0x264502e0  addiu       $a1, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305708u; }
        if (ctx->pc != 0x305708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305708u; }
        if (ctx->pc != 0x305708u) { return; }
    }
    ctx->pc = 0x305708u;
label_305708:
    // 0x305708: 0x26450560  addiu       $a1, $s2, 0x560
    ctx->pc = 0x305708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
    // 0x30570c: 0x26440840  addiu       $a0, $s2, 0x840
    ctx->pc = 0x30570cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2112));
    // 0x305710: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x305710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305714: 0xc0c6250  jal         func_318940
    ctx->pc = 0x305714u;
    SET_GPR_U32(ctx, 31, 0x30571Cu);
    ctx->pc = 0x305718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305714u;
            // 0x305718: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30571Cu; }
        if (ctx->pc != 0x30571Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30571Cu; }
        if (ctx->pc != 0x30571Cu) { return; }
    }
    ctx->pc = 0x30571Cu;
label_30571c:
    // 0x30571c: 0x26430890  addiu       $v1, $s2, 0x890
    ctx->pc = 0x30571cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
    // 0x305720: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x305720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x305724: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305728: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x305728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x30572c: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x30572cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x305730: 0xc0c6250  jal         func_318940
    ctx->pc = 0x305730u;
    SET_GPR_U32(ctx, 31, 0x305738u);
    ctx->pc = 0x305734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305730u;
            // 0x305734: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305738u; }
        if (ctx->pc != 0x305738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305738u; }
        if (ctx->pc != 0x305738u) { return; }
    }
    ctx->pc = 0x305738u;
label_305738:
    // 0x305738: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x305738u;
    SET_GPR_U32(ctx, 31, 0x305740u);
    ctx->pc = 0x30573Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305738u;
            // 0x30573c: 0x264407e0  addiu       $a0, $s2, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305740u; }
        if (ctx->pc != 0x305740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305740u; }
        if (ctx->pc != 0x305740u) { return; }
    }
    ctx->pc = 0x305740u;
label_305740:
    // 0x305740: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x305740u;
    SET_GPR_U32(ctx, 31, 0x305748u);
    ctx->pc = 0x305744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305740u;
            // 0x305744: 0x26440890  addiu       $a0, $s2, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305748u; }
        if (ctx->pc != 0x305748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305748u; }
        if (ctx->pc != 0x305748u) { return; }
    }
    ctx->pc = 0x305748u;
label_305748:
    // 0x305748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x305748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30574c: 0xc0767c8  jal         func_1D9F20
    ctx->pc = 0x30574Cu;
    SET_GPR_U32(ctx, 31, 0x305754u);
    ctx->pc = 0x305750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30574Cu;
            // 0x305750: 0x26450300  addiu       $a1, $s2, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F20u;
    if (runtime->hasFunction(0x1D9F20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305754u; }
        if (ctx->pc != 0x305754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9F20_0x1d9f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305754u; }
        if (ctx->pc != 0x305754u) { return; }
    }
    ctx->pc = 0x305754u;
label_305754:
    // 0x305754: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x305754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x305758: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x305758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30575c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30575cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x305760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305764: 0x3e00008  jr          $ra
    ctx->pc = 0x305764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305764u;
            // 0x305768: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30576Cu;
    // 0x30576c: 0x0  nop
    ctx->pc = 0x30576cu;
    // NOP
}
