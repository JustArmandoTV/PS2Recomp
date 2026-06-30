#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00375890
// Address: 0x375890 - 0x375aa0
void sub_00375890_0x375890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375890_0x375890");
#endif

    switch (ctx->pc) {
        case 0x3758bcu: goto label_3758bc;
        case 0x3758c4u: goto label_3758c4;
        case 0x3758e4u: goto label_3758e4;
        case 0x3758ecu: goto label_3758ec;
        case 0x375930u: goto label_375930;
        case 0x375938u: goto label_375938;
        case 0x375970u: goto label_375970;
        case 0x3759c0u: goto label_3759c0;
        case 0x3759c8u: goto label_3759c8;
        case 0x3759d0u: goto label_3759d0;
        case 0x3759e8u: goto label_3759e8;
        case 0x3759f0u: goto label_3759f0;
        case 0x375a00u: goto label_375a00;
        case 0x375a34u: goto label_375a34;
        case 0x375a48u: goto label_375a48;
        case 0x375a5cu: goto label_375a5c;
        case 0x375a70u: goto label_375a70;
        default: break;
    }

    ctx->pc = 0x375890u;

    // 0x375890: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x375890u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x375898u;
    // 0x375898: 0x0  nop
    ctx->pc = 0x375898u;
    // NOP
    // 0x37589c: 0x0  nop
    ctx->pc = 0x37589cu;
    // NOP
    // 0x3758a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3758a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3758a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3758a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3758a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3758a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3758ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3758acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3758b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3758b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3758b4: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x3758B4u;
    SET_GPR_U32(ctx, 31, 0x3758BCu);
    ctx->pc = 0x3758B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3758B4u;
            // 0x3758b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3758BCu; }
        if (ctx->pc != 0x3758BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3758BCu; }
        if (ctx->pc != 0x3758BCu) { return; }
    }
    ctx->pc = 0x3758BCu;
label_3758bc:
    // 0x3758bc: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x3758BCu;
    SET_GPR_U32(ctx, 31, 0x3758C4u);
    ctx->pc = 0x3758C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3758BCu;
            // 0x3758c0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3758C4u; }
        if (ctx->pc != 0x3758C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3758C4u; }
        if (ctx->pc != 0x3758C4u) { return; }
    }
    ctx->pc = 0x3758C4u;
label_3758c4:
    // 0x3758c4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3758c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3758c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3758c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3758cc: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x3758ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x3758d0: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x3758d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x3758d4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3758d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3758d8: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x3758d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x3758dc: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x3758DCu;
    SET_GPR_U32(ctx, 31, 0x3758E4u);
    ctx->pc = 0x3758E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3758DCu;
            // 0x3758e0: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3758E4u; }
        if (ctx->pc != 0x3758E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3758E4u; }
        if (ctx->pc != 0x3758E4u) { return; }
    }
    ctx->pc = 0x3758E4u;
label_3758e4:
    // 0x3758e4: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x3758E4u;
    SET_GPR_U32(ctx, 31, 0x3758ECu);
    ctx->pc = 0x3758E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3758E4u;
            // 0x3758e8: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3758ECu; }
        if (ctx->pc != 0x3758ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3758ECu; }
        if (ctx->pc != 0x3758ECu) { return; }
    }
    ctx->pc = 0x3758ECu;
label_3758ec:
    // 0x3758ec: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x3758ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x3758f0: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x3758f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x3758f4: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x3758f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x3758f8: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x3758f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x3758fc: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x3758fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x375900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375904: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x375904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x375908: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x375908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37590c: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x37590cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x375910: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x375910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x375914: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x375914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x375918: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x375918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x37591c: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x37591cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x375920: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x375920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x375924: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x375924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x375928: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x375928u;
    SET_GPR_U32(ctx, 31, 0x375930u);
    ctx->pc = 0x37592Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375928u;
            // 0x37592c: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375930u; }
        if (ctx->pc != 0x375930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375930u; }
        if (ctx->pc != 0x375930u) { return; }
    }
    ctx->pc = 0x375930u;
label_375930:
    // 0x375930: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x375930u;
    SET_GPR_U32(ctx, 31, 0x375938u);
    ctx->pc = 0x375934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375930u;
            // 0x375934: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375938u; }
        if (ctx->pc != 0x375938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375938u; }
        if (ctx->pc != 0x375938u) { return; }
    }
    ctx->pc = 0x375938u;
label_375938:
    // 0x375938: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x375938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x37593c: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x37593cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x375940: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x375940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
    // 0x375944: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x375944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x375948: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x375948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37594c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x37594cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x375950: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x375950u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x375954: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x375954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x375958: 0x24425b08  addiu       $v0, $v0, 0x5B08
    ctx->pc = 0x375958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23304));
    // 0x37595c: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x37595cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x375960: 0x260400d4  addiu       $a0, $s0, 0xD4
    ctx->pc = 0x375960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
    // 0x375964: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x375964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x375968: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x375968u;
    SET_GPR_U32(ctx, 31, 0x375970u);
    ctx->pc = 0x37596Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375968u;
            // 0x37596c: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375970u; }
        if (ctx->pc != 0x375970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375970u; }
        if (ctx->pc != 0x375970u) { return; }
    }
    ctx->pc = 0x375970u;
label_375970:
    // 0x375970: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x375970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x375974: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x375974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x375978: 0x24427020  addiu       $v0, $v0, 0x7020
    ctx->pc = 0x375978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28704));
    // 0x37597c: 0x261100f0  addiu       $s1, $s0, 0xF0
    ctx->pc = 0x37597cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x375980: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x375980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x375984: 0x24637060  addiu       $v1, $v1, 0x7060
    ctx->pc = 0x375984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28768));
    // 0x375988: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x375988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37598c: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x37598cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x375990: 0x244270bc  addiu       $v0, $v0, 0x70BC
    ctx->pc = 0x375990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28860));
    // 0x375994: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x375994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x375998: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x375998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x37599c: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x37599cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x3759a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3759a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3759a4: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x3759a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x3759a8: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x3759a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
    // 0x3759ac: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x3759acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x3759b0: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x3759b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
    // 0x3759b4: 0xae000194  sw          $zero, 0x194($s0)
    ctx->pc = 0x3759b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 0));
    // 0x3759b8: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x3759B8u;
    SET_GPR_U32(ctx, 31, 0x3759C0u);
    ctx->pc = 0x3759BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3759B8u;
            // 0x3759bc: 0xa2000198  sb          $zero, 0x198($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 408), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3759C0u; }
        if (ctx->pc != 0x3759C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3759C0u; }
        if (ctx->pc != 0x3759C0u) { return; }
    }
    ctx->pc = 0x3759C0u;
label_3759c0:
    // 0x3759c0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x3759C0u;
    SET_GPR_U32(ctx, 31, 0x3759C8u);
    ctx->pc = 0x3759C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3759C0u;
            // 0x3759c4: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3759C8u; }
        if (ctx->pc != 0x3759C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3759C8u; }
        if (ctx->pc != 0x3759C8u) { return; }
    }
    ctx->pc = 0x3759C8u;
label_3759c8:
    // 0x3759c8: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x3759C8u;
    SET_GPR_U32(ctx, 31, 0x3759D0u);
    ctx->pc = 0x3759CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3759C8u;
            // 0x3759cc: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3759D0u; }
        if (ctx->pc != 0x3759D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3759D0u; }
        if (ctx->pc != 0x3759D0u) { return; }
    }
    ctx->pc = 0x3759D0u;
label_3759d0:
    // 0x3759d0: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x3759d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x3759d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3759d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3759d8: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x3759d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
    // 0x3759dc: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x3759dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x3759e0: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x3759E0u;
    SET_GPR_U32(ctx, 31, 0x3759E8u);
    ctx->pc = 0x3759E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3759E0u;
            // 0x3759e4: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3759E8u; }
        if (ctx->pc != 0x3759E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3759E8u; }
        if (ctx->pc != 0x3759E8u) { return; }
    }
    ctx->pc = 0x3759E8u;
label_3759e8:
    // 0x3759e8: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x3759E8u;
    SET_GPR_U32(ctx, 31, 0x3759F0u);
    ctx->pc = 0x3759ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3759E8u;
            // 0x3759ec: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3759F0u; }
        if (ctx->pc != 0x3759F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3759F0u; }
        if (ctx->pc != 0x3759F0u) { return; }
    }
    ctx->pc = 0x3759F0u;
label_3759f0:
    // 0x3759f0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3759f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3759f4: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x3759f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x3759f8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3759F8u;
    SET_GPR_U32(ctx, 31, 0x375A00u);
    ctx->pc = 0x3759FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3759F8u;
            // 0x3759fc: 0x24a55060  addiu       $a1, $a1, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375A00u; }
        if (ctx->pc != 0x375A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375A00u; }
        if (ctx->pc != 0x375A00u) { return; }
    }
    ctx->pc = 0x375A00u;
label_375a00:
    // 0x375a00: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x375a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x375a04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x375a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x375a08: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x375a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    // 0x375a0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x375a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x375a10: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x375a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x375a14: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x375a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x375a18: 0xa6200110  sh          $zero, 0x110($s1)
    ctx->pc = 0x375a18u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 272), (uint16_t)GPR_U32(ctx, 0));
    // 0x375a1c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x375a1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x375a20: 0xa6200112  sh          $zero, 0x112($s1)
    ctx->pc = 0x375a20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 274), (uint16_t)GPR_U32(ctx, 0));
    // 0x375a24: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x375a24u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x375a28: 0xa6220114  sh          $v0, 0x114($s1)
    ctx->pc = 0x375a28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 276), (uint16_t)GPR_U32(ctx, 2));
    // 0x375a2c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x375A2Cu;
    SET_GPR_U32(ctx, 31, 0x375A34u);
    ctx->pc = 0x375A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375A2Cu;
            // 0x375a30: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375A34u; }
        if (ctx->pc != 0x375A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375A34u; }
        if (ctx->pc != 0x375A34u) { return; }
    }
    ctx->pc = 0x375A34u;
label_375a34:
    // 0x375a34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x375a34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x375a38: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x375a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x375a3c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x375a3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x375a40: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x375A40u;
    SET_GPR_U32(ctx, 31, 0x375A48u);
    ctx->pc = 0x375A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375A40u;
            // 0x375a44: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375A48u; }
        if (ctx->pc != 0x375A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375A48u; }
        if (ctx->pc != 0x375A48u) { return; }
    }
    ctx->pc = 0x375A48u;
label_375a48:
    // 0x375a48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x375a48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x375a4c: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x375a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x375a50: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x375a50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x375a54: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x375A54u;
    SET_GPR_U32(ctx, 31, 0x375A5Cu);
    ctx->pc = 0x375A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375A54u;
            // 0x375a58: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375A5Cu; }
        if (ctx->pc != 0x375A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375A5Cu; }
        if (ctx->pc != 0x375A5Cu) { return; }
    }
    ctx->pc = 0x375A5Cu;
label_375a5c:
    // 0x375a5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x375a5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x375a60: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x375a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x375a64: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x375a64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x375a68: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x375A68u;
    SET_GPR_U32(ctx, 31, 0x375A70u);
    ctx->pc = 0x375A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375A68u;
            // 0x375a6c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375A70u; }
        if (ctx->pc != 0x375A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375A70u; }
        if (ctx->pc != 0x375A70u) { return; }
    }
    ctx->pc = 0x375A70u;
label_375a70:
    // 0x375a70: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x375a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x375a74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x375a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375a78: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x375a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x375a7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x375a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375a80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x375a80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375a84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x375a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x375a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x375A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375A8Cu;
            // 0x375a90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x375A94u;
    // 0x375a94: 0x0  nop
    ctx->pc = 0x375a94u;
    // NOP
    // 0x375a98: 0x0  nop
    ctx->pc = 0x375a98u;
    // NOP
    // 0x375a9c: 0x0  nop
    ctx->pc = 0x375a9cu;
    // NOP
}
