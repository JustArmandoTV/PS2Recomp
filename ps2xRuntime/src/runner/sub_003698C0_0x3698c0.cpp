#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003698C0
// Address: 0x3698c0 - 0x369b70
void sub_003698C0_0x3698c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003698C0_0x3698c0");
#endif

    switch (ctx->pc) {
        case 0x36991cu: goto label_36991c;
        case 0x369990u: goto label_369990;
        case 0x369a5cu: goto label_369a5c;
        case 0x369a70u: goto label_369a70;
        case 0x369a90u: goto label_369a90;
        case 0x369ab0u: goto label_369ab0;
        default: break;
    }

    ctx->pc = 0x3698c0u;

    // 0x3698c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3698c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3698c4: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x3698c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3698c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3698c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3698cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3698ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3698d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3698d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3698d4: 0xa24821  addu        $t1, $a1, $v0
    ctx->pc = 0x3698d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3698d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3698d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3698dc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3698dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3698e0: 0xc44118f8  lwc1        $f1, 0x18F8($v0)
    ctx->pc = 0x3698e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3698e4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3698e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3698e8: 0xc46018fc  lwc1        $f0, 0x18FC($v1)
    ctx->pc = 0x3698e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3698ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3698ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3698f0: 0x27a80038  addiu       $t0, $sp, 0x38
    ctx->pc = 0x3698f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x3698f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3698f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3698f8: 0x8c454030  lw          $a1, 0x4030($v0)
    ctx->pc = 0x3698f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x3698fc: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x3698fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x369900: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x369900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x369904: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x369904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x369908: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x369908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36990c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x36990cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x369910: 0x24424080  addiu       $v0, $v0, 0x4080
    ctx->pc = 0x369910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x369914: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x369914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x369918: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x369918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36991c:
    // 0x36991c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x36991cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369920: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x369920u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x369924: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x369924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x369928: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x369928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x36992c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36992cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x369930: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x369930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x369934: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x369934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x369938: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x369938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x36993c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x36993cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x369940: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x369940u;
    {
        const bool branch_taken_0x369940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x369940u;
            // 0x369944: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369940) {
            ctx->pc = 0x36991Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36991c;
        }
    }
    ctx->pc = 0x369948u;
    // 0x369948: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x369948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36994c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x36994cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x369950: 0x8c474030  lw          $a3, 0x4030($v0)
    ctx->pc = 0x369950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x369954: 0x24844080  addiu       $a0, $a0, 0x4080
    ctx->pc = 0x369954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16512));
    // 0x369958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36995c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x36995cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x369960: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x369960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x369964: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x369964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x369968: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x369968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
    // 0x36996c: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x36996cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x369970: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x369970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x369974: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x369974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x369978: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x369978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36997c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x36997cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x369980: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x369980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x369984: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x369984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x369988: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x369988u;
    SET_GPR_U32(ctx, 31, 0x369990u);
    ctx->pc = 0x36998Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369988u;
            // 0x36998c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369990u; }
        if (ctx->pc != 0x369990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369990u; }
        if (ctx->pc != 0x369990u) { return; }
    }
    ctx->pc = 0x369990u;
label_369990:
    // 0x369990: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x369994: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369998: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x369998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x36999c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x36999cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3699a0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3699a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3699a4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3699A4u;
    {
        const bool branch_taken_0x3699a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3699a4) {
            ctx->pc = 0x3699A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3699A4u;
            // 0x3699a8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3699B8u;
            goto label_3699b8;
        }
    }
    ctx->pc = 0x3699ACu;
    // 0x3699ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3699acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3699b0: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x3699b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x3699b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3699b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3699b8:
    // 0x3699b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3699b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3699bc: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3699bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x3699c0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3699c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3699c4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3699c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3699c8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3699C8u;
    {
        const bool branch_taken_0x3699c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3699c8) {
            ctx->pc = 0x3699CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3699C8u;
            // 0x3699cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3699DCu;
            goto label_3699dc;
        }
    }
    ctx->pc = 0x3699D0u;
    // 0x3699d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3699d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3699d4: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3699d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x3699d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3699d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3699dc:
    // 0x3699dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3699dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3699e0: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3699e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x3699e4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3699e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3699e8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3699e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3699ec: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3699ECu;
    {
        const bool branch_taken_0x3699ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3699ec) {
            ctx->pc = 0x3699F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3699ECu;
            // 0x3699f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369A00u;
            goto label_369a00;
        }
    }
    ctx->pc = 0x3699F4u;
    // 0x3699f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3699f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3699f8: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3699f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x3699fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3699fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_369a00:
    // 0x369a00: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369a04: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x369a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x369a08: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369a0c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369a0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369a10: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369A10u;
    {
        const bool branch_taken_0x369a10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369a10) {
            ctx->pc = 0x369A14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369A10u;
            // 0x369a14: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369A24u;
            goto label_369a24;
        }
    }
    ctx->pc = 0x369A18u;
    // 0x369a18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369a1c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x369a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x369a20: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_369a24:
    // 0x369a24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369a28: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x369a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x369a2c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369a30: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369a30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369a34: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369A34u;
    {
        const bool branch_taken_0x369a34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369a34) {
            ctx->pc = 0x369A38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369A34u;
            // 0x369a38: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369A48u;
            goto label_369a48;
        }
    }
    ctx->pc = 0x369A3Cu;
    // 0x369a3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369a40: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x369a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x369a44: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x369a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_369a48:
    // 0x369a48: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x369A48u;
    {
        const bool branch_taken_0x369a48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x369a48) {
            ctx->pc = 0x369A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369A48u;
            // 0x369a4c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369A60u;
            goto label_369a60;
        }
    }
    ctx->pc = 0x369A50u;
    // 0x369a50: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x369a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x369a54: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x369A54u;
    SET_GPR_U32(ctx, 31, 0x369A5Cu);
    ctx->pc = 0x369A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369A54u;
            // 0x369a58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369A5Cu; }
        if (ctx->pc != 0x369A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369A5Cu; }
        if (ctx->pc != 0x369A5Cu) { return; }
    }
    ctx->pc = 0x369A5Cu;
label_369a5c:
    // 0x369a5c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x369a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_369a60:
    // 0x369a60: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369A60u;
    {
        const bool branch_taken_0x369a60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x369a60) {
            ctx->pc = 0x369A64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369A60u;
            // 0x369a64: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369A74u;
            goto label_369a74;
        }
    }
    ctx->pc = 0x369A68u;
    // 0x369a68: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x369A68u;
    SET_GPR_U32(ctx, 31, 0x369A70u);
    ctx->pc = 0x369A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369A68u;
            // 0x369a6c: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369A70u; }
        if (ctx->pc != 0x369A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369A70u; }
        if (ctx->pc != 0x369A70u) { return; }
    }
    ctx->pc = 0x369A70u;
label_369a70:
    // 0x369a70: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x369a70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_369a74:
    // 0x369a74: 0x51000007  beql        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x369A74u;
    {
        const bool branch_taken_0x369a74 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x369a74) {
            ctx->pc = 0x369A78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369A74u;
            // 0x369a78: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369A94u;
            goto label_369a94;
        }
    }
    ctx->pc = 0x369A7Cu;
    // 0x369a7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x369a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a80: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x369a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x369a84: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x369a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x369a88: 0xc075188  jal         func_1D4620
    ctx->pc = 0x369A88u;
    SET_GPR_U32(ctx, 31, 0x369A90u);
    ctx->pc = 0x369A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369A88u;
            // 0x369a8c: 0x26270018  addiu       $a3, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369A90u; }
        if (ctx->pc != 0x369A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369A90u; }
        if (ctx->pc != 0x369A90u) { return; }
    }
    ctx->pc = 0x369A90u;
label_369a90:
    // 0x369a90: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x369a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_369a94:
    // 0x369a94: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x369A94u;
    {
        const bool branch_taken_0x369a94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x369a94) {
            ctx->pc = 0x369AB0u;
            goto label_369ab0;
        }
    }
    ctx->pc = 0x369A9Cu;
    // 0x369a9c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x369a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x369aa0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x369AA0u;
    {
        const bool branch_taken_0x369aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x369aa0) {
            ctx->pc = 0x369AB0u;
            goto label_369ab0;
        }
    }
    ctx->pc = 0x369AA8u;
    // 0x369aa8: 0xc074da8  jal         func_1D36A0
    ctx->pc = 0x369AA8u;
    SET_GPR_U32(ctx, 31, 0x369AB0u);
    ctx->pc = 0x369AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369AA8u;
            // 0x369aac: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D36A0u;
    if (runtime->hasFunction(0x1D36A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D36A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369AB0u; }
        if (ctx->pc != 0x369AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D36A0_0x1d36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369AB0u; }
        if (ctx->pc != 0x369AB0u) { return; }
    }
    ctx->pc = 0x369AB0u;
label_369ab0:
    // 0x369ab0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x369ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x369ab4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x369ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x369ab8: 0x8c664030  lw          $a2, 0x4030($v1)
    ctx->pc = 0x369ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16432)));
    // 0x369abc: 0x24844710  addiu       $a0, $a0, 0x4710
    ctx->pc = 0x369abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18192));
    // 0x369ac0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x369ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x369ac4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369ac8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x369ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x369acc: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x369accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x369ad0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x369ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x369ad4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x369ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x369ad8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x369ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x369adc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x369adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x369ae0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x369ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x369ae4: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x369ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x369ae8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369ae8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369aec: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369AECu;
    {
        const bool branch_taken_0x369aec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369aec) {
            ctx->pc = 0x369AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369AECu;
            // 0x369af0: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369B00u;
            goto label_369b00;
        }
    }
    ctx->pc = 0x369AF4u;
    // 0x369af4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369af8: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x369af8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x369afc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x369afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_369b00:
    // 0x369b00: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369b04: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x369b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x369b08: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369b0c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369b0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369b10: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369B10u;
    {
        const bool branch_taken_0x369b10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369b10) {
            ctx->pc = 0x369B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369B10u;
            // 0x369b14: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369B24u;
            goto label_369b24;
        }
    }
    ctx->pc = 0x369B18u;
    // 0x369b18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369b1c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x369b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x369b20: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x369b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_369b24:
    // 0x369b24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369b28: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x369b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x369b2c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369b30: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369b30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369b34: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x369B34u;
    {
        const bool branch_taken_0x369b34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369b34) {
            ctx->pc = 0x369B44u;
            goto label_369b44;
        }
    }
    ctx->pc = 0x369B3Cu;
    // 0x369b3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369b40: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x369b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_369b44:
    // 0x369b44: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x369b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x369b48: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x369b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x369b4c: 0x8c844030  lw          $a0, 0x4030($a0)
    ctx->pc = 0x369b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16432)));
    // 0x369b50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x369b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x369b54: 0xac644030  sw          $a0, 0x4030($v1)
    ctx->pc = 0x369b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16432), GPR_U32(ctx, 4));
    // 0x369b58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x369b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369b5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x369b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x369b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369b64: 0x3e00008  jr          $ra
    ctx->pc = 0x369B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x369B64u;
            // 0x369b68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x369B6Cu;
    // 0x369b6c: 0x0  nop
    ctx->pc = 0x369b6cu;
    // NOP
}
