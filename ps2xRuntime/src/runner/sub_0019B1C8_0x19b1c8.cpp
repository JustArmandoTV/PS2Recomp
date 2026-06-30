#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019B1C8
// Address: 0x19b1c8 - 0x19b378
void sub_0019B1C8_0x19b1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B1C8_0x19b1c8");
#endif

    switch (ctx->pc) {
        case 0x19b1f0u: goto label_19b1f0;
        case 0x19b204u: goto label_19b204;
        case 0x19b25cu: goto label_19b25c;
        case 0x19b264u: goto label_19b264;
        case 0x19b288u: goto label_19b288;
        case 0x19b290u: goto label_19b290;
        case 0x19b298u: goto label_19b298;
        case 0x19b2a0u: goto label_19b2a0;
        case 0x19b2a8u: goto label_19b2a8;
        case 0x19b2b8u: goto label_19b2b8;
        case 0x19b2c4u: goto label_19b2c4;
        case 0x19b2ccu: goto label_19b2cc;
        case 0x19b304u: goto label_19b304;
        case 0x19b318u: goto label_19b318;
        case 0x19b328u: goto label_19b328;
        case 0x19b330u: goto label_19b330;
        case 0x19b340u: goto label_19b340;
        case 0x19b348u: goto label_19b348;
        case 0x19b350u: goto label_19b350;
        default: break;
    }

    ctx->pc = 0x19b1c8u;

    // 0x19b1c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19b1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19b1cc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19b1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x19b1d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19b1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1d4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x19b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x19b1d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1dc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B1DCu;
    {
        const bool branch_taken_0x19b1dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B1DCu;
            // 0x19b1e0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b1dc) {
            ctx->pc = 0x19B1F8u;
            goto label_19b1f8;
        }
    }
    ctx->pc = 0x19B1E4u;
    // 0x19b1e4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19b1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19b1e8: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19B1E8u;
    SET_GPR_U32(ctx, 31, 0x19B1F0u);
    ctx->pc = 0x19B1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B1E8u;
            // 0x19b1ec: 0x24848f60  addiu       $a0, $a0, -0x70A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B1F0u; }
        if (ctx->pc != 0x19B1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B1F0u; }
        if (ctx->pc != 0x19B1F0u) { return; }
    }
    ctx->pc = 0x19B1F0u;
label_19b1f0:
    // 0x19b1f0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x19B1F0u;
    {
        const bool branch_taken_0x19b1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B1F0u;
            // 0x19b1f4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b1f0) {
            ctx->pc = 0x19B364u;
            goto label_19b364;
        }
    }
    ctx->pc = 0x19B1F8u;
label_19b1f8:
    // 0x19b1f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1fc: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x19B1FCu;
    SET_GPR_U32(ctx, 31, 0x19B204u);
    ctx->pc = 0x19B200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B1FCu;
            // 0x19b200: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B204u; }
        if (ctx->pc != 0x19B204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B204u; }
        if (ctx->pc != 0x19B204u) { return; }
    }
    ctx->pc = 0x19B204u;
label_19b204:
    // 0x19b204: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x19b204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b208: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x19b208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x19b20c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x19b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x19b210: 0x24633c30  addiu       $v1, $v1, 0x3C30
    ctx->pc = 0x19b210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15408));
    // 0x19b214: 0x24428ec0  addiu       $v0, $v0, -0x7140
    ctx->pc = 0x19b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938304));
    // 0x19b218: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x19b218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19b21c: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x19b21cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x19b220: 0x8e08001c  lw          $t0, 0x1C($s0)
    ctx->pc = 0x19b220u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x19b224: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x19b224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19b228: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x19b228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19b22c: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x19b22cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19b230: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19b230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b234: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19b234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19b238: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x19b238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x19b23c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19b23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19b240: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x19b240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x19b244: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x19b244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x19b248: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x19b248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x19b24c: 0xafa8001c  sw          $t0, 0x1C($sp)
    ctx->pc = 0x19b24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
    // 0x19b250: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x19b250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x19b254: 0xc0685e6  jal         func_1A1798
    ctx->pc = 0x19B254u;
    SET_GPR_U32(ctx, 31, 0x19B25Cu);
    ctx->pc = 0x19B258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B254u;
            // 0x19b258: 0xafb00008  sw          $s0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1798u;
    if (runtime->hasFunction(0x1A1798u)) {
        auto targetFn = runtime->lookupFunction(0x1A1798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B25Cu; }
        if (ctx->pc != 0x19B25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1798_0x1a1798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B25Cu; }
        if (ctx->pc != 0x19B25Cu) { return; }
    }
    ctx->pc = 0x19B25Cu;
label_19b25c:
    // 0x19b25c: 0xc06727c  jal         func_19C9F0
    ctx->pc = 0x19B25Cu;
    SET_GPR_U32(ctx, 31, 0x19B264u);
    ctx->pc = 0x19C9F0u;
    if (runtime->hasFunction(0x19C9F0u)) {
        auto targetFn = runtime->lookupFunction(0x19C9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B264u; }
        if (ctx->pc != 0x19B264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C9F0_0x19c9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B264u; }
        if (ctx->pc != 0x19B264u) { return; }
    }
    ctx->pc = 0x19B264u;
label_19b264:
    // 0x19b264: 0x8e246c10  lw          $a0, 0x6C10($s1)
    ctx->pc = 0x19b264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27664)));
    // 0x19b268: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x19b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19b26c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x19b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x19b270: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x19b270u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x19b274: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x19b274u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x19b278: 0x14800035  bnez        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x19B278u;
    {
        const bool branch_taken_0x19b278 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B278u;
            // 0x19b27c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b278) {
            ctx->pc = 0x19B350u;
            goto label_19b350;
        }
    }
    ctx->pc = 0x19B280u;
    // 0x19b280: 0xc05aea2  jal         func_16BA88
    ctx->pc = 0x19B280u;
    SET_GPR_U32(ctx, 31, 0x19B288u);
    ctx->pc = 0x16BA88u;
    if (runtime->hasFunction(0x16BA88u)) {
        auto targetFn = runtime->lookupFunction(0x16BA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B288u; }
        if (ctx->pc != 0x19B288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BA88_0x16ba88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B288u; }
        if (ctx->pc != 0x19B288u) { return; }
    }
    ctx->pc = 0x19B288u;
label_19b288:
    // 0x19b288: 0xc06152e  jal         func_1854B8
    ctx->pc = 0x19B288u;
    SET_GPR_U32(ctx, 31, 0x19B290u);
    ctx->pc = 0x1854B8u;
    if (runtime->hasFunction(0x1854B8u)) {
        auto targetFn = runtime->lookupFunction(0x1854B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B290u; }
        if (ctx->pc != 0x19B290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001854B8_0x1854b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B290u; }
        if (ctx->pc != 0x19B290u) { return; }
    }
    ctx->pc = 0x19B290u;
label_19b290:
    // 0x19b290: 0xc0612a8  jal         func_184AA0
    ctx->pc = 0x19B290u;
    SET_GPR_U32(ctx, 31, 0x19B298u);
    ctx->pc = 0x184AA0u;
    if (runtime->hasFunction(0x184AA0u)) {
        auto targetFn = runtime->lookupFunction(0x184AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B298u; }
        if (ctx->pc != 0x19B298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184AA0_0x184aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B298u; }
        if (ctx->pc != 0x19B298u) { return; }
    }
    ctx->pc = 0x19B298u;
label_19b298:
    // 0x19b298: 0xc0618ba  jal         func_1862E8
    ctx->pc = 0x19B298u;
    SET_GPR_U32(ctx, 31, 0x19B2A0u);
    ctx->pc = 0x1862E8u;
    if (runtime->hasFunction(0x1862E8u)) {
        auto targetFn = runtime->lookupFunction(0x1862E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2A0u; }
        if (ctx->pc != 0x19B2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001862E8_0x1862e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2A0u; }
        if (ctx->pc != 0x19B2A0u) { return; }
    }
    ctx->pc = 0x19B2A0u;
label_19b2a0:
    // 0x19b2a0: 0xc068ace  jal         func_1A2B38
    ctx->pc = 0x19B2A0u;
    SET_GPR_U32(ctx, 31, 0x19B2A8u);
    ctx->pc = 0x1A2B38u;
    if (runtime->hasFunction(0x1A2B38u)) {
        auto targetFn = runtime->lookupFunction(0x1A2B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2A8u; }
        if (ctx->pc != 0x19B2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2B38_0x1a2b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2A8u; }
        if (ctx->pc != 0x19B2A8u) { return; }
    }
    ctx->pc = 0x19B2A8u;
label_19b2a8:
    // 0x19b2a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B2A8u;
    {
        const bool branch_taken_0x19b2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b2a8) {
            ctx->pc = 0x19B2C4u;
            goto label_19b2c4;
        }
    }
    ctx->pc = 0x19B2B0u;
    // 0x19b2b0: 0xc066dae  jal         func_19B6B8
    ctx->pc = 0x19B2B0u;
    SET_GPR_U32(ctx, 31, 0x19B2B8u);
    ctx->pc = 0x19B2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B2B0u;
            // 0x19b2b4: 0x2404ff9b  addiu       $a0, $zero, -0x65 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B6B8u;
    if (runtime->hasFunction(0x19B6B8u)) {
        auto targetFn = runtime->lookupFunction(0x19B6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2B8u; }
        if (ctx->pc != 0x19B2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B6B8_0x19b6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2B8u; }
        if (ctx->pc != 0x19B2B8u) { return; }
    }
    ctx->pc = 0x19B2B8u;
label_19b2b8:
    // 0x19b2b8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19b2bc: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19B2BCu;
    SET_GPR_U32(ctx, 31, 0x19B2C4u);
    ctx->pc = 0x19B2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B2BCu;
            // 0x19b2c0: 0x24848f88  addiu       $a0, $a0, -0x7078 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2C4u; }
        if (ctx->pc != 0x19B2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2C4u; }
        if (ctx->pc != 0x19B2C4u) { return; }
    }
    ctx->pc = 0x19B2C4u;
label_19b2c4:
    // 0x19b2c4: 0xc066cf6  jal         func_19B3D8
    ctx->pc = 0x19B2C4u;
    SET_GPR_U32(ctx, 31, 0x19B2CCu);
    ctx->pc = 0x19B2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B2C4u;
            // 0x19b2c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B3D8u;
    if (runtime->hasFunction(0x19B3D8u)) {
        auto targetFn = runtime->lookupFunction(0x19B3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2CCu; }
        if (ctx->pc != 0x19B2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B3D8_0x19b3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2CCu; }
        if (ctx->pc != 0x19B2CCu) { return; }
    }
    ctx->pc = 0x19B2CCu;
label_19b2cc:
    // 0x19b2cc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x19b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x19b2d0: 0x24429954  addiu       $v0, $v0, -0x66AC
    ctx->pc = 0x19b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941012));
    // 0x19b2d4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x19b2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x19b2d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19b2d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19b2dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19b2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19b2e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19b2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19b2e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19b2e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b2e8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x19b2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b2ec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x19b2ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x19b2f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19b2f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19b2f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b2f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19b2f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x19b2f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x19b2fc: 0xc066dc2  jal         func_19B708
    ctx->pc = 0x19B2FCu;
    SET_GPR_U32(ctx, 31, 0x19B304u);
    ctx->pc = 0x19B708u;
    if (runtime->hasFunction(0x19B708u)) {
        auto targetFn = runtime->lookupFunction(0x19B708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B304u; }
        if (ctx->pc != 0x19B304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B708_0x19b708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B304u; }
        if (ctx->pc != 0x19B304u) { return; }
    }
    ctx->pc = 0x19B304u;
label_19b304:
    // 0x19b304: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19b304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19b308: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B308u;
    {
        const bool branch_taken_0x19b308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B308u;
            // 0x19b30c: 0x24848fb0  addiu       $a0, $a0, -0x7050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b308) {
            ctx->pc = 0x19B318u;
            goto label_19b318;
        }
    }
    ctx->pc = 0x19B310u;
    // 0x19b310: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19B310u;
    SET_GPR_U32(ctx, 31, 0x19B318u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B318u; }
        if (ctx->pc != 0x19B318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B318u; }
        if (ctx->pc != 0x19B318u) { return; }
    }
    ctx->pc = 0x19B318u;
label_19b318:
    // 0x19b318: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19b318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b31c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x19b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x19b320: 0xc066d44  jal         func_19B510
    ctx->pc = 0x19B320u;
    SET_GPR_U32(ctx, 31, 0x19B328u);
    ctx->pc = 0x19B510u;
    if (runtime->hasFunction(0x19B510u)) {
        auto targetFn = runtime->lookupFunction(0x19B510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B328u; }
        if (ctx->pc != 0x19B328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B510_0x19b510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B328u; }
        if (ctx->pc != 0x19B328u) { return; }
    }
    ctx->pc = 0x19B328u;
label_19b328:
    // 0x19b328: 0xc06035c  jal         func_180D70
    ctx->pc = 0x19B328u;
    SET_GPR_U32(ctx, 31, 0x19B330u);
    ctx->pc = 0x180D70u;
    if (runtime->hasFunction(0x180D70u)) {
        auto targetFn = runtime->lookupFunction(0x180D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B330u; }
        if (ctx->pc != 0x19B330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180D70_0x180d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B330u; }
        if (ctx->pc != 0x19B330u) { return; }
    }
    ctx->pc = 0x19B330u;
label_19b330:
    // 0x19b330: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x19b330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x19b334: 0x2484b1b0  addiu       $a0, $a0, -0x4E50
    ctx->pc = 0x19b334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947248));
    // 0x19b338: 0xc06032a  jal         func_180CA8
    ctx->pc = 0x19B338u;
    SET_GPR_U32(ctx, 31, 0x19B340u);
    ctx->pc = 0x19B33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B338u;
            // 0x19b33c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CA8u;
    if (runtime->hasFunction(0x180CA8u)) {
        auto targetFn = runtime->lookupFunction(0x180CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B340u; }
        if (ctx->pc != 0x19B340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CA8_0x180ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B340u; }
        if (ctx->pc != 0x19B340u) { return; }
    }
    ctx->pc = 0x19B340u;
label_19b340:
    // 0x19b340: 0xc0679e8  jal         func_19E7A0
    ctx->pc = 0x19B340u;
    SET_GPR_U32(ctx, 31, 0x19B348u);
    ctx->pc = 0x19E7A0u;
    if (runtime->hasFunction(0x19E7A0u)) {
        auto targetFn = runtime->lookupFunction(0x19E7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B348u; }
        if (ctx->pc != 0x19B348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E7A0_0x19e7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B348u; }
        if (ctx->pc != 0x19B348u) { return; }
    }
    ctx->pc = 0x19B348u;
label_19b348:
    // 0x19b348: 0xc066cde  jal         func_19B378
    ctx->pc = 0x19B348u;
    SET_GPR_U32(ctx, 31, 0x19B350u);
    ctx->pc = 0x19B34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B348u;
            // 0x19b34c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B378u;
    if (runtime->hasFunction(0x19B378u)) {
        auto targetFn = runtime->lookupFunction(0x19B378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B350u; }
        if (ctx->pc != 0x19B350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B378_0x19b378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B350u; }
        if (ctx->pc != 0x19B350u) { return; }
    }
    ctx->pc = 0x19B350u;
label_19b350:
    // 0x19b350: 0x26236c10  addiu       $v1, $s1, 0x6C10
    ctx->pc = 0x19b350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 27664));
    // 0x19b354: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19b354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19b358: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b35c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19b35cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19b360: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19b360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19b364:
    // 0x19b364: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x19b364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19b368: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19b368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b36c: 0x3e00008  jr          $ra
    ctx->pc = 0x19B36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B36Cu;
            // 0x19b370: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B374u;
    // 0x19b374: 0x0  nop
    ctx->pc = 0x19b374u;
    // NOP
}
