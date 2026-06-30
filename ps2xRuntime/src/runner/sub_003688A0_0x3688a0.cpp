#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003688A0
// Address: 0x3688a0 - 0x368ae0
void sub_003688A0_0x3688a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003688A0_0x3688a0");
#endif

    switch (ctx->pc) {
        case 0x368920u: goto label_368920;
        case 0x368994u: goto label_368994;
        case 0x368a60u: goto label_368a60;
        case 0x368a74u: goto label_368a74;
        case 0x368a94u: goto label_368a94;
        case 0x368ab4u: goto label_368ab4;
        default: break;
    }

    ctx->pc = 0x3688a0u;

    // 0x3688a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3688a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3688a4: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x3688a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3688a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3688a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3688ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3688acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3688b0: 0xa35021  addu        $t2, $a1, $v1
    ctx->pc = 0x3688b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3688b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3688b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3688b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3688b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3688bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3688bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3688c0: 0xc4611950  lwc1        $f1, 0x1950($v1)
    ctx->pc = 0x3688c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3688c4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3688c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3688c8: 0xc4a01954  lwc1        $f0, 0x1954($a1)
    ctx->pc = 0x3688c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3688cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3688ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3688d0: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x3688d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3688d4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3688d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3688d8: 0xc4621958  lwc1        $f2, 0x1958($v1)
    ctx->pc = 0x3688d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3688dc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3688dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3688e0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x3688e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3688e4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3688e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3688e8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3688e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3688ec: 0xc4601960  lwc1        $f0, 0x1960($v1)
    ctx->pc = 0x3688ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3688f0: 0xc4a1195c  lwc1        $f1, 0x195C($a1)
    ctx->pc = 0x3688f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3688f4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x3688f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3688f8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3688f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3688fc: 0x8c664030  lw          $a2, 0x4030($v1)
    ctx->pc = 0x3688fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16432)));
    // 0x368900: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x368900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x368904: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x368904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x368908: 0x24a54080  addiu       $a1, $a1, 0x4080
    ctx->pc = 0x368908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16512));
    // 0x36890c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x36890cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x368910: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x368910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x368914: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x368914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x368918: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x368918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36891c: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x36891cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_368920:
    // 0x368920: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x368920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368924: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x368924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x368928: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x368928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x36892c: 0x47182b  sltu        $v1, $v0, $a3
    ctx->pc = 0x36892cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x368930: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x368930u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x368934: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x368934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x368938: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x368938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x36893c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x36893cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x368940: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x368940u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x368944: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x368944u;
    {
        const bool branch_taken_0x368944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x368948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x368944u;
            // 0x368948: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368944) {
            ctx->pc = 0x368920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_368920;
        }
    }
    ctx->pc = 0x36894Cu;
    // 0x36894c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36894cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x368950: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x368950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x368954: 0x8c474030  lw          $a3, 0x4030($v0)
    ctx->pc = 0x368954u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x368958: 0x24844080  addiu       $a0, $a0, 0x4080
    ctx->pc = 0x368958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16512));
    // 0x36895c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36895cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368960: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x368960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x368964: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x368964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x368968: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x368968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36896c: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x36896cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
    // 0x368970: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x368970u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x368974: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x368974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x368978: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x368978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x36897c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36897cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x368980: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x368980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x368984: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x368984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x368988: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x368988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36898c: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x36898Cu;
    SET_GPR_U32(ctx, 31, 0x368994u);
    ctx->pc = 0x368990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36898Cu;
            // 0x368990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368994u; }
        if (ctx->pc != 0x368994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368994u; }
        if (ctx->pc != 0x368994u) { return; }
    }
    ctx->pc = 0x368994u;
label_368994:
    // 0x368994: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x368994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x368998: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36899c: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x36899cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x3689a0: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x3689a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3689a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3689a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3689a8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3689A8u;
    {
        const bool branch_taken_0x3689a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3689a8) {
            ctx->pc = 0x3689ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3689A8u;
            // 0x3689ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3689BCu;
            goto label_3689bc;
        }
    }
    ctx->pc = 0x3689B0u;
    // 0x3689b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3689b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3689b4: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x3689b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x3689b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3689b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3689bc:
    // 0x3689bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3689bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3689c0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3689c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x3689c4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3689c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3689c8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3689c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3689cc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3689CCu;
    {
        const bool branch_taken_0x3689cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3689cc) {
            ctx->pc = 0x3689D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3689CCu;
            // 0x3689d0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3689E0u;
            goto label_3689e0;
        }
    }
    ctx->pc = 0x3689D4u;
    // 0x3689d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3689d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3689d8: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3689d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x3689dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3689dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3689e0:
    // 0x3689e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3689e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3689e4: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3689e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x3689e8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3689e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3689ec: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3689ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3689f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3689F0u;
    {
        const bool branch_taken_0x3689f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3689f0) {
            ctx->pc = 0x3689F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3689F0u;
            // 0x3689f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368A04u;
            goto label_368a04;
        }
    }
    ctx->pc = 0x3689F8u;
    // 0x3689f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3689f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3689fc: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3689fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x368a00: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x368a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_368a04:
    // 0x368a04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368a08: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x368a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x368a0c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x368a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x368a10: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x368a10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x368a14: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368A14u;
    {
        const bool branch_taken_0x368a14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x368a14) {
            ctx->pc = 0x368A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368A14u;
            // 0x368a18: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368A28u;
            goto label_368a28;
        }
    }
    ctx->pc = 0x368A1Cu;
    // 0x368a1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368a20: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x368a20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x368a24: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x368a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_368a28:
    // 0x368a28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368a2c: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x368a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x368a30: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x368a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x368a34: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x368a34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x368a38: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368A38u;
    {
        const bool branch_taken_0x368a38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x368a38) {
            ctx->pc = 0x368A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368A38u;
            // 0x368a3c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368A4Cu;
            goto label_368a4c;
        }
    }
    ctx->pc = 0x368A40u;
    // 0x368a40: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368a44: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x368a44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x368a48: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x368a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_368a4c:
    // 0x368a4c: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x368A4Cu;
    {
        const bool branch_taken_0x368a4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x368a4c) {
            ctx->pc = 0x368A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368A4Cu;
            // 0x368a50: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368A64u;
            goto label_368a64;
        }
    }
    ctx->pc = 0x368A54u;
    // 0x368a54: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x368a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x368a58: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x368A58u;
    SET_GPR_U32(ctx, 31, 0x368A60u);
    ctx->pc = 0x368A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368A58u;
            // 0x368a5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368A60u; }
        if (ctx->pc != 0x368A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368A60u; }
        if (ctx->pc != 0x368A60u) { return; }
    }
    ctx->pc = 0x368A60u;
label_368a60:
    // 0x368a60: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x368a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_368a64:
    // 0x368a64: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368A64u;
    {
        const bool branch_taken_0x368a64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x368a64) {
            ctx->pc = 0x368A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368A64u;
            // 0x368a68: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368A78u;
            goto label_368a78;
        }
    }
    ctx->pc = 0x368A6Cu;
    // 0x368a6c: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x368A6Cu;
    SET_GPR_U32(ctx, 31, 0x368A74u);
    ctx->pc = 0x368A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368A6Cu;
            // 0x368a70: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368A74u; }
        if (ctx->pc != 0x368A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368A74u; }
        if (ctx->pc != 0x368A74u) { return; }
    }
    ctx->pc = 0x368A74u;
label_368a74:
    // 0x368a74: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x368a74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_368a78:
    // 0x368a78: 0x51000007  beql        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x368A78u;
    {
        const bool branch_taken_0x368a78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x368a78) {
            ctx->pc = 0x368A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368A78u;
            // 0x368a7c: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368A98u;
            goto label_368a98;
        }
    }
    ctx->pc = 0x368A80u;
    // 0x368a80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x368a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368a84: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x368a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x368a88: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x368a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x368a8c: 0xc075188  jal         func_1D4620
    ctx->pc = 0x368A8Cu;
    SET_GPR_U32(ctx, 31, 0x368A94u);
    ctx->pc = 0x368A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368A8Cu;
            // 0x368a90: 0x26270018  addiu       $a3, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368A94u; }
        if (ctx->pc != 0x368A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368A94u; }
        if (ctx->pc != 0x368A94u) { return; }
    }
    ctx->pc = 0x368A94u;
label_368a94:
    // 0x368a94: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x368a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_368a98:
    // 0x368a98: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x368A98u;
    {
        const bool branch_taken_0x368a98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x368a98) {
            ctx->pc = 0x368AB4u;
            goto label_368ab4;
        }
    }
    ctx->pc = 0x368AA0u;
    // 0x368aa0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x368aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x368aa4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x368AA4u;
    {
        const bool branch_taken_0x368aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x368aa4) {
            ctx->pc = 0x368AB4u;
            goto label_368ab4;
        }
    }
    ctx->pc = 0x368AACu;
    // 0x368aac: 0xc074da8  jal         func_1D36A0
    ctx->pc = 0x368AACu;
    SET_GPR_U32(ctx, 31, 0x368AB4u);
    ctx->pc = 0x368AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368AACu;
            // 0x368ab0: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D36A0u;
    if (runtime->hasFunction(0x1D36A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D36A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368AB4u; }
        if (ctx->pc != 0x368AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D36A0_0x1d36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368AB4u; }
        if (ctx->pc != 0x368AB4u) { return; }
    }
    ctx->pc = 0x368AB4u;
label_368ab4:
    // 0x368ab4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x368ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x368ab8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x368ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x368abc: 0x8c844030  lw          $a0, 0x4030($a0)
    ctx->pc = 0x368abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16432)));
    // 0x368ac0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x368ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x368ac4: 0xac644030  sw          $a0, 0x4030($v1)
    ctx->pc = 0x368ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16432), GPR_U32(ctx, 4));
    // 0x368ac8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x368ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368acc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x368accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368ad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x368ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x368AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x368AD4u;
            // 0x368ad8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x368ADCu;
    // 0x368adc: 0x0  nop
    ctx->pc = 0x368adcu;
    // NOP
}
