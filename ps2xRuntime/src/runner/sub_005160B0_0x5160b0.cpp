#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005160B0
// Address: 0x5160b0 - 0x517150
void sub_005160B0_0x5160b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005160B0_0x5160b0");
#endif

    switch (ctx->pc) {
        case 0x516100u: goto label_516100;
        case 0x516110u: goto label_516110;
        case 0x516120u: goto label_516120;
        case 0x516134u: goto label_516134;
        case 0x516144u: goto label_516144;
        case 0x51615cu: goto label_51615c;
        case 0x516178u: goto label_516178;
        case 0x516198u: goto label_516198;
        case 0x5161a0u: goto label_5161a0;
        case 0x516248u: goto label_516248;
        case 0x51627cu: goto label_51627c;
        case 0x5162ecu: goto label_5162ec;
        case 0x516308u: goto label_516308;
        case 0x516318u: goto label_516318;
        case 0x51632cu: goto label_51632c;
        case 0x516334u: goto label_516334;
        case 0x5163f4u: goto label_5163f4;
        case 0x516444u: goto label_516444;
        case 0x51645cu: goto label_51645c;
        case 0x5164d4u: goto label_5164d4;
        case 0x516534u: goto label_516534;
        case 0x51654cu: goto label_51654c;
        case 0x51659cu: goto label_51659c;
        case 0x5165c0u: goto label_5165c0;
        case 0x51664cu: goto label_51664c;
        case 0x5166acu: goto label_5166ac;
        case 0x5166b8u: goto label_5166b8;
        case 0x5166c4u: goto label_5166c4;
        case 0x5166ecu: goto label_5166ec;
        case 0x5166fcu: goto label_5166fc;
        case 0x516728u: goto label_516728;
        case 0x516750u: goto label_516750;
        case 0x516760u: goto label_516760;
        case 0x51676cu: goto label_51676c;
        case 0x51677cu: goto label_51677c;
        case 0x516800u: goto label_516800;
        case 0x516854u: goto label_516854;
        case 0x516864u: goto label_516864;
        case 0x5168c4u: goto label_5168c4;
        case 0x516984u: goto label_516984;
        case 0x516994u: goto label_516994;
        case 0x5169a8u: goto label_5169a8;
        case 0x5169b8u: goto label_5169b8;
        case 0x5169c4u: goto label_5169c4;
        case 0x516a30u: goto label_516a30;
        case 0x516a3cu: goto label_516a3c;
        case 0x516a48u: goto label_516a48;
        case 0x516a64u: goto label_516a64;
        case 0x516a84u: goto label_516a84;
        case 0x516a94u: goto label_516a94;
        case 0x516aa4u: goto label_516aa4;
        case 0x516ab8u: goto label_516ab8;
        case 0x516ac4u: goto label_516ac4;
        case 0x516ad0u: goto label_516ad0;
        case 0x516ae4u: goto label_516ae4;
        case 0x516af4u: goto label_516af4;
        case 0x516b2cu: goto label_516b2c;
        case 0x516b48u: goto label_516b48;
        case 0x517068u: goto label_517068;
        case 0x517070u: goto label_517070;
        default: break;
    }

    ctx->pc = 0x5160b0u;

label_5160b0:
    // 0x5160b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x5160b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x5160b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5160b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x5160b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5160b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x5160bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x5160bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x5160c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5160c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x5160c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5160c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x5160c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5160c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5160cc: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x5160ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x5160d0: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x5160d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x5160d4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5160D4u;
    {
        const bool branch_taken_0x5160d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x5160D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5160D4u;
            // 0x5160d8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5160d4) {
            ctx->pc = 0x5160E8u;
            goto label_5160e8;
        }
    }
    ctx->pc = 0x5160DCu;
    // 0x5160dc: 0x3c110063  lui         $s1, 0x63
    ctx->pc = 0x5160dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)99 << 16));
    // 0x5160e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x5160E0u;
    {
        const bool branch_taken_0x5160e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5160E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5160E0u;
            // 0x5160e4: 0x2631ce1c  addiu       $s1, $s1, -0x31E4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5160e0) {
            ctx->pc = 0x5160F0u;
            goto label_5160f0;
        }
    }
    ctx->pc = 0x5160E8u;
label_5160e8:
    // 0x5160e8: 0x3c110063  lui         $s1, 0x63
    ctx->pc = 0x5160e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)99 << 16));
    // 0x5160ec: 0x2631ce10  addiu       $s1, $s1, -0x31F0
    ctx->pc = 0x5160ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954512));
label_5160f0:
    // 0x5160f0: 0x8e500d60  lw          $s0, 0xD60($s2)
    ctx->pc = 0x5160f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
    // 0x5160f4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x5160f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x5160f8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x5160F8u;
    SET_GPR_U32(ctx, 31, 0x516100u);
    ctx->pc = 0x5160FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5160F8u;
            // 0x5160fc: 0x264502c0  addiu       $a1, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516100u; }
        if (ctx->pc != 0x516100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516100u; }
        if (ctx->pc != 0x516100u) { return; }
    }
    ctx->pc = 0x516100u;
label_516100:
    // 0x516100: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x516100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x516104: 0x264502c0  addiu       $a1, $s2, 0x2C0
    ctx->pc = 0x516104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    // 0x516108: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x516108u;
    SET_GPR_U32(ctx, 31, 0x516110u);
    ctx->pc = 0x51610Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516108u;
            // 0x51610c: 0x264605d0  addiu       $a2, $s2, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516110u; }
        if (ctx->pc != 0x516110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516110u; }
        if (ctx->pc != 0x516110u) { return; }
    }
    ctx->pc = 0x516110u;
label_516110:
    // 0x516110: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x516110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x516114: 0x264502c0  addiu       $a1, $s2, 0x2C0
    ctx->pc = 0x516114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    // 0x516118: 0xc04cc90  jal         func_133240
    ctx->pc = 0x516118u;
    SET_GPR_U32(ctx, 31, 0x516120u);
    ctx->pc = 0x51611Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516118u;
            // 0x51611c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516120u; }
        if (ctx->pc != 0x516120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516120u; }
        if (ctx->pc != 0x516120u) { return; }
    }
    ctx->pc = 0x516120u;
label_516120:
    // 0x516120: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x516120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x516124: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x516124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x516128: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x516128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x51612c: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x51612Cu;
    SET_GPR_U32(ctx, 31, 0x516134u);
    ctx->pc = 0x516130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51612Cu;
            // 0x516130: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516134u; }
        if (ctx->pc != 0x516134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516134u; }
        if (ctx->pc != 0x516134u) { return; }
    }
    ctx->pc = 0x516134u;
label_516134:
    // 0x516134: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x516134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x516138: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x516138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x51613c: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x51613Cu;
    SET_GPR_U32(ctx, 31, 0x516144u);
    ctx->pc = 0x516140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51613Cu;
            // 0x516140: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516144u; }
        if (ctx->pc != 0x516144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516144u; }
        if (ctx->pc != 0x516144u) { return; }
    }
    ctx->pc = 0x516144u;
label_516144:
    // 0x516144: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x516144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x516148: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x516148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x51614c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x51614cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x516150: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x516150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x516154: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x516154u;
    SET_GPR_U32(ctx, 31, 0x51615Cu);
    ctx->pc = 0x516158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516154u;
            // 0x516158: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51615Cu; }
        if (ctx->pc != 0x51615Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51615Cu; }
        if (ctx->pc != 0x51615Cu) { return; }
    }
    ctx->pc = 0x51615Cu;
label_51615c:
    // 0x51615c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51615cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x516160: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x516160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x516164: 0x8c44e410  lw          $a0, -0x1BF0($v0)
    ctx->pc = 0x516164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
    // 0x516168: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x516168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x51616c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x51616cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x516170: 0xc0d16dc  jal         func_345B70
    ctx->pc = 0x516170u;
    SET_GPR_U32(ctx, 31, 0x516178u);
    ctx->pc = 0x516174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516170u;
            // 0x516174: 0x3c080001  lui         $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x345B70u;
    if (runtime->hasFunction(0x345B70u)) {
        auto targetFn = runtime->lookupFunction(0x345B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516178u; }
        if (ctx->pc != 0x516178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00345B70_0x345b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516178u; }
        if (ctx->pc != 0x516178u) { return; }
    }
    ctx->pc = 0x516178u;
label_516178:
    // 0x516178: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x516178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x51617c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x51617cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x516180: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x516180u;
    {
        const bool branch_taken_0x516180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x516180) {
            ctx->pc = 0x516184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516180u;
            // 0x516184: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516204u;
            goto label_516204;
        }
    }
    ctx->pc = 0x516188u;
    // 0x516188: 0x264602c0  addiu       $a2, $s2, 0x2C0
    ctx->pc = 0x516188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    // 0x51618c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x51618cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x516190: 0xc04cc90  jal         func_133240
    ctx->pc = 0x516190u;
    SET_GPR_U32(ctx, 31, 0x516198u);
    ctx->pc = 0x516194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516190u;
            // 0x516194: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516198u; }
        if (ctx->pc != 0x516198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516198u; }
        if (ctx->pc != 0x516198u) { return; }
    }
    ctx->pc = 0x516198u;
label_516198:
    // 0x516198: 0xc04cc14  jal         func_133050
    ctx->pc = 0x516198u;
    SET_GPR_U32(ctx, 31, 0x5161A0u);
    ctx->pc = 0x51619Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516198u;
            // 0x51619c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5161A0u; }
        if (ctx->pc != 0x5161A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5161A0u; }
        if (ctx->pc != 0x5161A0u) { return; }
    }
    ctx->pc = 0x5161A0u;
label_5161a0:
    // 0x5161a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x5161a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5161a4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x5161a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x5161a8: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x5161A8u;
    {
        const bool branch_taken_0x5161a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5161a8) {
            ctx->pc = 0x5161ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5161A8u;
            // 0x5161ac: 0xc6210004  lwc1        $f1, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x5161F4u;
            goto label_5161f4;
        }
    }
    ctx->pc = 0x5161B0u;
    // 0x5161b0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x5161b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5161b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x5161b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5161b8: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x5161B8u;
    {
        const bool branch_taken_0x5161b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5161b8) {
            ctx->pc = 0x5161BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5161B8u;
            // 0x5161bc: 0xc6210004  lwc1        $f1, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x5161C8u;
            goto label_5161c8;
        }
    }
    ctx->pc = 0x5161C0u;
    // 0x5161c0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x5161C0u;
    {
        const bool branch_taken_0x5161c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5161C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5161C0u;
            // 0x5161c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5161c0) {
            ctx->pc = 0x516204u;
            goto label_516204;
        }
    }
    ctx->pc = 0x5161C8u;
label_5161c8:
    // 0x5161c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x5161c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5161cc: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x5161CCu;
    {
        const bool branch_taken_0x5161cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5161cc) {
            ctx->pc = 0x5161D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5161CCu;
            // 0x5161d0: 0xc6210008  lwc1        $f1, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x5161DCu;
            goto label_5161dc;
        }
    }
    ctx->pc = 0x5161D4u;
    // 0x5161d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x5161D4u;
    {
        const bool branch_taken_0x5161d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5161D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5161D4u;
            // 0x5161d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5161d4) {
            ctx->pc = 0x516204u;
            goto label_516204;
        }
    }
    ctx->pc = 0x5161DCu;
label_5161dc:
    // 0x5161dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x5161dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5161e0: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x5161E0u;
    {
        const bool branch_taken_0x5161e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5161e0) {
            ctx->pc = 0x5161E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5161E0u;
            // 0x5161e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5161ECu;
            goto label_5161ec;
        }
    }
    ctx->pc = 0x5161E8u;
    // 0x5161e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5161e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5161ec:
    // 0x5161ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x5161ECu;
    {
        const bool branch_taken_0x5161ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5161F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5161ECu;
            // 0x5161f0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5161ec) {
            ctx->pc = 0x516208u;
            goto label_516208;
        }
    }
    ctx->pc = 0x5161F4u;
label_5161f4:
    // 0x5161f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x5161f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5161f8: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x5161F8u;
    {
        const bool branch_taken_0x5161f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5161f8) {
            ctx->pc = 0x5161FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5161F8u;
            // 0x5161fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516204u;
            goto label_516204;
        }
    }
    ctx->pc = 0x516200u;
    // 0x516200: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x516200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_516204:
    // 0x516204: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x516204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_516208:
    // 0x516208: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x516208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51620c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51620cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x516210: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x516210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x516214: 0x3e00008  jr          $ra
    ctx->pc = 0x516214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x516218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516214u;
            // 0x516218: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51621Cu;
    // 0x51621c: 0x0  nop
    ctx->pc = 0x51621cu;
    // NOP
    // 0x516220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x516220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x516224: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x516224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x516228: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x516228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x51622c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51622cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x516230: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x516230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x516234: 0x8cb20024  lw          $s2, 0x24($a1)
    ctx->pc = 0x516234u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x516238: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x516238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51623c: 0x8cb1002c  lw          $s1, 0x2C($a1)
    ctx->pc = 0x51623cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x516240: 0xc14582c  jal         func_5160B0
    ctx->pc = 0x516240u;
    SET_GPR_U32(ctx, 31, 0x516248u);
    ctx->pc = 0x516244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516240u;
            // 0x516244: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5160B0u;
    goto label_5160b0;
    ctx->pc = 0x516248u;
label_516248:
    // 0x516248: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x516248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x51624c: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x51624Cu;
    {
        const bool branch_taken_0x51624c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x51624c) {
            ctx->pc = 0x516250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51624Cu;
            // 0x516250: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51626Cu;
            goto label_51626c;
        }
    }
    ctx->pc = 0x516254u;
    // 0x516254: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x516254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x516258: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x516258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x51625c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x51625Cu;
    {
        const bool branch_taken_0x51625c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x51625c) {
            ctx->pc = 0x516268u;
            goto label_516268;
        }
    }
    ctx->pc = 0x516264u;
    // 0x516264: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x516264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_516268:
    // 0x516268: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x516268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_51626c:
    // 0x51626c: 0x26450820  addiu       $a1, $s2, 0x820
    ctx->pc = 0x51626cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2080));
    // 0x516270: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x516270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x516274: 0xc04cc04  jal         func_133010
    ctx->pc = 0x516274u;
    SET_GPR_U32(ctx, 31, 0x51627Cu);
    ctx->pc = 0x516278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516274u;
            // 0x516278: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51627Cu; }
        if (ctx->pc != 0x51627Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51627Cu; }
        if (ctx->pc != 0x51627Cu) { return; }
    }
    ctx->pc = 0x51627Cu;
label_51627c:
    // 0x51627c: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x51627cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x516280: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x516280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x516284: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x516284u;
    {
        const bool branch_taken_0x516284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x516284) {
            ctx->pc = 0x516288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516284u;
            // 0x516288: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5162A8u;
            goto label_5162a8;
        }
    }
    ctx->pc = 0x51628Cu;
    // 0x51628c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x51628cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x516290: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x516290u;
    {
        const bool branch_taken_0x516290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x516290) {
            ctx->pc = 0x5162A4u;
            goto label_5162a4;
        }
    }
    ctx->pc = 0x516298u;
    // 0x516298: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x516298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x51629c: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x51629cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x5162a0: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x5162a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
label_5162a4:
    // 0x5162a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x5162a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_5162a8:
    // 0x5162a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5162a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5162ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5162acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5162b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5162b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5162b4: 0x3e00008  jr          $ra
    ctx->pc = 0x5162B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5162B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5162B4u;
            // 0x5162b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5162BCu;
    // 0x5162bc: 0x0  nop
    ctx->pc = 0x5162bcu;
    // NOP
    // 0x5162c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x5162c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x5162c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5162c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x5162c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x5162c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x5162cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x5162ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x5162d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x5162d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5162d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x5162d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x5162d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x5162d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5162dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x5162dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x5162e0: 0x8cb00024  lw          $s0, 0x24($a1)
    ctx->pc = 0x5162e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x5162e4: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x5162E4u;
    SET_GPR_U32(ctx, 31, 0x5162ECu);
    ctx->pc = 0x5162E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5162E4u;
            // 0x5162e8: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5162ECu; }
        if (ctx->pc != 0x5162ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5162ECu; }
        if (ctx->pc != 0x5162ECu) { return; }
    }
    ctx->pc = 0x5162ECu;
label_5162ec:
    // 0x5162ec: 0x8e020e30  lw          $v0, 0xE30($s0)
    ctx->pc = 0x5162ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3632)));
    // 0x5162f0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x5162F0u;
    {
        const bool branch_taken_0x5162f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5162f0) {
            ctx->pc = 0x5162F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5162F0u;
            // 0x5162f4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516300u;
            goto label_516300;
        }
    }
    ctx->pc = 0x5162F8u;
    // 0x5162f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x5162F8u;
    {
        const bool branch_taken_0x5162f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5162FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5162F8u;
            // 0x5162fc: 0x82250074  lb          $a1, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5162f8) {
            ctx->pc = 0x516338u;
            goto label_516338;
        }
    }
    ctx->pc = 0x516300u;
label_516300:
    // 0x516300: 0xc04cc44  jal         func_133110
    ctx->pc = 0x516300u;
    SET_GPR_U32(ctx, 31, 0x516308u);
    ctx->pc = 0x516304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516300u;
            // 0x516304: 0x26050300  addiu       $a1, $s0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516308u; }
        if (ctx->pc != 0x516308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516308u; }
        if (ctx->pc != 0x516308u) { return; }
    }
    ctx->pc = 0x516308u;
label_516308:
    // 0x516308: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x516308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x51630c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x51630cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x516310: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x516310u;
    SET_GPR_U32(ctx, 31, 0x516318u);
    ctx->pc = 0x516314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516310u;
            // 0x516314: 0x26060910  addiu       $a2, $s0, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516318u; }
        if (ctx->pc != 0x516318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516318u; }
        if (ctx->pc != 0x516318u) { return; }
    }
    ctx->pc = 0x516318u;
label_516318:
    // 0x516318: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x516318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x51631c: 0x2604092c  addiu       $a0, $s0, 0x92C
    ctx->pc = 0x51631cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
    // 0x516320: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x516320u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x516324: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x516324u;
    SET_GPR_U32(ctx, 31, 0x51632Cu);
    ctx->pc = 0x516328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516324u;
            // 0x516328: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51632Cu; }
        if (ctx->pc != 0x51632Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51632Cu; }
        if (ctx->pc != 0x51632Cu) { return; }
    }
    ctx->pc = 0x51632Cu;
label_51632c:
    // 0x51632c: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x51632Cu;
    SET_GPR_U32(ctx, 31, 0x516334u);
    ctx->pc = 0x516330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51632Cu;
            // 0x516330: 0x26040890  addiu       $a0, $s0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516334u; }
        if (ctx->pc != 0x516334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516334u; }
        if (ctx->pc != 0x516334u) { return; }
    }
    ctx->pc = 0x516334u;
label_516334:
    // 0x516334: 0x82250074  lb          $a1, 0x74($s1)
    ctx->pc = 0x516334u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 116)));
label_516338:
    // 0x516338: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x516338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x51633c: 0x2463ad88  addiu       $v1, $v1, -0x5278
    ctx->pc = 0x51633cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946184));
    // 0x516340: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x516340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x516344: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x516344u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x516348: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x516348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x51634c: 0x10a200c1  beq         $a1, $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x51634Cu;
    {
        const bool branch_taken_0x51634c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x516350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51634Cu;
            // 0x516350: 0xc4740000  lwc1        $f20, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x51634c) {
            ctx->pc = 0x516654u;
            goto label_516654;
        }
    }
    ctx->pc = 0x516354u;
    // 0x516354: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x516354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x516358: 0x50a20078  beql        $a1, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x516358u;
    {
        const bool branch_taken_0x516358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x516358) {
            ctx->pc = 0x51635Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516358u;
            // 0x51635c: 0xc62c005c  lwc1        $f12, 0x5C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x51653Cu;
            goto label_51653c;
        }
    }
    ctx->pc = 0x516360u;
    // 0x516360: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x516360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x516364: 0x50a30039  beql        $a1, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x516364u;
    {
        const bool branch_taken_0x516364 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x516364) {
            ctx->pc = 0x516368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516364u;
            // 0x516368: 0xc62c005c  lwc1        $f12, 0x5C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x51644Cu;
            goto label_51644c;
        }
    }
    ctx->pc = 0x51636Cu;
    // 0x51636c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x51636Cu;
    {
        const bool branch_taken_0x51636c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x51636c) {
            ctx->pc = 0x51637Cu;
            goto label_51637c;
        }
    }
    ctx->pc = 0x516374u;
    // 0x516374: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x516374u;
    {
        const bool branch_taken_0x516374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x516378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516374u;
            // 0x516378: 0x8e020da0  lw          $v0, 0xDA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x516374) {
            ctx->pc = 0x516658u;
            goto label_516658;
        }
    }
    ctx->pc = 0x51637Cu;
label_51637c:
    // 0x51637c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51637cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x516380: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x516380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x516384: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x516384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x516388: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x516388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x51638c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x51638cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x516390: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x516390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x516394: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x516394u;
    {
        const bool branch_taken_0x516394 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x516398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516394u;
            // 0x516398: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x516394) {
            ctx->pc = 0x5163B4u;
            goto label_5163b4;
        }
    }
    ctx->pc = 0x51639Cu;
    // 0x51639c: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x51639cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x5163a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x5163a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x5163a4: 0x82220074  lb          $v0, 0x74($s1)
    ctx->pc = 0x5163a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x5163a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x5163a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x5163ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x5163ACu;
    {
        const bool branch_taken_0x5163ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5163B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5163ACu;
            // 0x5163b0: 0xa2220074  sb          $v0, 0x74($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5163ac) {
            ctx->pc = 0x5163B8u;
            goto label_5163b8;
        }
    }
    ctx->pc = 0x5163B4u;
label_5163b4:
    // 0x5163b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x5163b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5163b8:
    // 0x5163b8: 0x106000a6  beqz        $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x5163B8u;
    {
        const bool branch_taken_0x5163b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5163b8) {
            ctx->pc = 0x516654u;
            goto label_516654;
        }
    }
    ctx->pc = 0x5163C0u;
    // 0x5163c0: 0x82260074  lb          $a2, 0x74($s1)
    ctx->pc = 0x5163c0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x5163c4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x5163c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x5163c8: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x5163c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x5163cc: 0x2463ad88  addiu       $v1, $v1, -0x5278
    ctx->pc = 0x5163ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946184));
    // 0x5163d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5163d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5163d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5163d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5163d8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x5163d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x5163dc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x5163dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x5163e0: 0x80470006  lb          $a3, 0x6($v0)
    ctx->pc = 0x5163e0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x5163e4: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x5163e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x5163e8: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x5163e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x5163ec: 0xc1425e0  jal         func_509780
    ctx->pc = 0x5163ECu;
    SET_GPR_U32(ctx, 31, 0x5163F4u);
    ctx->pc = 0x5163F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5163ECu;
            // 0x5163f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509780u;
    if (runtime->hasFunction(0x509780u)) {
        auto targetFn = runtime->lookupFunction(0x509780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5163F4u; }
        if (ctx->pc != 0x5163F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509780_0x509780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5163F4u; }
        if (ctx->pc != 0x5163F4u) { return; }
    }
    ctx->pc = 0x5163F4u;
label_5163f4:
    // 0x5163f4: 0x82220074  lb          $v0, 0x74($s1)
    ctx->pc = 0x5163f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x5163f8: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x5163f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x5163fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x5163fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x516400: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x516400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x516404: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x516404u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x516408: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x516408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x51640c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x51640Cu;
    {
        const bool branch_taken_0x51640c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51640c) {
            ctx->pc = 0x516410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51640Cu;
            // 0x516410: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516420u;
            goto label_516420;
        }
    }
    ctx->pc = 0x516414u;
    // 0x516414: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x516414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x516418: 0xc454a470  lwc1        $f20, -0x5B90($v0)
    ctx->pc = 0x516418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x51641c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x51641cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_516420:
    // 0x516420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x516420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x516424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x516424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x516428: 0x0  nop
    ctx->pc = 0x516428u;
    // NOP
    // 0x51642c: 0x4600a343  div.s       $f13, $f20, $f0
    ctx->pc = 0x51642cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[0];
    // 0x516430: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x516430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x516434: 0x0  nop
    ctx->pc = 0x516434u;
    // NOP
    // 0x516438: 0x0  nop
    ctx->pc = 0x516438u;
    // NOP
    // 0x51643c: 0xc1425a8  jal         func_5096A0
    ctx->pc = 0x51643Cu;
    SET_GPR_U32(ctx, 31, 0x516444u);
    ctx->pc = 0x516440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51643Cu;
            // 0x516440: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5096A0u;
    if (runtime->hasFunction(0x5096A0u)) {
        auto targetFn = runtime->lookupFunction(0x5096A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516444u; }
        if (ctx->pc != 0x516444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005096A0_0x5096a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516444u; }
        if (ctx->pc != 0x516444u) { return; }
    }
    ctx->pc = 0x516444u;
label_516444:
    // 0x516444: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x516444u;
    {
        const bool branch_taken_0x516444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x516444) {
            ctx->pc = 0x516654u;
            goto label_516654;
        }
    }
    ctx->pc = 0x51644Cu;
label_51644c:
    // 0x51644c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51644cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x516450: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x516450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x516454: 0xc142520  jal         func_509480
    ctx->pc = 0x516454u;
    SET_GPR_U32(ctx, 31, 0x51645Cu);
    ctx->pc = 0x516458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516454u;
            // 0x516458: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509480u;
    if (runtime->hasFunction(0x509480u)) {
        auto targetFn = runtime->lookupFunction(0x509480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51645Cu; }
        if (ctx->pc != 0x51645Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509480_0x509480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51645Cu; }
        if (ctx->pc != 0x51645Cu) { return; }
    }
    ctx->pc = 0x51645Cu;
label_51645c:
    // 0x51645c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51645cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x516460: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x516460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x516464: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x516464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x516468: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x516468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x51646c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x51646cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x516470: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x516470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x516474: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x516474u;
    {
        const bool branch_taken_0x516474 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x516478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516474u;
            // 0x516478: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x516474) {
            ctx->pc = 0x516494u;
            goto label_516494;
        }
    }
    ctx->pc = 0x51647Cu;
    // 0x51647c: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x51647cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x516480: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x516480u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x516484: 0x82220074  lb          $v0, 0x74($s1)
    ctx->pc = 0x516484u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x516488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x516488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x51648c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x51648Cu;
    {
        const bool branch_taken_0x51648c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x516490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51648Cu;
            // 0x516490: 0xa2220074  sb          $v0, 0x74($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51648c) {
            ctx->pc = 0x516498u;
            goto label_516498;
        }
    }
    ctx->pc = 0x516494u;
label_516494:
    // 0x516494: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x516494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_516498:
    // 0x516498: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x516498u;
    {
        const bool branch_taken_0x516498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x516498) {
            ctx->pc = 0x516654u;
            goto label_516654;
        }
    }
    ctx->pc = 0x5164A0u;
    // 0x5164a0: 0x82260074  lb          $a2, 0x74($s1)
    ctx->pc = 0x5164a0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x5164a4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x5164a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x5164a8: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x5164a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x5164ac: 0x2463ad88  addiu       $v1, $v1, -0x5278
    ctx->pc = 0x5164acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946184));
    // 0x5164b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5164b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5164b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5164b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5164b8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x5164b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x5164bc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x5164bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x5164c0: 0x8047000e  lb          $a3, 0xE($v0)
    ctx->pc = 0x5164c0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x5164c4: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x5164c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x5164c8: 0x8446000c  lh          $a2, 0xC($v0)
    ctx->pc = 0x5164c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x5164cc: 0xc1425e0  jal         func_509780
    ctx->pc = 0x5164CCu;
    SET_GPR_U32(ctx, 31, 0x5164D4u);
    ctx->pc = 0x5164D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5164CCu;
            // 0x5164d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509780u;
    if (runtime->hasFunction(0x509780u)) {
        auto targetFn = runtime->lookupFunction(0x509780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5164D4u; }
        if (ctx->pc != 0x5164D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509780_0x509780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5164D4u; }
        if (ctx->pc != 0x5164D4u) { return; }
    }
    ctx->pc = 0x5164D4u;
label_5164d4:
    // 0x5164d4: 0x82220074  lb          $v0, 0x74($s1)
    ctx->pc = 0x5164d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x5164d8: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x5164d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x5164dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x5164dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x5164e0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x5164e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x5164e4: 0x8062fff7  lb          $v0, -0x9($v1)
    ctx->pc = 0x5164e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967287)));
    // 0x5164e8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x5164e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x5164ec: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x5164ECu;
    {
        const bool branch_taken_0x5164ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5164ec) {
            ctx->pc = 0x516654u;
            goto label_516654;
        }
    }
    ctx->pc = 0x5164F4u;
    // 0x5164f4: 0x8062ffff  lb          $v0, -0x1($v1)
    ctx->pc = 0x5164f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x5164f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x5164f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x5164fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x5164FCu;
    {
        const bool branch_taken_0x5164fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5164fc) {
            ctx->pc = 0x516500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5164FCu;
            // 0x516500: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516510u;
            goto label_516510;
        }
    }
    ctx->pc = 0x516504u;
    // 0x516504: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x516504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x516508: 0xc454a470  lwc1        $f20, -0x5B90($v0)
    ctx->pc = 0x516508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x51650c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x51650cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_516510:
    // 0x516510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x516510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x516514: 0x0  nop
    ctx->pc = 0x516514u;
    // NOP
    // 0x516518: 0x4600a343  div.s       $f13, $f20, $f0
    ctx->pc = 0x516518u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[0];
    // 0x51651c: 0xc48c0008  lwc1        $f12, 0x8($a0)
    ctx->pc = 0x51651cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x516520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x516520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x516524: 0x0  nop
    ctx->pc = 0x516524u;
    // NOP
    // 0x516528: 0x0  nop
    ctx->pc = 0x516528u;
    // NOP
    // 0x51652c: 0xc1425a8  jal         func_5096A0
    ctx->pc = 0x51652Cu;
    SET_GPR_U32(ctx, 31, 0x516534u);
    ctx->pc = 0x516530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51652Cu;
            // 0x516530: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5096A0u;
    if (runtime->hasFunction(0x5096A0u)) {
        auto targetFn = runtime->lookupFunction(0x5096A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516534u; }
        if (ctx->pc != 0x516534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005096A0_0x5096a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516534u; }
        if (ctx->pc != 0x516534u) { return; }
    }
    ctx->pc = 0x516534u;
label_516534:
    // 0x516534: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x516534u;
    {
        const bool branch_taken_0x516534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x516534) {
            ctx->pc = 0x516654u;
            goto label_516654;
        }
    }
    ctx->pc = 0x51653Cu;
label_51653c:
    // 0x51653c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51653cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x516540: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x516540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x516544: 0xc142520  jal         func_509480
    ctx->pc = 0x516544u;
    SET_GPR_U32(ctx, 31, 0x51654Cu);
    ctx->pc = 0x516548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516544u;
            // 0x516548: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509480u;
    if (runtime->hasFunction(0x509480u)) {
        auto targetFn = runtime->lookupFunction(0x509480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51654Cu; }
        if (ctx->pc != 0x51654Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509480_0x509480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51654Cu; }
        if (ctx->pc != 0x51654Cu) { return; }
    }
    ctx->pc = 0x51654Cu;
label_51654c:
    // 0x51654c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51654cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x516550: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x516550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x516554: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x516554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x516558: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x516558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x51655c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x51655cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x516560: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x516560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x516564: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x516564u;
    {
        const bool branch_taken_0x516564 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x516568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516564u;
            // 0x516568: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x516564) {
            ctx->pc = 0x516584u;
            goto label_516584;
        }
    }
    ctx->pc = 0x51656Cu;
    // 0x51656c: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x51656cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x516570: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x516570u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x516574: 0x82220074  lb          $v0, 0x74($s1)
    ctx->pc = 0x516574u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x516578: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x516578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x51657c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x51657Cu;
    {
        const bool branch_taken_0x51657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x516580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51657Cu;
            // 0x516580: 0xa2220074  sb          $v0, 0x74($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51657c) {
            ctx->pc = 0x516588u;
            goto label_516588;
        }
    }
    ctx->pc = 0x516584u;
label_516584:
    // 0x516584: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x516584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_516588:
    // 0x516588: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x516588u;
    {
        const bool branch_taken_0x516588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x516588) {
            ctx->pc = 0x516654u;
            goto label_516654;
        }
    }
    ctx->pc = 0x516590u;
    // 0x516590: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x516590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x516594: 0xc142584  jal         func_509610
    ctx->pc = 0x516594u;
    SET_GPR_U32(ctx, 31, 0x51659Cu);
    ctx->pc = 0x516598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516594u;
            // 0x516598: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509610u;
    if (runtime->hasFunction(0x509610u)) {
        auto targetFn = runtime->lookupFunction(0x509610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51659Cu; }
        if (ctx->pc != 0x51659Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509610_0x509610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51659Cu; }
        if (ctx->pc != 0x51659Cu) { return; }
    }
    ctx->pc = 0x51659Cu;
label_51659c:
    // 0x51659c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x51659cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x5165a0: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x5165a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x5165a4: 0xc454ad80  lwc1        $f20, -0x5280($v0)
    ctx->pc = 0x5165a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x5165a8: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x5165a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x5165ac: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x5165acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x5165b0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x5165b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x5165b4: 0xc44cad80  lwc1        $f12, -0x5280($v0)
    ctx->pc = 0x5165b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x5165b8: 0xc0c6250  jal         func_318940
    ctx->pc = 0x5165B8u;
    SET_GPR_U32(ctx, 31, 0x5165C0u);
    ctx->pc = 0x5165BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5165B8u;
            // 0x5165bc: 0x26060860  addiu       $a2, $s0, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5165C0u; }
        if (ctx->pc != 0x5165C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5165C0u; }
        if (ctx->pc != 0x5165C0u) { return; }
    }
    ctx->pc = 0x5165C0u;
label_5165c0:
    // 0x5165c0: 0xc60d0880  lwc1        $f13, 0x880($s0)
    ctx->pc = 0x5165c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x5165c4: 0x3c02411d  lui         $v0, 0x411D
    ctx->pc = 0x5165c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16669 << 16));
    // 0x5165c8: 0xc6010930  lwc1        $f1, 0x930($s0)
    ctx->pc = 0x5165c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5165cc: 0x3442e9e7  ori         $v0, $v0, 0xE9E7
    ctx->pc = 0x5165ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59879);
    // 0x5165d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5165d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5165d4: 0x0  nop
    ctx->pc = 0x5165d4u;
    // NOP
    // 0x5165d8: 0x46016881  sub.s       $f2, $f13, $f1
    ctx->pc = 0x5165d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x5165dc: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x5165dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x5165e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x5165e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5165e4: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x5165E4u;
    {
        const bool branch_taken_0x5165e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5165e4) {
            ctx->pc = 0x516638u;
            goto label_516638;
        }
    }
    ctx->pc = 0x5165ECu;
    // 0x5165ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5165ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5165f0: 0x0  nop
    ctx->pc = 0x5165f0u;
    // NOP
    // 0x5165f4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x5165f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5165f8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x5165F8u;
    {
        const bool branch_taken_0x5165f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x5165FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5165F8u;
            // 0x5165fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5165f8) {
            ctx->pc = 0x516604u;
            goto label_516604;
        }
    }
    ctx->pc = 0x516600u;
    // 0x516600: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x516600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_516604:
    // 0x516604: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x516604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x516608: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x516608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x51660c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x51660cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x516610: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x516610u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x516614: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x516614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x516618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x516618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x51661c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x51661cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x516620: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x516620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x516624: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x516624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x516628: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x516628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x51662c: 0x0  nop
    ctx->pc = 0x51662cu;
    // NOP
    // 0x516630: 0x460d0018  adda.s      $f0, $f13
    ctx->pc = 0x516630u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x516634: 0x46020b5d  msub.s      $f13, $f1, $f2
    ctx->pc = 0x516634u;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_516638:
    // 0x516638: 0xc60c0930  lwc1        $f12, 0x930($s0)
    ctx->pc = 0x516638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x51663c: 0x26020890  addiu       $v0, $s0, 0x890
    ctx->pc = 0x51663cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x516640: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x516640u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x516644: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x516644u;
    SET_GPR_U32(ctx, 31, 0x51664Cu);
    ctx->pc = 0x516648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516644u;
            // 0x516648: 0x2444009c  addiu       $a0, $v0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51664Cu; }
        if (ctx->pc != 0x51664Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51664Cu; }
        if (ctx->pc != 0x51664Cu) { return; }
    }
    ctx->pc = 0x51664Cu;
label_51664c:
    // 0x51664c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x51664cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x516650: 0xae020e30  sw          $v0, 0xE30($s0)
    ctx->pc = 0x516650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 2));
label_516654:
    // 0x516654: 0x8e020da0  lw          $v0, 0xDA0($s0)
    ctx->pc = 0x516654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_516658:
    // 0x516658: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x516658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x51665c: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x51665Cu;
    {
        const bool branch_taken_0x51665c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51665c) {
            ctx->pc = 0x516660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51665Cu;
            // 0x516660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516774u;
            goto label_516774;
        }
    }
    ctx->pc = 0x516664u;
    // 0x516664: 0xae000e30  sw          $zero, 0xE30($s0)
    ctx->pc = 0x516664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 0));
    // 0x516668: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x516668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x51666c: 0x8c430ea4  lw          $v1, 0xEA4($v0)
    ctx->pc = 0x51666cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x516670: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x516670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x516674: 0x8c63012c  lw          $v1, 0x12C($v1)
    ctx->pc = 0x516674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x516678: 0x96020c7e  lhu         $v0, 0xC7E($s0)
    ctx->pc = 0x516678u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 3198)));
    // 0x51667c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x51667cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x516680: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x516680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x516684: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x516684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x516688: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x516688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x51668c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x51668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x516690: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x516690u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x516694: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x516694u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x516698: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x516698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x51669c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x51669cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x5166a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x5166a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x5166a4: 0xc04cc90  jal         func_133240
    ctx->pc = 0x5166A4u;
    SET_GPR_U32(ctx, 31, 0x5166ACu);
    ctx->pc = 0x5166A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5166A4u;
            // 0x5166a8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5166ACu; }
        if (ctx->pc != 0x5166ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5166ACu; }
        if (ctx->pc != 0x5166ACu) { return; }
    }
    ctx->pc = 0x5166ACu;
label_5166ac:
    // 0x5166ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x5166acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x5166b0: 0xc04cc44  jal         func_133110
    ctx->pc = 0x5166B0u;
    SET_GPR_U32(ctx, 31, 0x5166B8u);
    ctx->pc = 0x5166B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5166B0u;
            // 0x5166b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5166B8u; }
        if (ctx->pc != 0x5166B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5166B8u; }
        if (ctx->pc != 0x5166B8u) { return; }
    }
    ctx->pc = 0x5166B8u;
label_5166b8:
    // 0x5166b8: 0x26040820  addiu       $a0, $s0, 0x820
    ctx->pc = 0x5166b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x5166bc: 0xc04cc08  jal         func_133020
    ctx->pc = 0x5166BCu;
    SET_GPR_U32(ctx, 31, 0x5166C4u);
    ctx->pc = 0x5166C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5166BCu;
            // 0x5166c0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5166C4u; }
        if (ctx->pc != 0x5166C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5166C4u; }
        if (ctx->pc != 0x5166C4u) { return; }
    }
    ctx->pc = 0x5166C4u;
label_5166c4:
    // 0x5166c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x5166c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x5166c8: 0x0  nop
    ctx->pc = 0x5166c8u;
    // NOP
    // 0x5166cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x5166ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5166d0: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x5166D0u;
    {
        const bool branch_taken_0x5166d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5166d0) {
            ctx->pc = 0x5166D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5166D0u;
            // 0x5166d4: 0x26040560  addiu       $a0, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5166F0u;
            goto label_5166f0;
        }
    }
    ctx->pc = 0x5166D8u;
    // 0x5166d8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5166d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x5166dc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x5166dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x5166e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5166e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5166e4: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x5166E4u;
    SET_GPR_U32(ctx, 31, 0x5166ECu);
    ctx->pc = 0x5166E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5166E4u;
            // 0x5166e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5166ECu; }
        if (ctx->pc != 0x5166ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5166ECu; }
        if (ctx->pc != 0x5166ECu) { return; }
    }
    ctx->pc = 0x5166ECu;
label_5166ec:
    // 0x5166ec: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x5166ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_5166f0:
    // 0x5166f0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x5166f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x5166f4: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x5166F4u;
    SET_GPR_U32(ctx, 31, 0x5166FCu);
    ctx->pc = 0x5166F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5166F4u;
            // 0x5166f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5166FCu; }
        if (ctx->pc != 0x5166FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5166FCu; }
        if (ctx->pc != 0x5166FCu) { return; }
    }
    ctx->pc = 0x5166FCu;
label_5166fc:
    // 0x5166fc: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x5166fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x516700: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x516700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
    // 0x516704: 0xc6010e1c  lwc1        $f1, 0xE1C($s0)
    ctx->pc = 0x516704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x516708: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x516708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x51670c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x51670cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x516710: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x516710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x516714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x516714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x516718: 0x46147018  adda.s      $f14, $f20
    ctx->pc = 0x516718u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[20]);
    // 0x51671c: 0x4601031c  madd.s      $f12, $f0, $f1
    ctx->pc = 0x51671cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x516720: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x516720u;
    SET_GPR_U32(ctx, 31, 0x516728u);
    ctx->pc = 0x516724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516720u;
            // 0x516724: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516728u; }
        if (ctx->pc != 0x516728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516728u; }
        if (ctx->pc != 0x516728u) { return; }
    }
    ctx->pc = 0x516728u;
label_516728:
    // 0x516728: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x516728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x51672c: 0x2604092c  addiu       $a0, $s0, 0x92C
    ctx->pc = 0x51672cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
    // 0x516730: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x516730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x516734: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x516734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x516738: 0xc6010e1c  lwc1        $f1, 0xE1C($s0)
    ctx->pc = 0x516738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x51673c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x51673cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x516740: 0x46147018  adda.s      $f14, $f20
    ctx->pc = 0x516740u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[20]);
    // 0x516744: 0x4601031c  madd.s      $f12, $f0, $f1
    ctx->pc = 0x516744u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x516748: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x516748u;
    SET_GPR_U32(ctx, 31, 0x516750u);
    ctx->pc = 0x51674Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516748u;
            // 0x51674c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516750u; }
        if (ctx->pc != 0x516750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516750u; }
        if (ctx->pc != 0x516750u) { return; }
    }
    ctx->pc = 0x516750u;
label_516750:
    // 0x516750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x516750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x516754: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x516754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x516758: 0xc142654  jal         func_509950
    ctx->pc = 0x516758u;
    SET_GPR_U32(ctx, 31, 0x516760u);
    ctx->pc = 0x51675Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516758u;
            // 0x51675c: 0xae000e1c  sw          $zero, 0xE1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509950u;
    if (runtime->hasFunction(0x509950u)) {
        auto targetFn = runtime->lookupFunction(0x509950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516760u; }
        if (ctx->pc != 0x516760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509950_0x509950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516760u; }
        if (ctx->pc != 0x516760u) { return; }
    }
    ctx->pc = 0x516760u;
label_516760:
    // 0x516760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x516760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x516764: 0xc07649c  jal         func_1D9270
    ctx->pc = 0x516764u;
    SET_GPR_U32(ctx, 31, 0x51676Cu);
    ctx->pc = 0x516768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516764u;
            // 0x516768: 0x2405004e  addiu       $a1, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51676Cu; }
        if (ctx->pc != 0x51676Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51676Cu; }
        if (ctx->pc != 0x51676Cu) { return; }
    }
    ctx->pc = 0x51676Cu;
label_51676c:
    // 0x51676c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x51676Cu;
    {
        const bool branch_taken_0x51676c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x516770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51676Cu;
            // 0x516770: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51676c) {
            ctx->pc = 0x516780u;
            goto label_516780;
        }
    }
    ctx->pc = 0x516774u;
label_516774:
    // 0x516774: 0xc0c13e4  jal         func_304F90
    ctx->pc = 0x516774u;
    SET_GPR_U32(ctx, 31, 0x51677Cu);
    ctx->pc = 0x304F90u;
    if (runtime->hasFunction(0x304F90u)) {
        auto targetFn = runtime->lookupFunction(0x304F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51677Cu; }
        if (ctx->pc != 0x51677Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304F90_0x304f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51677Cu; }
        if (ctx->pc != 0x51677Cu) { return; }
    }
    ctx->pc = 0x51677Cu;
label_51677c:
    // 0x51677c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x51677cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_516780:
    // 0x516780: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x516780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x516784: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x516784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x516788: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x516788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51678c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x51678cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x516790: 0x3e00008  jr          $ra
    ctx->pc = 0x516790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x516794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516790u;
            // 0x516794: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x516798u;
    // 0x516798: 0x0  nop
    ctx->pc = 0x516798u;
    // NOP
    // 0x51679c: 0x0  nop
    ctx->pc = 0x51679cu;
    // NOP
    // 0x5167a0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x5167a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x5167a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5167a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x5167a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x5167a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x5167ac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x5167acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x5167b0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x5167b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x5167b4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x5167b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x5167b8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x5167b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5167bc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x5167bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x5167c0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x5167c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5167c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x5167c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x5167c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x5167c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x5167cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x5167ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x5167d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x5167d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x5167d4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x5167d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x5167d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x5167d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x5167dc: 0x8c430ea4  lw          $v1, 0xEA4($v0)
    ctx->pc = 0x5167dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x5167e0: 0x8cb30024  lw          $s3, 0x24($a1)
    ctx->pc = 0x5167e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x5167e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5167e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x5167e8: 0x8c74012c  lw          $s4, 0x12C($v1)
    ctx->pc = 0x5167e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x5167ec: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x5167ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x5167f0: 0x8e630d74  lw          $v1, 0xD74($s3)
    ctx->pc = 0x5167f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
    // 0x5167f4: 0x8c500968  lw          $s0, 0x968($v0)
    ctx->pc = 0x5167f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x5167f8: 0xc142504  jal         func_509410
    ctx->pc = 0x5167F8u;
    SET_GPR_U32(ctx, 31, 0x516800u);
    ctx->pc = 0x5167FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5167F8u;
            // 0x5167fc: 0x247702a0  addiu       $s7, $v1, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509410u;
    if (runtime->hasFunction(0x509410u)) {
        auto targetFn = runtime->lookupFunction(0x509410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516800u; }
        if (ctx->pc != 0x516800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509410_0x509410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516800u; }
        if (ctx->pc != 0x516800u) { return; }
    }
    ctx->pc = 0x516800u;
label_516800:
    // 0x516800: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x516800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x516804: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x516804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x516808: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x516808u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x51680c: 0x8eb20070  lw          $s2, 0x70($s5)
    ctx->pc = 0x51680cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x516810: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x516810u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x516814: 0x246323c0  addiu       $v1, $v1, 0x23C0
    ctx->pc = 0x516814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9152));
    // 0x516818: 0x2222823  subu        $a1, $s1, $v0
    ctx->pc = 0x516818u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x51681c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x51681cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x516820: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x516820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x516824: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x516824u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x516828: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x516828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x51682c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x51682cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x516830: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x516830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x516834: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x516834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x516838: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x516838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x51683c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51683cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x516840: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x516840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x516844: 0xe6600de0  swc1        $f0, 0xDE0($s3)
    ctx->pc = 0x516844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3552), bits); }
    // 0x516848: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x516848u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x51684c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x51684Cu;
    SET_GPR_U32(ctx, 31, 0x516854u);
    ctx->pc = 0x516850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51684Cu;
            // 0x516850: 0xe6600de4  swc1        $f0, 0xDE4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516854u; }
        if (ctx->pc != 0x516854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516854u; }
        if (ctx->pc != 0x516854u) { return; }
    }
    ctx->pc = 0x516854u;
label_516854:
    // 0x516854: 0x26640320  addiu       $a0, $s3, 0x320
    ctx->pc = 0x516854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
    // 0x516858: 0x26650580  addiu       $a1, $s3, 0x580
    ctx->pc = 0x516858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1408));
    // 0x51685c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x51685Cu;
    SET_GPR_U32(ctx, 31, 0x516864u);
    ctx->pc = 0x516860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51685Cu;
            // 0x516860: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516864u; }
        if (ctx->pc != 0x516864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516864u; }
        if (ctx->pc != 0x516864u) { return; }
    }
    ctx->pc = 0x516864u;
label_516864:
    // 0x516864: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x516864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x516868: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x516868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x51686c: 0x24632a60  addiu       $v1, $v1, 0x2A60
    ctx->pc = 0x51686cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10848));
    // 0x516870: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x516870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x516874: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x516874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x516878: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x516878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51687c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x51687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x516880: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x516880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x516884: 0xe6600690  swc1        $f0, 0x690($s3)
    ctx->pc = 0x516884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1680), bits); }
    // 0x516888: 0x266602c0  addiu       $a2, $s3, 0x2C0
    ctx->pc = 0x516888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
    // 0x51688c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x51688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x516890: 0x26670820  addiu       $a3, $s3, 0x820
    ctx->pc = 0x516890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 2080));
    // 0x516894: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x516894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x516898: 0xe6a0007c  swc1        $f0, 0x7C($s5)
    ctx->pc = 0x516898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 124), bits); }
    // 0x51689c: 0xaea00054  sw          $zero, 0x54($s5)
    ctx->pc = 0x51689cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 0));
    // 0x5168a0: 0xaea0005c  sw          $zero, 0x5C($s5)
    ctx->pc = 0x5168a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 0));
    // 0x5168a4: 0xaea00058  sw          $zero, 0x58($s5)
    ctx->pc = 0x5168a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 0));
    // 0x5168a8: 0xa2a00074  sb          $zero, 0x74($s5)
    ctx->pc = 0x5168a8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x5168ac: 0xae600dc0  sw          $zero, 0xDC0($s3)
    ctx->pc = 0x5168acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3520), GPR_U32(ctx, 0));
    // 0x5168b0: 0xae600dc4  sw          $zero, 0xDC4($s3)
    ctx->pc = 0x5168b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3524), GPR_U32(ctx, 0));
    // 0x5168b4: 0xae600dcc  sw          $zero, 0xDCC($s3)
    ctx->pc = 0x5168b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3532), GPR_U32(ctx, 0));
    // 0x5168b8: 0xae600dd0  sw          $zero, 0xDD0($s3)
    ctx->pc = 0x5168b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3536), GPR_U32(ctx, 0));
    // 0x5168bc: 0xc0c614c  jal         func_318530
    ctx->pc = 0x5168BCu;
    SET_GPR_U32(ctx, 31, 0x5168C4u);
    ctx->pc = 0x5168C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5168BCu;
            // 0x5168c0: 0xae600dd4  sw          $zero, 0xDD4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318530u;
    if (runtime->hasFunction(0x318530u)) {
        auto targetFn = runtime->lookupFunction(0x318530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5168C4u; }
        if (ctx->pc != 0x5168C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318530_0x318530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5168C4u; }
        if (ctx->pc != 0x5168C4u) { return; }
    }
    ctx->pc = 0x5168C4u;
label_5168c4:
    // 0x5168c4: 0x8e890008  lw          $t1, 0x8($s4)
    ctx->pc = 0x5168c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x5168c8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x5168c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x5168cc: 0x96a20042  lhu         $v0, 0x42($s5)
    ctx->pc = 0x5168ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 66)));
    // 0x5168d0: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x5168d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x5168d4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x5168d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x5168d8: 0x266702c0  addiu       $a3, $s3, 0x2C0
    ctx->pc = 0x5168d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
    // 0x5168dc: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x5168dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x5168e0: 0x24180  sll         $t0, $v0, 6
    ctx->pc = 0x5168e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x5168e4: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x5168e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x5168e8: 0x688021  addu        $s0, $v1, $t0
    ctx->pc = 0x5168e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x5168ec: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x5168ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5168f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x5168f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x5168f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5168f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5168f8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x5168f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x5168fc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x5168fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x516900: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x516900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x516904: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x516904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x516908: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x516908u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x51690c: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x51690cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x516910: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x516910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x516914: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x516914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x516918: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x516918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x51691c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x51691cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x516920: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x516920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x516924: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x516924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x516928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x516928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x51692c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x51692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x516930: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x516930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x516934: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x516934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x516938: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x516938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x51693c: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x51693cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x516940: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x516940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x516944: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x516944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x516948: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x516948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x51694c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x51694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x516950: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x516950u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x516954: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x516954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x516958: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x516958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x51695c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x51695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x516960: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x516960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x516964: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x516964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x516968: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x516968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x51696c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x51696cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x516970: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x516970u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x516974: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x516974u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x516978: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x516978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x51697c: 0xc0bc5e8  jal         func_2F17A0
    ctx->pc = 0x51697Cu;
    SET_GPR_U32(ctx, 31, 0x516984u);
    ctx->pc = 0x516980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51697Cu;
            // 0x516980: 0xe7a0011c  swc1        $f0, 0x11C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F17A0u;
    if (runtime->hasFunction(0x2F17A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F17A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516984u; }
        if (ctx->pc != 0x516984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F17A0_0x2f17a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516984u; }
        if (ctx->pc != 0x516984u) { return; }
    }
    ctx->pc = 0x516984u;
label_516984:
    // 0x516984: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x516984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x516988: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x516988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x51698c: 0xc04cc90  jal         func_133240
    ctx->pc = 0x51698Cu;
    SET_GPR_U32(ctx, 31, 0x516994u);
    ctx->pc = 0x516990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51698Cu;
            // 0x516990: 0x266602c0  addiu       $a2, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516994u; }
        if (ctx->pc != 0x516994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516994u; }
        if (ctx->pc != 0x516994u) { return; }
    }
    ctx->pc = 0x516994u;
label_516994:
    // 0x516994: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x516994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x516998: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x516998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x51699c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x51699cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5169a0: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x5169A0u;
    SET_GPR_U32(ctx, 31, 0x5169A8u);
    ctx->pc = 0x5169A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5169A0u;
            // 0x5169a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5169A8u; }
        if (ctx->pc != 0x5169A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5169A8u; }
        if (ctx->pc != 0x5169A8u) { return; }
    }
    ctx->pc = 0x5169A8u;
label_5169a8:
    // 0x5169a8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x5169a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x5169ac: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x5169acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x5169b0: 0xc04cc90  jal         func_133240
    ctx->pc = 0x5169B0u;
    SET_GPR_U32(ctx, 31, 0x5169B8u);
    ctx->pc = 0x5169B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5169B0u;
            // 0x5169b4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5169B8u; }
        if (ctx->pc != 0x5169B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5169B8u; }
        if (ctx->pc != 0x5169B8u) { return; }
    }
    ctx->pc = 0x5169B8u;
label_5169b8:
    // 0x5169b8: 0x8eb20070  lw          $s2, 0x70($s5)
    ctx->pc = 0x5169b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x5169bc: 0xc04cc14  jal         func_133050
    ctx->pc = 0x5169BCu;
    SET_GPR_U32(ctx, 31, 0x5169C4u);
    ctx->pc = 0x5169C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5169BCu;
            // 0x5169c0: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5169C4u; }
        if (ctx->pc != 0x5169C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5169C4u; }
        if (ctx->pc != 0x5169C4u) { return; }
    }
    ctx->pc = 0x5169C4u;
label_5169c4:
    // 0x5169c4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x5169c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x5169c8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x5169c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x5169cc: 0x24631b90  addiu       $v1, $v1, 0x1B90
    ctx->pc = 0x5169ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7056));
    // 0x5169d0: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x5169d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x5169d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x5169d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x5169d8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x5169d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5169dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x5169dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5169e0: 0x45020032  bc1fl       . + 4 + (0x32 << 2)
    ctx->pc = 0x5169E0u;
    {
        const bool branch_taken_0x5169e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5169e0) {
            ctx->pc = 0x5169E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5169E0u;
            // 0x5169e4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516AACu;
            goto label_516aac;
        }
    }
    ctx->pc = 0x5169E8u;
    // 0x5169e8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x5169e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x5169ec: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x5169ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x5169f0: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x5169f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x5169f4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x5169f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x5169f8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x5169f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5169fc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x5169fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x516a00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x516a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x516a04: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x516a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x516a08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x516a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x516a0c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x516a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x516a10: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x516a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x516a14: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x516a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x516a18: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x516a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x516a1c: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x516a1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x516a20: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x516a20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x516a24: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x516a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x516a28: 0xc04cc90  jal         func_133240
    ctx->pc = 0x516A28u;
    SET_GPR_U32(ctx, 31, 0x516A30u);
    ctx->pc = 0x516A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516A28u;
            // 0x516a2c: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516A30u; }
        if (ctx->pc != 0x516A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516A30u; }
        if (ctx->pc != 0x516A30u) { return; }
    }
    ctx->pc = 0x516A30u;
label_516a30:
    // 0x516a30: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x516a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x516a34: 0xc04cc44  jal         func_133110
    ctx->pc = 0x516A34u;
    SET_GPR_U32(ctx, 31, 0x516A3Cu);
    ctx->pc = 0x516A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516A34u;
            // 0x516a38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516A3Cu; }
        if (ctx->pc != 0x516A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516A3Cu; }
        if (ctx->pc != 0x516A3Cu) { return; }
    }
    ctx->pc = 0x516A3Cu;
label_516a3c:
    // 0x516a3c: 0x8eb20070  lw          $s2, 0x70($s5)
    ctx->pc = 0x516a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x516a40: 0xc04cc14  jal         func_133050
    ctx->pc = 0x516A40u;
    SET_GPR_U32(ctx, 31, 0x516A48u);
    ctx->pc = 0x516A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516A40u;
            // 0x516a44: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516A48u; }
        if (ctx->pc != 0x516A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516A48u; }
        if (ctx->pc != 0x516A48u) { return; }
    }
    ctx->pc = 0x516A48u;
label_516a48:
    // 0x516a48: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x516a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x516a4c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x516a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x516a50: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x516a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x516a54: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x516a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x516a58: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x516a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x516a5c: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x516A5Cu;
    SET_GPR_U32(ctx, 31, 0x516A64u);
    ctx->pc = 0x516A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516A5Cu;
            // 0x516a60: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516A64u; }
        if (ctx->pc != 0x516A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516A64u; }
        if (ctx->pc != 0x516A64u) { return; }
    }
    ctx->pc = 0x516A64u;
label_516a64:
    // 0x516a64: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x516a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x516a68: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x516a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x516a6c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x516a6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x516a70: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x516a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x516a74: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x516a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x516a78: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x516a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x516a7c: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x516A7Cu;
    SET_GPR_U32(ctx, 31, 0x516A84u);
    ctx->pc = 0x516A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516A7Cu;
            // 0x516a80: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516A84u; }
        if (ctx->pc != 0x516A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516A84u; }
        if (ctx->pc != 0x516A84u) { return; }
    }
    ctx->pc = 0x516A84u;
label_516a84:
    // 0x516a84: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x516a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x516a88: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x516a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x516a8c: 0xc04cc90  jal         func_133240
    ctx->pc = 0x516A8Cu;
    SET_GPR_U32(ctx, 31, 0x516A94u);
    ctx->pc = 0x516A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516A8Cu;
            // 0x516a90: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516A94u; }
        if (ctx->pc != 0x516A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516A94u; }
        if (ctx->pc != 0x516A94u) { return; }
    }
    ctx->pc = 0x516A94u;
label_516a94:
    // 0x516a94: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x516a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x516a98: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x516a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x516a9c: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x516A9Cu;
    SET_GPR_U32(ctx, 31, 0x516AA4u);
    ctx->pc = 0x516AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516A9Cu;
            // 0x516aa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516AA4u; }
        if (ctx->pc != 0x516AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516AA4u; }
        if (ctx->pc != 0x516AA4u) { return; }
    }
    ctx->pc = 0x516AA4u;
label_516aa4:
    // 0x516aa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x516AA4u;
    {
        const bool branch_taken_0x516aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x516AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516AA4u;
            // 0x516aa8: 0x64160001  daddiu      $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x516aa4) {
            ctx->pc = 0x516AB8u;
            goto label_516ab8;
        }
    }
    ctx->pc = 0x516AACu;
label_516aac:
    // 0x516aac: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x516aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x516ab0: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x516AB0u;
    SET_GPR_U32(ctx, 31, 0x516AB8u);
    ctx->pc = 0x516AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516AB0u;
            // 0x516ab4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516AB8u; }
        if (ctx->pc != 0x516AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516AB8u; }
        if (ctx->pc != 0x516AB8u) { return; }
    }
    ctx->pc = 0x516AB8u;
label_516ab8:
    // 0x516ab8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x516ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x516abc: 0xc04cc44  jal         func_133110
    ctx->pc = 0x516ABCu;
    SET_GPR_U32(ctx, 31, 0x516AC4u);
    ctx->pc = 0x516AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516ABCu;
            // 0x516ac0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516AC4u; }
        if (ctx->pc != 0x516AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516AC4u; }
        if (ctx->pc != 0x516AC4u) { return; }
    }
    ctx->pc = 0x516AC4u;
label_516ac4:
    // 0x516ac4: 0x26640560  addiu       $a0, $s3, 0x560
    ctx->pc = 0x516ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
    // 0x516ac8: 0xc075318  jal         func_1D4C60
    ctx->pc = 0x516AC8u;
    SET_GPR_U32(ctx, 31, 0x516AD0u);
    ctx->pc = 0x516ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516AC8u;
            // 0x516acc: 0x266505d0  addiu       $a1, $s3, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516AD0u; }
        if (ctx->pc != 0x516AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516AD0u; }
        if (ctx->pc != 0x516AD0u) { return; }
    }
    ctx->pc = 0x516AD0u;
label_516ad0:
    // 0x516ad0: 0x26650560  addiu       $a1, $s3, 0x560
    ctx->pc = 0x516ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
    // 0x516ad4: 0x26640840  addiu       $a0, $s3, 0x840
    ctx->pc = 0x516ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2112));
    // 0x516ad8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x516ad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x516adc: 0xc0c6250  jal         func_318940
    ctx->pc = 0x516ADCu;
    SET_GPR_U32(ctx, 31, 0x516AE4u);
    ctx->pc = 0x516AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516ADCu;
            // 0x516ae0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516AE4u; }
        if (ctx->pc != 0x516AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516AE4u; }
        if (ctx->pc != 0x516AE4u) { return; }
    }
    ctx->pc = 0x516AE4u;
label_516ae4:
    // 0x516ae4: 0x26640560  addiu       $a0, $s3, 0x560
    ctx->pc = 0x516ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
    // 0x516ae8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x516ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x516aec: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x516AECu;
    SET_GPR_U32(ctx, 31, 0x516AF4u);
    ctx->pc = 0x516AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516AECu;
            // 0x516af0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516AF4u; }
        if (ctx->pc != 0x516AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516AF4u; }
        if (ctx->pc != 0x516AF4u) { return; }
    }
    ctx->pc = 0x516AF4u;
label_516af4:
    // 0x516af4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x516af4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x516af8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x516af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x516afc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x516afcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x516b00: 0x266505d0  addiu       $a1, $s3, 0x5D0
    ctx->pc = 0x516b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1488));
    // 0x516b04: 0xc66002f0  lwc1        $f0, 0x2F0($s3)
    ctx->pc = 0x516b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x516b08: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x516b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x516b0c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x516b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x516b10: 0xc66002f4  lwc1        $f0, 0x2F4($s3)
    ctx->pc = 0x516b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x516b14: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x516b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x516b18: 0xc66002f8  lwc1        $f0, 0x2F8($s3)
    ctx->pc = 0x516b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x516b1c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x516b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x516b20: 0xc66002fc  lwc1        $f0, 0x2FC($s3)
    ctx->pc = 0x516b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x516b24: 0xc0bc684  jal         func_2F1A10
    ctx->pc = 0x516B24u;
    SET_GPR_U32(ctx, 31, 0x516B2Cu);
    ctx->pc = 0x516B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516B24u;
            // 0x516b28: 0xe7a000ec  swc1        $f0, 0xEC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1A10u;
    if (runtime->hasFunction(0x2F1A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F1A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516B2Cu; }
        if (ctx->pc != 0x516B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1A10_0x2f1a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516B2Cu; }
        if (ctx->pc != 0x516B2Cu) { return; }
    }
    ctx->pc = 0x516B2Cu;
label_516b2c:
    // 0x516b2c: 0x26630890  addiu       $v1, $s3, 0x890
    ctx->pc = 0x516b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
    // 0x516b30: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x516b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x516b34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x516b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x516b38: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x516b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x516b3c: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x516b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x516b40: 0xc0c6250  jal         func_318940
    ctx->pc = 0x516B40u;
    SET_GPR_U32(ctx, 31, 0x516B48u);
    ctx->pc = 0x516B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516B40u;
            // 0x516b44: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516B48u; }
        if (ctx->pc != 0x516B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516B48u; }
        if (ctx->pc != 0x516B48u) { return; }
    }
    ctx->pc = 0x516B48u;
label_516b48:
    // 0x516b48: 0x92e30004  lbu         $v1, 0x4($s7)
    ctx->pc = 0x516b48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x516b4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x516b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x516b50: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x516B50u;
    {
        const bool branch_taken_0x516b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x516b50) {
            ctx->pc = 0x516B54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516B50u;
            // 0x516b54: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516B68u;
            goto label_516b68;
        }
    }
    ctx->pc = 0x516B58u;
    // 0x516b58: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x516b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x516b5c: 0x1440013d  bnez        $v0, . + 4 + (0x13D << 2)
    ctx->pc = 0x516B5Cu;
    {
        const bool branch_taken_0x516b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x516b5c) {
            ctx->pc = 0x517054u;
            goto label_517054;
        }
    }
    ctx->pc = 0x516B64u;
    // 0x516b64: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x516b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_516b68:
    // 0x516b68: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x516b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x516b6c: 0xc6600880  lwc1        $f0, 0x880($s3)
    ctx->pc = 0x516b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x516b70: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x516b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x516b74: 0x0  nop
    ctx->pc = 0x516b74u;
    // NOP
    // 0x516b78: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x516b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x516b7c: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
    ctx->pc = 0x516B7Cu;
    {
        const bool branch_taken_0x516b7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x516b7c) {
            ctx->pc = 0x516B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516B7Cu;
            // 0x516b80: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516C30u;
            goto label_516c30;
        }
    }
    ctx->pc = 0x516B84u;
    // 0x516b84: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x516b84u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x516b88: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x516b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x516b8c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x516b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x516b90: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x516b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x516b94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x516b94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516b98: 0x0  nop
    ctx->pc = 0x516b98u;
    // NOP
    // 0x516b9c: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x516b9cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x516ba0: 0x0  nop
    ctx->pc = 0x516ba0u;
    // NOP
    // 0x516ba4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x516ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516ba8: 0x0  nop
    ctx->pc = 0x516ba8u;
    // NOP
    // 0x516bac: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x516bacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x516bb0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x516BB0u;
    {
        const bool branch_taken_0x516bb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x516bb0) {
            ctx->pc = 0x516BB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516BB0u;
            // 0x516bb4: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x516BC8u;
            goto label_516bc8;
        }
    }
    ctx->pc = 0x516BB8u;
    // 0x516bb8: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x516bb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x516bbc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x516bbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x516bc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x516BC0u;
    {
        const bool branch_taken_0x516bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x516bc0) {
            ctx->pc = 0x516BDCu;
            goto label_516bdc;
        }
    }
    ctx->pc = 0x516BC8u;
label_516bc8:
    // 0x516bc8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x516bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x516bcc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x516bccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x516bd0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x516bd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x516bd4: 0x0  nop
    ctx->pc = 0x516bd4u;
    // NOP
    // 0x516bd8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x516bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_516bdc:
    // 0x516bdc: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x516BDCu;
    {
        const bool branch_taken_0x516bdc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x516bdc) {
            ctx->pc = 0x516BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516BDCu;
            // 0x516be0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516BF0u;
            goto label_516bf0;
        }
    }
    ctx->pc = 0x516BE4u;
    // 0x516be4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x516be4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516be8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x516BE8u;
    {
        const bool branch_taken_0x516be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x516BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516BE8u;
            // 0x516bec: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x516be8) {
            ctx->pc = 0x516C08u;
            goto label_516c08;
        }
    }
    ctx->pc = 0x516BF0u;
label_516bf0:
    // 0x516bf0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x516bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x516bf4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x516bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x516bf8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x516bf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516bfc: 0x0  nop
    ctx->pc = 0x516bfcu;
    // NOP
    // 0x516c00: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x516c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x516c04: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x516c04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_516c08:
    // 0x516c08: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x516c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x516c0c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x516c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x516c10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x516c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x516c14: 0x0  nop
    ctx->pc = 0x516c14u;
    // NOP
    // 0x516c18: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x516c18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x516c1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x516c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x516c20: 0x0  nop
    ctx->pc = 0x516c20u;
    // NOP
    // 0x516c24: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x516c24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x516c28: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x516C28u;
    {
        const bool branch_taken_0x516c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x516C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516C28u;
            // 0x516c2c: 0x4603101d  msub.s      $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x516c28) {
            ctx->pc = 0x516D58u;
            goto label_516d58;
        }
    }
    ctx->pc = 0x516C30u;
label_516c30:
    // 0x516c30: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x516c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x516c34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x516c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516c38: 0x0  nop
    ctx->pc = 0x516c38u;
    // NOP
    // 0x516c3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x516c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x516c40: 0x45020046  bc1fl       . + 4 + (0x46 << 2)
    ctx->pc = 0x516C40u;
    {
        const bool branch_taken_0x516c40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x516c40) {
            ctx->pc = 0x516C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516C40u;
            // 0x516c44: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516D5Cu;
            goto label_516d5c;
        }
    }
    ctx->pc = 0x516C48u;
    // 0x516c48: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x516c48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x516c4c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x516c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x516c50: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x516c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x516c54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x516c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x516c58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x516c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516c5c: 0x0  nop
    ctx->pc = 0x516c5cu;
    // NOP
    // 0x516c60: 0x46011183  div.s       $f6, $f2, $f1
    ctx->pc = 0x516c60u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[6] = ctx->f[2] / ctx->f[1];
    // 0x516c64: 0x0  nop
    ctx->pc = 0x516c64u;
    // NOP
    // 0x516c68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x516c68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516c6c: 0x0  nop
    ctx->pc = 0x516c6cu;
    // NOP
    // 0x516c70: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x516c70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x516c74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x516C74u;
    {
        const bool branch_taken_0x516c74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x516c74) {
            ctx->pc = 0x516C80u;
            goto label_516c80;
        }
    }
    ctx->pc = 0x516C7Cu;
    // 0x516c7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x516c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_516c80:
    // 0x516c80: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x516C80u;
    {
        const bool branch_taken_0x516c80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x516c80) {
            ctx->pc = 0x516C84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516C80u;
            // 0x516c84: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516C94u;
            goto label_516c94;
        }
    }
    ctx->pc = 0x516C88u;
    // 0x516c88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x516c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516c8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x516C8Cu;
    {
        const bool branch_taken_0x516c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x516C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516C8Cu;
            // 0x516c90: 0x46800960  cvt.s.w     $f5, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x516c8c) {
            ctx->pc = 0x516CACu;
            goto label_516cac;
        }
    }
    ctx->pc = 0x516C94u;
label_516c94:
    // 0x516c94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x516c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x516c98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x516c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x516c9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x516c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516ca0: 0x0  nop
    ctx->pc = 0x516ca0u;
    // NOP
    // 0x516ca4: 0x46800960  cvt.s.w     $f5, $f1
    ctx->pc = 0x516ca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x516ca8: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x516ca8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_516cac:
    // 0x516cac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x516cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x516cb0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x516cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x516cb4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x516cb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x516cb8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x516cb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x516cbc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x516cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x516cc0: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x516cc0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x516cc4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x516cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x516cc8: 0x4605209d  msub.s      $f2, $f4, $f5
    ctx->pc = 0x516cc8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x516ccc: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x516cccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x516cd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x516cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516cd4: 0x0  nop
    ctx->pc = 0x516cd4u;
    // NOP
    // 0x516cd8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x516cd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x516cdc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x516CDCu;
    {
        const bool branch_taken_0x516cdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x516cdc) {
            ctx->pc = 0x516CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516CDCu;
            // 0x516ce0: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x516CF4u;
            goto label_516cf4;
        }
    }
    ctx->pc = 0x516CE4u;
    // 0x516ce4: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x516ce4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x516ce8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x516ce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x516cec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x516CECu;
    {
        const bool branch_taken_0x516cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x516cec) {
            ctx->pc = 0x516D08u;
            goto label_516d08;
        }
    }
    ctx->pc = 0x516CF4u;
label_516cf4:
    // 0x516cf4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x516cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x516cf8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x516cf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x516cfc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x516cfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x516d00: 0x0  nop
    ctx->pc = 0x516d00u;
    // NOP
    // 0x516d04: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x516d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_516d08:
    // 0x516d08: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x516D08u;
    {
        const bool branch_taken_0x516d08 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x516d08) {
            ctx->pc = 0x516D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516D08u;
            // 0x516d0c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516D1Cu;
            goto label_516d1c;
        }
    }
    ctx->pc = 0x516D10u;
    // 0x516d10: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x516d10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516d14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x516D14u;
    {
        const bool branch_taken_0x516d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x516D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516D14u;
            // 0x516d18: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x516d14) {
            ctx->pc = 0x516D34u;
            goto label_516d34;
        }
    }
    ctx->pc = 0x516D1Cu;
label_516d1c:
    // 0x516d1c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x516d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x516d20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x516d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x516d24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x516d24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516d28: 0x0  nop
    ctx->pc = 0x516d28u;
    // NOP
    // 0x516d2c: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x516d2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x516d30: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x516d30u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_516d34:
    // 0x516d34: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x516d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x516d38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x516d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x516d3c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x516d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x516d40: 0x0  nop
    ctx->pc = 0x516d40u;
    // NOP
    // 0x516d44: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x516d44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x516d48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x516d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x516d4c: 0x0  nop
    ctx->pc = 0x516d4cu;
    // NOP
    // 0x516d50: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x516d50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x516d54: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x516d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_516d58:
    // 0x516d58: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x516d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_516d5c:
    // 0x516d5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x516d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x516d60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x516d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x516d64: 0x0  nop
    ctx->pc = 0x516d64u;
    // NOP
    // 0x516d68: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x516d68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x516d6c: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
    ctx->pc = 0x516D6Cu;
    {
        const bool branch_taken_0x516d6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x516d6c) {
            ctx->pc = 0x516D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516D6Cu;
            // 0x516d70: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516E20u;
            goto label_516e20;
        }
    }
    ctx->pc = 0x516D74u;
    // 0x516d74: 0x4602a081  sub.s       $f2, $f20, $f2
    ctx->pc = 0x516d74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x516d78: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x516d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x516d7c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x516d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x516d80: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x516d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x516d84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x516d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516d88: 0x0  nop
    ctx->pc = 0x516d88u;
    // NOP
    // 0x516d8c: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x516d8cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x516d90: 0x0  nop
    ctx->pc = 0x516d90u;
    // NOP
    // 0x516d94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x516d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516d98: 0x0  nop
    ctx->pc = 0x516d98u;
    // NOP
    // 0x516d9c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x516d9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x516da0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x516DA0u;
    {
        const bool branch_taken_0x516da0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x516da0) {
            ctx->pc = 0x516DA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516DA0u;
            // 0x516da4: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x516DB8u;
            goto label_516db8;
        }
    }
    ctx->pc = 0x516DA8u;
    // 0x516da8: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x516da8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x516dac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x516dacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x516db0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x516DB0u;
    {
        const bool branch_taken_0x516db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x516db0) {
            ctx->pc = 0x516DCCu;
            goto label_516dcc;
        }
    }
    ctx->pc = 0x516DB8u;
label_516db8:
    // 0x516db8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x516db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x516dbc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x516dbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x516dc0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x516dc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x516dc4: 0x0  nop
    ctx->pc = 0x516dc4u;
    // NOP
    // 0x516dc8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x516dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_516dcc:
    // 0x516dcc: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x516DCCu;
    {
        const bool branch_taken_0x516dcc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x516dcc) {
            ctx->pc = 0x516DD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516DCCu;
            // 0x516dd0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516DE0u;
            goto label_516de0;
        }
    }
    ctx->pc = 0x516DD4u;
    // 0x516dd4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x516dd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516dd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x516DD8u;
    {
        const bool branch_taken_0x516dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x516DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516DD8u;
            // 0x516ddc: 0x46800920  cvt.s.w     $f4, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x516dd8) {
            ctx->pc = 0x516DF8u;
            goto label_516df8;
        }
    }
    ctx->pc = 0x516DE0u;
label_516de0:
    // 0x516de0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x516de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x516de4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x516de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x516de8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x516de8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516dec: 0x0  nop
    ctx->pc = 0x516decu;
    // NOP
    // 0x516df0: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x516df0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x516df4: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x516df4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_516df8:
    // 0x516df8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x516df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x516dfc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x516dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x516e00: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x516e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x516e04: 0x0  nop
    ctx->pc = 0x516e04u;
    // NOP
    // 0x516e08: 0x4603a081  sub.s       $f2, $f20, $f3
    ctx->pc = 0x516e08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
    // 0x516e0c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x516e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516e10: 0x0  nop
    ctx->pc = 0x516e10u;
    // NOP
    // 0x516e14: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x516e14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x516e18: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x516E18u;
    {
        const bool branch_taken_0x516e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x516E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516E18u;
            // 0x516e1c: 0x46041d1d  msub.s      $f20, $f3, $f4 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x516e18) {
            ctx->pc = 0x516F48u;
            goto label_516f48;
        }
    }
    ctx->pc = 0x516E20u;
label_516e20:
    // 0x516e20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x516e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x516e24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x516e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516e28: 0x0  nop
    ctx->pc = 0x516e28u;
    // NOP
    // 0x516e2c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x516e2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x516e30: 0x45020046  bc1fl       . + 4 + (0x46 << 2)
    ctx->pc = 0x516E30u;
    {
        const bool branch_taken_0x516e30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x516e30) {
            ctx->pc = 0x516E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516E30u;
            // 0x516e34: 0x4600a081  sub.s       $f2, $f20, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x516F4Cu;
            goto label_516f4c;
        }
    }
    ctx->pc = 0x516E38u;
    // 0x516e38: 0x46141080  add.s       $f2, $f2, $f20
    ctx->pc = 0x516e38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x516e3c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x516e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x516e40: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x516e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x516e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x516e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x516e48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x516e48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516e4c: 0x0  nop
    ctx->pc = 0x516e4cu;
    // NOP
    // 0x516e50: 0x46011183  div.s       $f6, $f2, $f1
    ctx->pc = 0x516e50u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[6] = ctx->f[2] / ctx->f[1];
    // 0x516e54: 0x0  nop
    ctx->pc = 0x516e54u;
    // NOP
    // 0x516e58: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x516e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516e5c: 0x0  nop
    ctx->pc = 0x516e5cu;
    // NOP
    // 0x516e60: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x516e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x516e64: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x516E64u;
    {
        const bool branch_taken_0x516e64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x516e64) {
            ctx->pc = 0x516E70u;
            goto label_516e70;
        }
    }
    ctx->pc = 0x516E6Cu;
    // 0x516e6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x516e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_516e70:
    // 0x516e70: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x516E70u;
    {
        const bool branch_taken_0x516e70 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x516e70) {
            ctx->pc = 0x516E74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516E70u;
            // 0x516e74: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516E84u;
            goto label_516e84;
        }
    }
    ctx->pc = 0x516E78u;
    // 0x516e78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x516e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516e7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x516E7Cu;
    {
        const bool branch_taken_0x516e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x516E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516E7Cu;
            // 0x516e80: 0x46800960  cvt.s.w     $f5, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x516e7c) {
            ctx->pc = 0x516E9Cu;
            goto label_516e9c;
        }
    }
    ctx->pc = 0x516E84u;
label_516e84:
    // 0x516e84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x516e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x516e88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x516e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x516e8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x516e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516e90: 0x0  nop
    ctx->pc = 0x516e90u;
    // NOP
    // 0x516e94: 0x46800960  cvt.s.w     $f5, $f1
    ctx->pc = 0x516e94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x516e98: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x516e98u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_516e9c:
    // 0x516e9c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x516e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x516ea0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x516ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x516ea4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x516ea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x516ea8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x516ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x516eac: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x516eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x516eb0: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x516eb0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x516eb4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x516eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x516eb8: 0x4605209d  msub.s      $f2, $f4, $f5
    ctx->pc = 0x516eb8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x516ebc: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x516ebcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x516ec0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x516ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516ec4: 0x0  nop
    ctx->pc = 0x516ec4u;
    // NOP
    // 0x516ec8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x516ec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x516ecc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x516ECCu;
    {
        const bool branch_taken_0x516ecc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x516ecc) {
            ctx->pc = 0x516ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516ECCu;
            // 0x516ed0: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x516EE4u;
            goto label_516ee4;
        }
    }
    ctx->pc = 0x516ED4u;
    // 0x516ed4: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x516ed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x516ed8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x516ed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x516edc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x516EDCu;
    {
        const bool branch_taken_0x516edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x516edc) {
            ctx->pc = 0x516EF8u;
            goto label_516ef8;
        }
    }
    ctx->pc = 0x516EE4u;
label_516ee4:
    // 0x516ee4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x516ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x516ee8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x516ee8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x516eec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x516eecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x516ef0: 0x0  nop
    ctx->pc = 0x516ef0u;
    // NOP
    // 0x516ef4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x516ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_516ef8:
    // 0x516ef8: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x516EF8u;
    {
        const bool branch_taken_0x516ef8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x516ef8) {
            ctx->pc = 0x516EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516EF8u;
            // 0x516efc: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516F0Cu;
            goto label_516f0c;
        }
    }
    ctx->pc = 0x516F00u;
    // 0x516f00: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x516f00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516f04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x516F04u;
    {
        const bool branch_taken_0x516f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x516F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516F04u;
            // 0x516f08: 0x46800920  cvt.s.w     $f4, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x516f04) {
            ctx->pc = 0x516F24u;
            goto label_516f24;
        }
    }
    ctx->pc = 0x516F0Cu;
label_516f0c:
    // 0x516f0c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x516f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x516f10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x516f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x516f14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x516f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516f18: 0x0  nop
    ctx->pc = 0x516f18u;
    // NOP
    // 0x516f1c: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x516f1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x516f20: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x516f20u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_516f24:
    // 0x516f24: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x516f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x516f28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x516f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x516f2c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x516f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x516f30: 0x0  nop
    ctx->pc = 0x516f30u;
    // NOP
    // 0x516f34: 0x46141880  add.s       $f2, $f3, $f20
    ctx->pc = 0x516f34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
    // 0x516f38: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x516f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516f3c: 0x0  nop
    ctx->pc = 0x516f3cu;
    // NOP
    // 0x516f40: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x516f40u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x516f44: 0x46041d1c  madd.s      $f20, $f3, $f4
    ctx->pc = 0x516f44u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_516f48:
    // 0x516f48: 0x4600a081  sub.s       $f2, $f20, $f0
    ctx->pc = 0x516f48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_516f4c:
    // 0x516f4c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x516f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x516f50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x516f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x516f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x516f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516f58: 0x0  nop
    ctx->pc = 0x516f58u;
    // NOP
    // 0x516f5c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x516f5cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x516f60: 0x0  nop
    ctx->pc = 0x516f60u;
    // NOP
    // 0x516f64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x516f64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x516f68: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x516f68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x516f6c: 0x0  nop
    ctx->pc = 0x516f6cu;
    // NOP
    // 0x516f70: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x516F70u;
    {
        const bool branch_taken_0x516f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x516f70) {
            ctx->pc = 0x516FD8u;
            goto label_516fd8;
        }
    }
    ctx->pc = 0x516F78u;
    // 0x516f78: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x516f78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x516f7c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x516F7Cu;
    {
        const bool branch_taken_0x516f7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x516F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516F7Cu;
            // 0x516f80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x516f7c) {
            ctx->pc = 0x516F88u;
            goto label_516f88;
        }
    }
    ctx->pc = 0x516F84u;
    // 0x516f84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x516f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_516f88:
    // 0x516f88: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x516F88u;
    {
        const bool branch_taken_0x516f88 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x516f88) {
            ctx->pc = 0x516F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516F88u;
            // 0x516f8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516F9Cu;
            goto label_516f9c;
        }
    }
    ctx->pc = 0x516F90u;
    // 0x516f90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x516f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x516f94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x516F94u;
    {
        const bool branch_taken_0x516f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x516F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516F94u;
            // 0x516f98: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x516f94) {
            ctx->pc = 0x516FB4u;
            goto label_516fb4;
        }
    }
    ctx->pc = 0x516F9Cu;
label_516f9c:
    // 0x516f9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x516f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x516fa0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x516fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x516fa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x516fa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x516fa8: 0x0  nop
    ctx->pc = 0x516fa8u;
    // NOP
    // 0x516fac: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x516facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x516fb0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x516fb0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_516fb4:
    // 0x516fb4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x516fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x516fb8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x516fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x516fbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x516fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x516fc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x516fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x516fc4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x516fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x516fc8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x516fc8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x516fcc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x516fccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x516fd0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x516FD0u;
    {
        const bool branch_taken_0x516fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x516FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516FD0u;
            // 0x516fd4: 0x460000c7  neg.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x516fd0) {
            ctx->pc = 0x517030u;
            goto label_517030;
        }
    }
    ctx->pc = 0x516FD8u;
label_516fd8:
    // 0x516fd8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x516fd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x516fdc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x516FDCu;
    {
        const bool branch_taken_0x516fdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x516FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516FDCu;
            // 0x516fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x516fdc) {
            ctx->pc = 0x516FE8u;
            goto label_516fe8;
        }
    }
    ctx->pc = 0x516FE4u;
    // 0x516fe4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x516fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_516fe8:
    // 0x516fe8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x516FE8u;
    {
        const bool branch_taken_0x516fe8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x516fe8) {
            ctx->pc = 0x516FECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x516FE8u;
            // 0x516fec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x516FFCu;
            goto label_516ffc;
        }
    }
    ctx->pc = 0x516FF0u;
    // 0x516ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x516ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x516ff4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x516FF4u;
    {
        const bool branch_taken_0x516ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x516FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x516FF4u;
            // 0x516ff8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x516ff4) {
            ctx->pc = 0x517014u;
            goto label_517014;
        }
    }
    ctx->pc = 0x516FFCu;
label_516ffc:
    // 0x516ffc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x516ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x517000: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x517000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x517004: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x517004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x517008: 0x0  nop
    ctx->pc = 0x517008u;
    // NOP
    // 0x51700c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x51700cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x517010: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x517010u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_517014:
    // 0x517014: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x517014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x517018: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x517018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x51701c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x51701cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x517020: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x517020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x517024: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x517024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x517028: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x517028u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x51702c: 0x460310dc  madd.s      $f3, $f2, $f3
    ctx->pc = 0x51702cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_517030:
    // 0x517030: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x517030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x517034: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x517034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x517038: 0xc441b848  lwc1        $f1, -0x47B8($v0)
    ctx->pc = 0x517038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x51703c: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x51703cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x517040: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x517040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x517044: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x517044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x517048: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x517048u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x51704c: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x51704cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x517050: 0x4603055c  madd.s      $f21, $f0, $f3
    ctx->pc = 0x517050u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_517054:
    // 0x517054: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x517054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x517058: 0x2664087c  addiu       $a0, $s3, 0x87C
    ctx->pc = 0x517058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2172));
    // 0x51705c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x51705cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x517060: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x517060u;
    SET_GPR_U32(ctx, 31, 0x517068u);
    ctx->pc = 0x517064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517060u;
            // 0x517064: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517068u; }
        if (ctx->pc != 0x517068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517068u; }
        if (ctx->pc != 0x517068u) { return; }
    }
    ctx->pc = 0x517068u;
label_517068:
    // 0x517068: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x517068u;
    SET_GPR_U32(ctx, 31, 0x517070u);
    ctx->pc = 0x51706Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517068u;
            // 0x51706c: 0x266407e0  addiu       $a0, $s3, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517070u; }
        if (ctx->pc != 0x517070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517070u; }
        if (ctx->pc != 0x517070u) { return; }
    }
    ctx->pc = 0x517070u;
label_517070:
    // 0x517070: 0x8e640d60  lw          $a0, 0xD60($s3)
    ctx->pc = 0x517070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
    // 0x517074: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x517074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x517078: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x517078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x51707c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x51707cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x517080: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x517080u;
    {
        const bool branch_taken_0x517080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x517084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517080u;
            // 0x517084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517080) {
            ctx->pc = 0x517090u;
            goto label_517090;
        }
    }
    ctx->pc = 0x517088u;
    // 0x517088: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x517088u;
    {
        const bool branch_taken_0x517088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51708Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517088u;
            // 0x51708c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517088) {
            ctx->pc = 0x5170CCu;
            goto label_5170cc;
        }
    }
    ctx->pc = 0x517090u;
label_517090:
    // 0x517090: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x517090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x517094: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x517094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x517098: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x517098u;
    {
        const bool branch_taken_0x517098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x517098) {
            ctx->pc = 0x51709Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x517098u;
            // 0x51709c: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5170A8u;
            goto label_5170a8;
        }
    }
    ctx->pc = 0x5170A0u;
    // 0x5170a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x5170A0u;
    {
        const bool branch_taken_0x5170a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5170A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5170A0u;
            // 0x5170a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5170a0) {
            ctx->pc = 0x5170CCu;
            goto label_5170cc;
        }
    }
    ctx->pc = 0x5170A8u;
label_5170a8:
    // 0x5170a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x5170a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x5170ac: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x5170ACu;
    {
        const bool branch_taken_0x5170ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5170ac) {
            ctx->pc = 0x5170B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5170ACu;
            // 0x5170b0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5170BCu;
            goto label_5170bc;
        }
    }
    ctx->pc = 0x5170B4u;
    // 0x5170b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x5170B4u;
    {
        const bool branch_taken_0x5170b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5170B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5170B4u;
            // 0x5170b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5170b4) {
            ctx->pc = 0x5170CCu;
            goto label_5170cc;
        }
    }
    ctx->pc = 0x5170BCu;
label_5170bc:
    // 0x5170bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x5170bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x5170c0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x5170C0u;
    {
        const bool branch_taken_0x5170c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5170c0) {
            ctx->pc = 0x5170C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5170C0u;
            // 0x5170c4: 0x8ea4006c  lw          $a0, 0x6C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5170D0u;
            goto label_5170d0;
        }
    }
    ctx->pc = 0x5170C8u;
    // 0x5170c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x5170c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5170cc:
    // 0x5170cc: 0x8ea4006c  lw          $a0, 0x6C($s5)
    ctx->pc = 0x5170ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_5170d0:
    // 0x5170d0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x5170d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x5170d4: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x5170D4u;
    {
        const bool branch_taken_0x5170d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x5170d4) {
            ctx->pc = 0x5170D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5170D4u;
            // 0x5170d8: 0x8ea60070  lw          $a2, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5170ECu;
            goto label_5170ec;
        }
    }
    ctx->pc = 0x5170DCu;
    // 0x5170dc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x5170dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x5170e0: 0x2463b100  addiu       $v1, $v1, -0x4F00
    ctx->pc = 0x5170e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947072));
    // 0x5170e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x5170E4u;
    {
        const bool branch_taken_0x5170e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5170E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5170E4u;
            // 0x5170e8: 0xaea30028  sw          $v1, 0x28($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5170e4) {
            ctx->pc = 0x517118u;
            goto label_517118;
        }
    }
    ctx->pc = 0x5170ECu;
label_5170ec:
    // 0x5170ec: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x5170ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x5170f0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x5170f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x5170f4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x5170f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x5170f8: 0x2484ada0  addiu       $a0, $a0, -0x5260
    ctx->pc = 0x5170f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946208));
    // 0x5170fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x5170fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x517100: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x517100u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x517104: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x517104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x517108: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x517108u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x51710c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x51710cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x517110: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x517110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x517114: 0xaea30028  sw          $v1, 0x28($s5)
    ctx->pc = 0x517114u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 3));
label_517118:
    // 0x517118: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x517118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x51711c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x51711cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x517120: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x517120u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x517124: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x517124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x517128: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x517128u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x51712c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x51712cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x517130: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x517130u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x517134: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x517134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x517138: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x517138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x51713c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x51713cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x517140: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x517140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x517144: 0x3e00008  jr          $ra
    ctx->pc = 0x517144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x517148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517144u;
            // 0x517148: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51714Cu;
    // 0x51714c: 0x0  nop
    ctx->pc = 0x51714cu;
    // NOP
}
