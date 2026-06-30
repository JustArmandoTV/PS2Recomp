#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E2130
// Address: 0x2e2130 - 0x2e2610
void sub_002E2130_0x2e2130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2130_0x2e2130");
#endif

    switch (ctx->pc) {
        case 0x2e2198u: goto label_2e2198;
        case 0x2e21b4u: goto label_2e21b4;
        case 0x2e21ccu: goto label_2e21cc;
        case 0x2e21e4u: goto label_2e21e4;
        case 0x2e21f8u: goto label_2e21f8;
        case 0x2e2218u: goto label_2e2218;
        case 0x2e2224u: goto label_2e2224;
        case 0x2e223cu: goto label_2e223c;
        case 0x2e2274u: goto label_2e2274;
        case 0x2e22acu: goto label_2e22ac;
        case 0x2e22b8u: goto label_2e22b8;
        case 0x2e22e0u: goto label_2e22e0;
        case 0x2e22ecu: goto label_2e22ec;
        case 0x2e2304u: goto label_2e2304;
        case 0x2e2334u: goto label_2e2334;
        case 0x2e2344u: goto label_2e2344;
        case 0x2e2394u: goto label_2e2394;
        case 0x2e23a0u: goto label_2e23a0;
        case 0x2e23acu: goto label_2e23ac;
        case 0x2e23e8u: goto label_2e23e8;
        case 0x2e2404u: goto label_2e2404;
        case 0x2e2440u: goto label_2e2440;
        case 0x2e2448u: goto label_2e2448;
        case 0x2e2464u: goto label_2e2464;
        case 0x2e2498u: goto label_2e2498;
        case 0x2e24ecu: goto label_2e24ec;
        case 0x2e2540u: goto label_2e2540;
        case 0x2e254cu: goto label_2e254c;
        case 0x2e2558u: goto label_2e2558;
        default: break;
    }

    ctx->pc = 0x2e2130u;

    // 0x2e2130: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2e2130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2e2134: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x2e2134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x2e2138: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2e2138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2e213c: 0x344323f0  ori         $v1, $v0, 0x23F0
    ctx->pc = 0x2e213cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9200);
    // 0x2e2140: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2e2140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2e2144: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e2144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e2148: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2e2148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2e214c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e214cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e2150: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e2150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2e2154: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e2154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e2158: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e2158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e215c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e215cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e2160: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e2160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e2164: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e2164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2168: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e2168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e216c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e216cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2170: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e2170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e2174: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2e2174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2178: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2e2178u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e217c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e217cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2180: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2e2180u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2e2184: 0xafa700f0  sw          $a3, 0xF0($sp)
    ctx->pc = 0x2e2184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 7));
    // 0x2e2188: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e2188u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e218c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2e218cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e2190: 0xc04781c  jal         func_11E070
    ctx->pc = 0x2E2190u;
    SET_GPR_U32(ctx, 31, 0x2E2198u);
    ctx->pc = 0x2E2194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2190u;
            // 0x2e2194: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2198u; }
        if (ctx->pc != 0x2E2198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2198u; }
        if (ctx->pc != 0x2E2198u) { return; }
    }
    ctx->pc = 0x2E2198u;
label_2e2198:
    // 0x2e2198: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2e2198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2e219c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2e219cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e21a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e21a4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2e21a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e21a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e21a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e21ac: 0xc04781c  jal         func_11E070
    ctx->pc = 0x2E21ACu;
    SET_GPR_U32(ctx, 31, 0x2E21B4u);
    ctx->pc = 0x2E21B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E21ACu;
            // 0x2e21b0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E21B4u; }
        if (ctx->pc != 0x2E21B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E21B4u; }
        if (ctx->pc != 0x2E21B4u) { return; }
    }
    ctx->pc = 0x2E21B4u;
label_2e21b4:
    // 0x2e21b4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e21b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e21b8: 0x12000106  beqz        $s0, . + 4 + (0x106 << 2)
    ctx->pc = 0x2E21B8u;
    {
        const bool branch_taken_0x2e21b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E21BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E21B8u;
            // 0x2e21bc: 0xa6600056  sh          $zero, 0x56($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e21b8) {
            ctx->pc = 0x2E25D4u;
            goto label_2e25d4;
        }
    }
    ctx->pc = 0x2E21C0u;
    // 0x2e21c0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e21c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e21c4: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x2E21C4u;
    SET_GPR_U32(ctx, 31, 0x2E21CCu);
    ctx->pc = 0x2E21C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E21C4u;
            // 0x2e21c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E21CCu; }
        if (ctx->pc != 0x2E21CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E21CCu; }
        if (ctx->pc != 0x2E21CCu) { return; }
    }
    ctx->pc = 0x2E21CCu;
label_2e21cc:
    // 0x2e21cc: 0xe7b6013c  swc1        $f22, 0x13C($sp)
    ctx->pc = 0x2e21ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x2e21d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2e21d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e21d4: 0x245effff  addiu       $fp, $v0, -0x1
    ctx->pc = 0x2e21d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e21d8: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x2e21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x2e21dc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e21dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e21e0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2e21e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_2e21e4:
    // 0x2e21e4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e21e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e21e8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2e21e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e21ec: 0x8c57000c  lw          $s7, 0xC($v0)
    ctx->pc = 0x2e21ecu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e21f0: 0xc0527c0  jal         func_149F00
    ctx->pc = 0x2E21F0u;
    SET_GPR_U32(ctx, 31, 0x2E21F8u);
    ctx->pc = 0x2E21F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E21F0u;
            // 0x2e21f4: 0x26e4000c  addiu       $a0, $s7, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149F00u;
    if (runtime->hasFunction(0x149F00u)) {
        auto targetFn = runtime->lookupFunction(0x149F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E21F8u; }
        if (ctx->pc != 0x2E21F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149F00_0x149f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E21F8u; }
        if (ctx->pc != 0x2E21F8u) { return; }
    }
    ctx->pc = 0x2E21F8u;
label_2e21f8:
    // 0x2e21f8: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x2E21F8u;
    {
        const bool branch_taken_0x2e21f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e21f8) {
            ctx->pc = 0x2E2588u;
            goto label_2e2588;
        }
    }
    ctx->pc = 0x2E2200u;
    // 0x2e2200: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2e2200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2e2204: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2e2204u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2208: 0x8ef00004  lw          $s0, 0x4($s7)
    ctx->pc = 0x2e2208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2e220c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2e220cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2e2210: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x2e2210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x2e2214: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2e2214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_2e2218:
    // 0x2e2218: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2e2218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e221c: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x2E221Cu;
    SET_GPR_U32(ctx, 31, 0x2E2224u);
    ctx->pc = 0x2E2220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E221Cu;
            // 0x2e2220: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (runtime->hasFunction(0x149DF0u)) {
        auto targetFn = runtime->lookupFunction(0x149DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2224u; }
        if (ctx->pc != 0x2E2224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DF0_0x149df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2224u; }
        if (ctx->pc != 0x2E2224u) { return; }
    }
    ctx->pc = 0x2E2224u;
label_2e2224:
    // 0x2e2224: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x2E2224u;
    {
        const bool branch_taken_0x2e2224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2224) {
            ctx->pc = 0x2E2558u;
            goto label_2e2558;
        }
    }
    ctx->pc = 0x2E222Cu;
    // 0x2e222c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2e222cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e2230: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2e2230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e2234: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E2234u;
    SET_GPR_U32(ctx, 31, 0x2E223Cu);
    ctx->pc = 0x2E2238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2234u;
            // 0x2e2238: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E223Cu; }
        if (ctx->pc != 0x2E223Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E223Cu; }
        if (ctx->pc != 0x2E223Cu) { return; }
    }
    ctx->pc = 0x2E223Cu;
label_2e223c:
    // 0x2e223c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2240: 0x1222001f  beq         $s1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E2240u;
    {
        const bool branch_taken_0x2e2240 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2240) {
            ctx->pc = 0x2E22C0u;
            goto label_2e22c0;
        }
    }
    ctx->pc = 0x2E2248u;
    // 0x2e2248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e224c: 0x1222001c  beq         $s1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E224Cu;
    {
        const bool branch_taken_0x2e224c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e224c) {
            ctx->pc = 0x2E22C0u;
            goto label_2e22c0;
        }
    }
    ctx->pc = 0x2E2254u;
    // 0x2e2254: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2254u;
    {
        const bool branch_taken_0x2e2254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2254) {
            ctx->pc = 0x2E2268u;
            goto label_2e2268;
        }
    }
    ctx->pc = 0x2E225Cu;
    // 0x2e225c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2E225Cu;
    {
        const bool branch_taken_0x2e225c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e225c) {
            ctx->pc = 0x2E22F8u;
            goto label_2e22f8;
        }
    }
    ctx->pc = 0x2E2264u;
    // 0x2e2264: 0x0  nop
    ctx->pc = 0x2e2264u;
    // NOP
label_2e2268:
    // 0x2e2268: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2e2268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e226c: 0xc04cc08  jal         func_133020
    ctx->pc = 0x2E226Cu;
    SET_GPR_U32(ctx, 31, 0x2E2274u);
    ctx->pc = 0x2E2270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E226Cu;
            // 0x2e2270: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2274u; }
        if (ctx->pc != 0x2E2274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2274u; }
        if (ctx->pc != 0x2E2274u) { return; }
    }
    ctx->pc = 0x2E2274u;
label_2e2274:
    // 0x2e2274: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e2274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2278: 0x0  nop
    ctx->pc = 0x2e2278u;
    // NOP
    // 0x2e227c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e227cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2280: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2280u;
    {
        const bool branch_taken_0x2e2280 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2280u;
            // 0x2e2284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2280) {
            ctx->pc = 0x2E228Cu;
            goto label_2e228c;
        }
    }
    ctx->pc = 0x2E2288u;
    // 0x2e2288: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e228c:
    // 0x2e228c: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2e228cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e2290: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e2290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e2294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2298: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e2298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e229c: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2e229cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2e22a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e22a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e22a4: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E22A4u;
    SET_GPR_U32(ctx, 31, 0x2E22ACu);
    ctx->pc = 0x2E22A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E22A4u;
            // 0x2e22a8: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E22ACu; }
        if (ctx->pc != 0x2E22ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E22ACu; }
        if (ctx->pc != 0x2E22ACu) { return; }
    }
    ctx->pc = 0x2E22ACu;
label_2e22ac:
    // 0x2e22ac: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e22acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e22b0: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E22B0u;
    SET_GPR_U32(ctx, 31, 0x2E22B8u);
    ctx->pc = 0x2E22B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E22B0u;
            // 0x2e22b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E22B8u; }
        if (ctx->pc != 0x2E22B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E22B8u; }
        if (ctx->pc != 0x2E22B8u) { return; }
    }
    ctx->pc = 0x2E22B8u;
label_2e22b8:
    // 0x2e22b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E22B8u;
    {
        const bool branch_taken_0x2e22b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E22BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E22B8u;
            // 0x2e22bc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e22b8) {
            ctx->pc = 0x2E2308u;
            goto label_2e2308;
        }
    }
    ctx->pc = 0x2E22C0u;
label_2e22c0:
    // 0x2e22c0: 0x2634ffff  addiu       $s4, $s1, -0x1
    ctx->pc = 0x2e22c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2e22c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e22c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e22c8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e22c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e22cc: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2e22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2e22d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e22d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e22d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e22d8: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E22D8u;
    SET_GPR_U32(ctx, 31, 0x2E22E0u);
    ctx->pc = 0x2E22DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E22D8u;
            // 0x2e22dc: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E22E0u; }
        if (ctx->pc != 0x2E22E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E22E0u; }
        if (ctx->pc != 0x2E22E0u) { return; }
    }
    ctx->pc = 0x2E22E0u;
label_2e22e0:
    // 0x2e22e0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e22e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e22e4: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E22E4u;
    SET_GPR_U32(ctx, 31, 0x2E22ECu);
    ctx->pc = 0x2E22E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E22E4u;
            // 0x2e22e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E22ECu; }
        if (ctx->pc != 0x2E22ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E22ECu; }
        if (ctx->pc != 0x2E22ECu) { return; }
    }
    ctx->pc = 0x2E22ECu;
label_2e22ec:
    // 0x2e22ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E22ECu;
    {
        const bool branch_taken_0x2e22ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E22F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E22ECu;
            // 0x2e22f0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e22ec) {
            ctx->pc = 0x2E2308u;
            goto label_2e2308;
        }
    }
    ctx->pc = 0x2E22F4u;
    // 0x2e22f4: 0x0  nop
    ctx->pc = 0x2e22f4u;
    // NOP
label_2e22f8:
    // 0x2e22f8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e22f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e22fc: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E22FCu;
    SET_GPR_U32(ctx, 31, 0x2E2304u);
    ctx->pc = 0x2E2300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E22FCu;
            // 0x2e2300: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2304u; }
        if (ctx->pc != 0x2E2304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2304u; }
        if (ctx->pc != 0x2E2304u) { return; }
    }
    ctx->pc = 0x2E2304u;
label_2e2304:
    // 0x2e2304: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x2e2304u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e2308:
    // 0x2e2308: 0x3a820002  xori        $v0, $s4, 0x2
    ctx->pc = 0x2e2308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)2);
    // 0x2e230c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2e230cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e2310: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2e2310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e2314: 0x3a820001  xori        $v0, $s4, 0x1
    ctx->pc = 0x2e2314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
    // 0x2e2318: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e2318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e231c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e231cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e2320: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e2320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e2324: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e2324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e2328: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e2328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e232c: 0xc0bc5b0  jal         func_2F16C0
    ctx->pc = 0x2E232Cu;
    SET_GPR_U32(ctx, 31, 0x2E2334u);
    ctx->pc = 0x2E2330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E232Cu;
            // 0x2e2330: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F16C0u;
    if (runtime->hasFunction(0x2F16C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F16C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2334u; }
        if (ctx->pc != 0x2E2334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F16C0_0x2f16c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2334u; }
        if (ctx->pc != 0x2E2334u) { return; }
    }
    ctx->pc = 0x2E2334u;
label_2e2334:
    // 0x2e2334: 0x46000582  mul.s       $f22, $f0, $f0
    ctx->pc = 0x2e2334u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2e2338: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2e2338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e233c: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x2E233Cu;
    SET_GPR_U32(ctx, 31, 0x2E2344u);
    ctx->pc = 0x2E2340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E233Cu;
            // 0x2e2340: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2344u; }
        if (ctx->pc != 0x2E2344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2344u; }
        if (ctx->pc != 0x2E2344u) { return; }
    }
    ctx->pc = 0x2E2344u;
label_2e2344:
    // 0x2e2344: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2e2344u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2348: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2348u;
    {
        const bool branch_taken_0x2e2348 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2348) {
            ctx->pc = 0x2E2360u;
            goto label_2e2360;
        }
    }
    ctx->pc = 0x2E2350u;
    // 0x2e2350: 0x4614b036  c.le.s      $f22, $f20
    ctx->pc = 0x2e2350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2354: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2E2354u;
    {
        const bool branch_taken_0x2e2354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2354) {
            ctx->pc = 0x2E2380u;
            goto label_2e2380;
        }
    }
    ctx->pc = 0x2E235Cu;
    // 0x2e235c: 0x0  nop
    ctx->pc = 0x2e235cu;
    // NOP
label_2e2360:
    // 0x2e2360: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x2e2360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2364: 0x4500007c  bc1f        . + 4 + (0x7C << 2)
    ctx->pc = 0x2E2364u;
    {
        const bool branch_taken_0x2e2364 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2364) {
            ctx->pc = 0x2E2558u;
            goto label_2e2558;
        }
    }
    ctx->pc = 0x2E236Cu;
    // 0x2e236c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e236cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2370: 0x0  nop
    ctx->pc = 0x2e2370u;
    // NOP
    // 0x2e2374: 0x46160832  c.eq.s      $f1, $f22
    ctx->pc = 0x2e2374u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2378: 0x45000077  bc1f        . + 4 + (0x77 << 2)
    ctx->pc = 0x2E2378u;
    {
        const bool branch_taken_0x2e2378 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2378) {
            ctx->pc = 0x2E2558u;
            goto label_2e2558;
        }
    }
    ctx->pc = 0x2E2380u;
label_2e2380:
    // 0x2e2380: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2e2380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e2384: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2e2384u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2e2388: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e2388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e238c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E238Cu;
    SET_GPR_U32(ctx, 31, 0x2E2394u);
    ctx->pc = 0x2E2390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E238Cu;
            // 0x2e2390: 0x4600b506  mov.s       $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2394u; }
        if (ctx->pc != 0x2E2394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2394u; }
        if (ctx->pc != 0x2E2394u) { return; }
    }
    ctx->pc = 0x2E2394u;
label_2e2394:
    // 0x2e2394: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2e2394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2e2398: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E2398u;
    SET_GPR_U32(ctx, 31, 0x2E23A0u);
    ctx->pc = 0x2E239Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2398u;
            // 0x2e239c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E23A0u; }
        if (ctx->pc != 0x2E23A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E23A0u; }
        if (ctx->pc != 0x2E23A0u) { return; }
    }
    ctx->pc = 0x2E23A0u;
label_2e23a0:
    // 0x2e23a0: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e23a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e23a4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E23A4u;
    SET_GPR_U32(ctx, 31, 0x2E23ACu);
    ctx->pc = 0x2E23A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E23A4u;
            // 0x2e23a8: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E23ACu; }
        if (ctx->pc != 0x2E23ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E23ACu; }
        if (ctx->pc != 0x2E23ACu) { return; }
    }
    ctx->pc = 0x2E23ACu;
label_2e23ac:
    // 0x2e23ac: 0x3a820002  xori        $v0, $s4, 0x2
    ctx->pc = 0x2e23acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)2);
    // 0x2e23b0: 0xae770040  sw          $s7, 0x40($s3)
    ctx->pc = 0x2e23b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 23));
    // 0x2e23b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e23b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e23b8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2e23b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2e23bc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2e23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2e23c0: 0xa6620052  sh          $v0, 0x52($s3)
    ctx->pc = 0x2e23c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 82), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e23c4: 0xa67e0054  sh          $fp, 0x54($s3)
    ctx->pc = 0x2e23c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 84), (uint16_t)GPR_U32(ctx, 30));
    // 0x2e23c8: 0xa6740056  sh          $s4, 0x56($s3)
    ctx->pc = 0x2e23c8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 20));
    // 0x2e23cc: 0xa6740050  sh          $s4, 0x50($s3)
    ctx->pc = 0x2e23ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 20));
    // 0x2e23d0: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x2e23d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e23d4: 0x9442001c  lhu         $v0, 0x1C($v0)
    ctx->pc = 0x2e23d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e23d8: 0x2455ffff  addiu       $s5, $v0, -0x1
    ctx->pc = 0x2e23d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e23dc: 0xae600048  sw          $zero, 0x48($s3)
    ctx->pc = 0x2e23dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
    // 0x2e23e0: 0x15a100  sll         $s4, $s5, 4
    ctx->pc = 0x2e23e0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e23e4: 0x0  nop
    ctx->pc = 0x2e23e4u;
    // NOP
label_2e23e8:
    // 0x2e23e8: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x2e23e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e23ec: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x2e23ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2e23f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e23f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e23f4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e23f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e23f8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2e23f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e23fc: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E23FCu;
    SET_GPR_U32(ctx, 31, 0x2E2404u);
    ctx->pc = 0x2E2400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E23FCu;
            // 0x2e2400: 0x742021  addu        $a0, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2404u; }
        if (ctx->pc != 0x2E2404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2404u; }
        if (ctx->pc != 0x2E2404u) { return; }
    }
    ctx->pc = 0x2E2404u;
label_2e2404:
    // 0x2e2404: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x2e2404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2408: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2e2408u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2e240c: 0x2694fff0  addiu       $s4, $s4, -0x10
    ctx->pc = 0x2e240cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    // 0x2e2410: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e2410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e2414: 0x16a0fff4  bnez        $s5, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E2414u;
    {
        const bool branch_taken_0x2e2414 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2414u;
            // 0x2e2418: 0xe6600048  swc1        $f0, 0x48($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2414) {
            ctx->pc = 0x2E23E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e23e8;
        }
    }
    ctx->pc = 0x2E241Cu;
    // 0x2e241c: 0x96640052  lhu         $a0, 0x52($s3)
    ctx->pc = 0x2e241cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
    // 0x2e2420: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2e2420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e2424: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2e2424u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e2428: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x2e2428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e242c: 0x82a023  subu        $s4, $a0, $v0
    ctx->pc = 0x2e242cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e2430: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2e2430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e2434: 0x14a900  sll         $s5, $s4, 4
    ctx->pc = 0x2e2434u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2e2438: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E2438u;
    SET_GPR_U32(ctx, 31, 0x2E2440u);
    ctx->pc = 0x2E243Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2438u;
            // 0x2e243c: 0x552021  addu        $a0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2440u; }
        if (ctx->pc != 0x2E2440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2440u; }
        if (ctx->pc != 0x2E2440u) { return; }
    }
    ctx->pc = 0x2E2440u;
label_2e2440:
    // 0x2e2440: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x2E2440u;
    {
        const bool branch_taken_0x2e2440 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2440u;
            // 0x2e2444: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2440) {
            ctx->pc = 0x2E2478u;
            goto label_2e2478;
        }
    }
    ctx->pc = 0x2E2448u;
label_2e2448:
    // 0x2e2448: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x2e2448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e244c: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x2e244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2e2450: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e2450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e2454: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e2454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e2458: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2e2458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e245c: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E245Cu;
    SET_GPR_U32(ctx, 31, 0x2E2464u);
    ctx->pc = 0x2E2460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E245Cu;
            // 0x2e2460: 0x752021  addu        $a0, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2464u; }
        if (ctx->pc != 0x2E2464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2464u; }
        if (ctx->pc != 0x2E2464u) { return; }
    }
    ctx->pc = 0x2E2464u;
label_2e2464:
    // 0x2e2464: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x2e2464u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x2e2468: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2e2468u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2e246c: 0x1680fff6  bnez        $s4, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E246Cu;
    {
        const bool branch_taken_0x2e246c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E246Cu;
            // 0x2e2470: 0x26b5fff0  addiu       $s5, $s5, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e246c) {
            ctx->pc = 0x2E2448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e2448;
        }
    }
    ctx->pc = 0x2E2474u;
    // 0x2e2474: 0x0  nop
    ctx->pc = 0x2e2474u;
    // NOP
label_2e2478:
    // 0x2e2478: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x2e2478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2e247c: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x2e247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2480: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2e2480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e2484: 0x4600b003  div.s       $f0, $f22, $f0
    ctx->pc = 0x2e2484u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[0];
    // 0x2e2488: 0x0  nop
    ctx->pc = 0x2e2488u;
    // NOP
    // 0x2e248c: 0x0  nop
    ctx->pc = 0x2e248cu;
    // NOP
    // 0x2e2490: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E2490u;
    SET_GPR_U32(ctx, 31, 0x2E2498u);
    ctx->pc = 0x2E2494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2490u;
            // 0x2e2494: 0xe6600044  swc1        $f0, 0x44($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2498u; }
        if (ctx->pc != 0x2E2498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2498u; }
        if (ctx->pc != 0x2E2498u) { return; }
    }
    ctx->pc = 0x2E2498u;
label_2e2498:
    // 0x2e2498: 0xc66c0044  lwc1        $f12, 0x44($s3)
    ctx->pc = 0x2e2498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e249c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e249cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e24a0: 0x96e5001e  lhu         $a1, 0x1E($s7)
    ctx->pc = 0x2e24a0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 30)));
    // 0x2e24a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e24a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e24a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e24a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e24ac: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2e24acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e24b0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E24B0u;
    {
        const bool branch_taken_0x2e24b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E24B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E24B0u;
            // 0x2e24b4: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e24b0) {
            ctx->pc = 0x2E24BCu;
            goto label_2e24bc;
        }
    }
    ctx->pc = 0x2E24B8u;
    // 0x2e24b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e24b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e24bc:
    // 0x2e24bc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2e24bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e24c0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2e24c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2e24c4: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E24C4u;
    {
        const bool branch_taken_0x2e24c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e24c4) {
            ctx->pc = 0x2E2558u;
            goto label_2e2558;
        }
    }
    ctx->pc = 0x2E24CCu;
    // 0x2e24cc: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x2e24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e24d0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2e24d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e24d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e24d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24d8: 0x9448001c  lhu         $t0, 0x1C($v0)
    ctx->pc = 0x2e24d8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e24dc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2e24dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e24e0: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x2e24e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e24e4: 0xc0bc2a8  jal         func_2F0AA0
    ctx->pc = 0x2E24E4u;
    SET_GPR_U32(ctx, 31, 0x2E24ECu);
    ctx->pc = 0x2E24E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E24E4u;
            // 0x2e24e8: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0AA0u;
    if (runtime->hasFunction(0x2F0AA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F0AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E24ECu; }
        if (ctx->pc != 0x2E24ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0AA0_0x2f0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E24ECu; }
        if (ctx->pc != 0x2E24ECu) { return; }
    }
    ctx->pc = 0x2E24ECu;
label_2e24ec:
    // 0x2e24ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e24ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2e24f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e24f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e24f4: 0x0  nop
    ctx->pc = 0x2e24f4u;
    // NOP
    // 0x2e24f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e24f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e24fc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2E24FCu;
    {
        const bool branch_taken_0x2e24fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e24fc) {
            ctx->pc = 0x2E2500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E24FCu;
            // 0x2e2500: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E2514u;
            goto label_2e2514;
        }
    }
    ctx->pc = 0x2E2504u;
    // 0x2e2504: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e2504u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e2508: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e2508u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e250c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E250Cu;
    {
        const bool branch_taken_0x2e250c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E250Cu;
            // 0x2e2510: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e250c) {
            ctx->pc = 0x2E252Cu;
            goto label_2e252c;
        }
    }
    ctx->pc = 0x2E2514u;
label_2e2514:
    // 0x2e2514: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e2514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e2518: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e2518u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e251c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e251cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e2520: 0x0  nop
    ctx->pc = 0x2e2520u;
    // NOP
    // 0x2e2524: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e2524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e2528: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2e2528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2e252c:
    // 0x2e252c: 0xa6630052  sh          $v1, 0x52($s3)
    ctx->pc = 0x2e252cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e2530: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e2530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e2534: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2e2534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e2538: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E2538u;
    SET_GPR_U32(ctx, 31, 0x2E2540u);
    ctx->pc = 0x2E253Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2538u;
            // 0x2e253c: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2540u; }
        if (ctx->pc != 0x2E2540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2540u; }
        if (ctx->pc != 0x2E2540u) { return; }
    }
    ctx->pc = 0x2E2540u;
label_2e2540:
    // 0x2e2540: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e2540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e2544: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E2544u;
    SET_GPR_U32(ctx, 31, 0x2E254Cu);
    ctx->pc = 0x2E2548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2544u;
            // 0x2e2548: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E254Cu; }
        if (ctx->pc != 0x2E254Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E254Cu; }
        if (ctx->pc != 0x2E254Cu) { return; }
    }
    ctx->pc = 0x2E254Cu;
label_2e254c:
    // 0x2e254c: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x2e254cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2e2550: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E2550u;
    SET_GPR_U32(ctx, 31, 0x2E2558u);
    ctx->pc = 0x2E2554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2550u;
            // 0x2e2554: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2558u; }
        if (ctx->pc != 0x2E2558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2558u; }
        if (ctx->pc != 0x2E2558u) { return; }
    }
    ctx->pc = 0x2E2558u;
label_2e2558:
    // 0x2e2558: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2e2558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e255c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2e255cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2e2560: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x2e2560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x2e2564: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x2e2564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x2e2568: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2e2568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e256c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2e256cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e2570: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x2e2570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x2e2574: 0x96e3001c  lhu         $v1, 0x1C($s7)
    ctx->pc = 0x2e2574u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x2e2578: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e2578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e257c: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x2e257cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e2580: 0x1460ff25  bnez        $v1, . + 4 + (-0xDB << 2)
    ctx->pc = 0x2E2580u;
    {
        const bool branch_taken_0x2e2580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2580u;
            // 0x2e2584: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2580) {
            ctx->pc = 0x2E2218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e2218;
        }
    }
    ctx->pc = 0x2E2588u;
label_2e2588:
    // 0x2e2588: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e2588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e258c: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x2e258cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x2e2590: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2e2590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2e2594: 0x7c1ff13  bgez        $fp, . + 4 + (-0xED << 2)
    ctx->pc = 0x2E2594u;
    {
        const bool branch_taken_0x2e2594 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x2E2598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2594u;
            // 0x2e2598: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2594) {
            ctx->pc = 0x2E21E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e21e4;
        }
    }
    ctx->pc = 0x2E259Cu;
    // 0x2e259c: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x2e259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e25a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e25a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e25a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e25a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e25a8: 0x0  nop
    ctx->pc = 0x2e25a8u;
    // NOP
    // 0x2e25ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e25acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e25b0: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2E25B0u;
    {
        const bool branch_taken_0x2e25b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e25b0) {
            ctx->pc = 0x2E25B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E25B0u;
            // 0x2e25b4: 0xa6600056  sh          $zero, 0x56($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E25D0u;
            goto label_2e25d0;
        }
    }
    ctx->pc = 0x2E25B8u;
    // 0x2e25b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e25b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e25bc: 0x0  nop
    ctx->pc = 0x2e25bcu;
    // NOP
    // 0x2e25c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e25c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e25c4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2E25C4u;
    {
        const bool branch_taken_0x2e25c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e25c4) {
            ctx->pc = 0x2E25C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E25C4u;
            // 0x2e25c8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E25D8u;
            goto label_2e25d8;
        }
    }
    ctx->pc = 0x2E25CCu;
    // 0x2e25cc: 0xa6600056  sh          $zero, 0x56($s3)
    ctx->pc = 0x2e25ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
label_2e25d0:
    // 0x2e25d0: 0xa6600050  sh          $zero, 0x50($s3)
    ctx->pc = 0x2e25d0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 0));
label_2e25d4:
    // 0x2e25d4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2e25d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2e25d8:
    // 0x2e25d8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2e25d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e25dc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2e25dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e25e0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e25e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e25e4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e25e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e25e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e25e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e25ec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e25ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e25f0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e25f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e25f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e25f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e25f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e25f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e25fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e25fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e2600: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e2600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2604: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e2604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2608: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2608u;
            // 0x2e260c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2610u;
}
