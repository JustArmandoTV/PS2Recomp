#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F2160
// Address: 0x3f2160 - 0x3f23b0
void sub_003F2160_0x3f2160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2160_0x3f2160");
#endif

    switch (ctx->pc) {
        case 0x3f2190u: goto label_3f2190;
        case 0x3f21e4u: goto label_3f21e4;
        case 0x3f2268u: goto label_3f2268;
        case 0x3f2288u: goto label_3f2288;
        case 0x3f229cu: goto label_3f229c;
        case 0x3f22a8u: goto label_3f22a8;
        case 0x3f22acu: goto label_3f22ac;
        case 0x3f22d0u: goto label_3f22d0;
        case 0x3f2350u: goto label_3f2350;
        case 0x3f2358u: goto label_3f2358;
        default: break;
    }

    ctx->pc = 0x3f2160u;

    // 0x3f2160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f2160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3f2164: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3f2164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f2168: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f2168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3f216c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f216cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3f2170: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f2170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f2174: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3f2174u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f2178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f217c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f217cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f2180: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f2180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2184: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3f2184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2188: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x3F2188u;
    SET_GPR_U32(ctx, 31, 0x3F2190u);
    ctx->pc = 0x3F218Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2188u;
            // 0x3f218c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2190u; }
        if (ctx->pc != 0x3F2190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2190u; }
        if (ctx->pc != 0x3F2190u) { return; }
    }
    ctx->pc = 0x3F2190u;
label_3f2190:
    // 0x3f2190: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3f2190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3f2194: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f2194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3f2198: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3f2198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x3f219c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3f219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x3f21a0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3f21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x3f21a4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x3f21a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x3f21a8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3f21a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x3f21ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3f21acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3f21b0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3f21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x3f21b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3f21b8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x3f21b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x3f21bc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3f21bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3f21c0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x3f21c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x3f21c4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x3f21c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x3f21c8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x3f21c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x3f21cc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x3f21ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x3f21d0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x3f21d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x3f21d4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3f21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3f21d8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x3f21d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3f21dc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x3F21DCu;
    SET_GPR_U32(ctx, 31, 0x3F21E4u);
    ctx->pc = 0x3F21E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F21DCu;
            // 0x3f21e0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F21E4u; }
        if (ctx->pc != 0x3F21E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F21E4u; }
        if (ctx->pc != 0x3F21E4u) { return; }
    }
    ctx->pc = 0x3F21E4u;
label_3f21e4:
    // 0x3f21e4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f21e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3f21e8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x3f21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x3f21ec: 0x2463a0e8  addiu       $v1, $v1, -0x5F18
    ctx->pc = 0x3f21ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942952));
    // 0x3f21f0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x3f21f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x3f21f4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x3f21f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x3f21f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3f21fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f21fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3f2200: 0xac446f10  sw          $a0, 0x6F10($v0)
    ctx->pc = 0x3f2200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28432), GPR_U32(ctx, 4));
    // 0x3f2204: 0x2463a100  addiu       $v1, $v1, -0x5F00
    ctx->pc = 0x3f2204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942976));
    // 0x3f2208: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f2208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3f220c: 0x2442a138  addiu       $v0, $v0, -0x5EC8
    ctx->pc = 0x3f220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943032));
    // 0x3f2210: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3f2210u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x3f2214: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x3f2214u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x3f2218: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x3f2218u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x3f221c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x3f221cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x3f2220: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x3f2220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x3f2224: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x3f2224u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x3f2228: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x3f2228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x3f222c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x3f222cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x3f2230: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x3f2230u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x3f2234: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x3f2234u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x3f2238: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x3f2238u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x3f223c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x3f223cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x3f2240: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x3f2240u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x3f2244: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x3f2244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x3f2248: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x3f2248u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x3f224c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3F224Cu;
    {
        const bool branch_taken_0x3f224c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f224c) {
            ctx->pc = 0x3F22E0u;
            goto label_3f22e0;
        }
    }
    ctx->pc = 0x3F2254u;
    // 0x3f2254: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x3f2254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x3f2258: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3f2258u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3f225c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3f225cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3f2260: 0xc040138  jal         func_1004E0
    ctx->pc = 0x3F2260u;
    SET_GPR_U32(ctx, 31, 0x3F2268u);
    ctx->pc = 0x3F2264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2260u;
            // 0x3f2264: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2268u; }
        if (ctx->pc != 0x3F2268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2268u; }
        if (ctx->pc != 0x3F2268u) { return; }
    }
    ctx->pc = 0x3F2268u;
label_3f2268:
    // 0x3f2268: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x3f2268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x3f226c: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x3f226cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x3f2270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f2270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2274: 0x24a52300  addiu       $a1, $a1, 0x2300
    ctx->pc = 0x3f2274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8960));
    // 0x3f2278: 0x24c617d0  addiu       $a2, $a2, 0x17D0
    ctx->pc = 0x3f2278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6096));
    // 0x3f227c: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x3f227cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x3f2280: 0xc040840  jal         func_102100
    ctx->pc = 0x3F2280u;
    SET_GPR_U32(ctx, 31, 0x3F2288u);
    ctx->pc = 0x3F2284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2280u;
            // 0x3f2284: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2288u; }
        if (ctx->pc != 0x3F2288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2288u; }
        if (ctx->pc != 0x3F2288u) { return; }
    }
    ctx->pc = 0x3F2288u;
label_3f2288:
    // 0x3f2288: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x3f2288u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x3f228c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f228cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2290: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x3f2290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x3f2294: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x3F2294u;
    SET_GPR_U32(ctx, 31, 0x3F229Cu);
    ctx->pc = 0x3F2298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2294u;
            // 0x3f2298: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F229Cu; }
        if (ctx->pc != 0x3F229Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F229Cu; }
        if (ctx->pc != 0x3F229Cu) { return; }
    }
    ctx->pc = 0x3F229Cu;
label_3f229c:
    // 0x3f229c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3f229cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x3f22a0: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x3F22A0u;
    SET_GPR_U32(ctx, 31, 0x3F22A8u);
    ctx->pc = 0x3F22A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F22A0u;
            // 0x3f22a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F22A8u; }
        if (ctx->pc != 0x3F22A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F22A8u; }
        if (ctx->pc != 0x3F22A8u) { return; }
    }
    ctx->pc = 0x3F22A8u;
label_3f22a8:
    // 0x3f22a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3f22a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f22ac:
    // 0x3f22ac: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x3f22acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x3f22b0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3f22b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x3f22b4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x3f22b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x3f22b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f22b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f22bc: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x3f22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x3f22c0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x3f22c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x3f22c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f22c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f22c8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x3F22C8u;
    SET_GPR_U32(ctx, 31, 0x3F22D0u);
    ctx->pc = 0x3F22CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F22C8u;
            // 0x3f22cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F22D0u; }
        if (ctx->pc != 0x3F22D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F22D0u; }
        if (ctx->pc != 0x3F22D0u) { return; }
    }
    ctx->pc = 0x3F22D0u;
label_3f22d0:
    // 0x3f22d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3f22d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f22d4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3f22d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3f22d8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F22D8u;
    {
        const bool branch_taken_0x3f22d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F22DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F22D8u;
            // 0x3f22dc: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f22d8) {
            ctx->pc = 0x3F22ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f22ac;
        }
    }
    ctx->pc = 0x3F22E0u;
label_3f22e0:
    // 0x3f22e0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3f22e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f22e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f22e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f22e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f22e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f22ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f22ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f22f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f22f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f22f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f22f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f22f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F22F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F22FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F22F8u;
            // 0x3f22fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F2300u;
    // 0x3f2300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f2300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f2304: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f2304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3f2308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f2308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f230c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3f230cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3f2310: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f2310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f2314: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3f2314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x3f2318: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3f2318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3f231c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3f231cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3f2320: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x3f2320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x3f2324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f2324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f2328: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3f2328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3f232c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f232cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2330: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x3f2330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x3f2334: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3f2334u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3f2338: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x3f2338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x3f233c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3f233cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x3f2340: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x3f2340u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f2344: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x3f2344u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f2348: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3F2348u;
    SET_GPR_U32(ctx, 31, 0x3F2350u);
    ctx->pc = 0x3F234Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2348u;
            // 0x3f234c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2350u; }
        if (ctx->pc != 0x3F2350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2350u; }
        if (ctx->pc != 0x3F2350u) { return; }
    }
    ctx->pc = 0x3F2350u;
label_3f2350:
    // 0x3f2350: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x3F2350u;
    SET_GPR_U32(ctx, 31, 0x3F2358u);
    ctx->pc = 0x3F2354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2350u;
            // 0x3f2354: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2358u; }
        if (ctx->pc != 0x3F2358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2358u; }
        if (ctx->pc != 0x3F2358u) { return; }
    }
    ctx->pc = 0x3F2358u;
label_3f2358:
    // 0x3f2358: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f2358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3f235c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x3f235cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x3f2360: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x3f2360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3f2364: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3f2364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x3f2368: 0x24a5c560  addiu       $a1, $a1, -0x3AA0
    ctx->pc = 0x3f2368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952288));
    // 0x3f236c: 0x2484a1a0  addiu       $a0, $a0, -0x5E60
    ctx->pc = 0x3f236cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943136));
    // 0x3f2370: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f2370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f2374: 0x8cc60788  lw          $a2, 0x788($a2)
    ctx->pc = 0x3f2374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1928)));
    // 0x3f2378: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3f2378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f237c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3f237cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3f2380: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x3f2380u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f2384: 0xa205004d  sb          $a1, 0x4D($s0)
    ctx->pc = 0x3f2384u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f2388: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3f2388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x3f238c: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x3f238cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x3f2390: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x3f2390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x3f2394: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x3f2394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x3f2398: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x3f2398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x3f239c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x3f239cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x3f23a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f23a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f23a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f23a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f23a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F23A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F23ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F23A8u;
            // 0x3f23ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F23B0u;
}
