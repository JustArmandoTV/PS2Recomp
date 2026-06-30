#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048D2E0
// Address: 0x48d2e0 - 0x48d660
void sub_0048D2E0_0x48d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D2E0_0x48d2e0");
#endif

    switch (ctx->pc) {
        case 0x48d364u: goto label_48d364;
        case 0x48d3a0u: goto label_48d3a0;
        case 0x48d434u: goto label_48d434;
        case 0x48d460u: goto label_48d460;
        case 0x48d4b8u: goto label_48d4b8;
        case 0x48d4e8u: goto label_48d4e8;
        case 0x48d520u: goto label_48d520;
        case 0x48d538u: goto label_48d538;
        case 0x48d5d0u: goto label_48d5d0;
        case 0x48d604u: goto label_48d604;
        case 0x48d648u: goto label_48d648;
        default: break;
    }

    ctx->pc = 0x48d2e0u;

    // 0x48d2e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x48d2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x48d2e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48d2e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48d2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x48d2ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48d2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48d2f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48d2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48d2f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x48d2f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d2f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48d2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48d2fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x48d2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d300: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x48d300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x48d304: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x48d304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x48d308: 0x12230035  beq         $s1, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x48D308u;
    {
        const bool branch_taken_0x48d308 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x48D30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D308u;
            // 0x48d30c: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d308) {
            ctx->pc = 0x48D3E0u;
            goto label_48d3e0;
        }
    }
    ctx->pc = 0x48D310u;
    // 0x48d310: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x48d310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x48d314: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x48d314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x48d318: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x48d318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x48d31c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x48d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x48d320: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x48d320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48d324: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48d324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x48d328: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48d328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48d32c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x48d32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x48d330: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x48d330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x48d334: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x48d334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
    // 0x48d338: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x48d338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48d33c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x48d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x48d340: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x48d340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x48d344: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x48d344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x48d348: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x48d348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x48d34c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48d34cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48d350: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48d350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x48d354: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x48d354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x48d358: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x48D358u;
    {
        const bool branch_taken_0x48d358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D358u;
            // 0x48d35c: 0x8fb0006c  lw          $s0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d358) {
            ctx->pc = 0x48D498u;
            goto label_48d498;
        }
    }
    ctx->pc = 0x48D360u;
    // 0x48d360: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48d360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_48d364:
    // 0x48d364: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48d364u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x48d368: 0x2464fff4  addiu       $a0, $v1, -0xC
    ctx->pc = 0x48d368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x48d36c: 0x8c63fff4  lw          $v1, -0xC($v1)
    ctx->pc = 0x48d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
    // 0x48d370: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x48d370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x48d374: 0x1623000a  bne         $s1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x48D374u;
    {
        const bool branch_taken_0x48d374 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x48d374) {
            ctx->pc = 0x48D3A0u;
            goto label_48d3a0;
        }
    }
    ctx->pc = 0x48D37Cu;
    // 0x48d37c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x48d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x48d380: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x48d380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48d384: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x48d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x48d388: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x48d388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x48d38c: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x48d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x48d390: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48d390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48d394: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48d394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48d398: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x48D398u;
    SET_GPR_U32(ctx, 31, 0x48D3A0u);
    ctx->pc = 0x48D39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D398u;
            // 0x48d39c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D3A0u; }
        if (ctx->pc != 0x48D3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D3A0u; }
        if (ctx->pc != 0x48D3A0u) { return; }
    }
    ctx->pc = 0x48D3A0u;
label_48d3a0:
    // 0x48d3a0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48d3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x48d3a4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48d3a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x48d3a8: 0x2470fff4  addiu       $s0, $v1, -0xC
    ctx->pc = 0x48d3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x48d3ac: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x48d3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x48d3b0: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x48d3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x48d3b4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x48d3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48d3b8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x48d3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x48d3bc: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x48d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x48d3c0: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x48d3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x48d3c4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48d3c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48d3c8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48d3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x48d3cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x48d3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x48d3d0: 0x5460ffe4  bnel        $v1, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x48D3D0u;
    {
        const bool branch_taken_0x48d3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d3d0) {
            ctx->pc = 0x48D3D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D3D0u;
            // 0x48d3d4: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D364u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48d364;
        }
    }
    ctx->pc = 0x48D3D8u;
    // 0x48d3d8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x48D3D8u;
    {
        const bool branch_taken_0x48d3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d3d8) {
            ctx->pc = 0x48D498u;
            goto label_48d498;
        }
    }
    ctx->pc = 0x48D3E0u;
label_48d3e0:
    // 0x48d3e0: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x48d3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x48d3e4: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x48d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x48d3e8: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x48d3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x48d3ec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x48d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x48d3f0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x48d3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48d3f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x48d3f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48d3fc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x48d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x48d400: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x48d400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x48d404: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x48d404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x48d408: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x48d408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48d40c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x48d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48d410: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x48d410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x48d414: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x48d414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x48d418: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x48d418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x48d41c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48d41cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48d420: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48d420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x48d424: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x48d424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x48d428: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x48D428u;
    {
        const bool branch_taken_0x48d428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D428u;
            // 0x48d42c: 0x8fb00064  lw          $s0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d428) {
            ctx->pc = 0x48D498u;
            goto label_48d498;
        }
    }
    ctx->pc = 0x48D430u;
    // 0x48d430: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48d430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_48d434:
    // 0x48d434: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x48d434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x48d438: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48d438u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48d43c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x48d43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48d440: 0x2444fff4  addiu       $a0, $v0, -0xC
    ctx->pc = 0x48d440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x48d444: 0x27a7008c  addiu       $a3, $sp, 0x8C
    ctx->pc = 0x48d444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x48d448: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x48d448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x48d44c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48d450: 0xafa4008c  sw          $a0, 0x8C($sp)
    ctx->pc = 0x48d450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 4));
    // 0x48d454: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48d454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48d458: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x48D458u;
    SET_GPR_U32(ctx, 31, 0x48D460u);
    ctx->pc = 0x48D45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D458u;
            // 0x48d45c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D460u; }
        if (ctx->pc != 0x48D460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D460u; }
        if (ctx->pc != 0x48D460u) { return; }
    }
    ctx->pc = 0x48D460u;
label_48d460:
    // 0x48d460: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x48d460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x48d464: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x48d464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x48d468: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x48d468u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x48d46c: 0x2490fff4  addiu       $s0, $a0, -0xC
    ctx->pc = 0x48d46cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
    // 0x48d470: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x48d470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x48d474: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x48d474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48d478: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x48d478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x48d47c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x48d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x48d480: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x48d480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x48d484: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48d484u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48d488: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48d488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x48d48c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x48d48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x48d490: 0x5460ffe8  bnel        $v1, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x48D490u;
    {
        const bool branch_taken_0x48d490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d490) {
            ctx->pc = 0x48D494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D490u;
            // 0x48d494: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48d434;
        }
    }
    ctx->pc = 0x48D498u;
label_48d498:
    // 0x48d498: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x48d498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x48d49c: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x48D49Cu;
    {
        const bool branch_taken_0x48d49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d49c) {
            ctx->pc = 0x48D4A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D49Cu;
            // 0x48d4a0: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D4C4u;
            goto label_48d4c4;
        }
    }
    ctx->pc = 0x48D4A4u;
    // 0x48d4a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x48d4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x48d4a8: 0x50800068  beql        $a0, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x48D4A8u;
    {
        const bool branch_taken_0x48d4a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d4a8) {
            ctx->pc = 0x48D4ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D4A8u;
            // 0x48d4ac: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D64Cu;
            goto label_48d64c;
        }
    }
    ctx->pc = 0x48D4B0u;
    // 0x48d4b0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x48D4B0u;
    SET_GPR_U32(ctx, 31, 0x48D4B8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D4B8u; }
        if (ctx->pc != 0x48D4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D4B8u; }
        if (ctx->pc != 0x48D4B8u) { return; }
    }
    ctx->pc = 0x48D4B8u;
label_48d4b8:
    // 0x48d4b8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x48D4B8u;
    {
        const bool branch_taken_0x48d4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d4b8) {
            ctx->pc = 0x48D648u;
            goto label_48d648;
        }
    }
    ctx->pc = 0x48D4C0u;
    // 0x48d4c0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x48d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_48d4c4:
    // 0x48d4c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x48d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x48d4c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48d4cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x48d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x48d4d0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x48d4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x48d4d4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48d4d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48d4d8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48d4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x48d4dc: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x48D4DCu;
    {
        const bool branch_taken_0x48d4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D4DCu;
            // 0x48d4e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d4dc) {
            ctx->pc = 0x48D638u;
            goto label_48d638;
        }
    }
    ctx->pc = 0x48D4E4u;
    // 0x48d4e4: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48d4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_48d4e8:
    // 0x48d4e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48d4e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48d4ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48d4f0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x48d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x48d4f4: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x48d4f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x48d4f8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x48d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x48d4fc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x48d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x48d500: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x48d500u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48d504: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48d504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48d508: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x48d508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x48d50c: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x48d50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x48d510: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48d510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48d514: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48d514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x48d518: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x48D518u;
    {
        const bool branch_taken_0x48d518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d518) {
            ctx->pc = 0x48D588u;
            goto label_48d588;
        }
    }
    ctx->pc = 0x48D520u;
label_48d520:
    // 0x48d520: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x48d520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x48d524: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48d524u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48d528: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x48d528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x48d52c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x48d52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x48d530: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x48D530u;
    SET_GPR_U32(ctx, 31, 0x48D538u);
    ctx->pc = 0x48D534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D530u;
            // 0x48d534: 0x24a50800  addiu       $a1, $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D538u; }
        if (ctx->pc != 0x48D538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D538u; }
        if (ctx->pc != 0x48D538u) { return; }
    }
    ctx->pc = 0x48D538u;
label_48d538:
    // 0x48d538: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x48D538u;
    {
        const bool branch_taken_0x48d538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d538) {
            ctx->pc = 0x48D588u;
            goto label_48d588;
        }
    }
    ctx->pc = 0x48D540u;
    // 0x48d540: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48d540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x48d544: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x48d544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x48d548: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48d548u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48d54c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48d54cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x48d550: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48d550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48d554: 0x2471001c  addiu       $s1, $v1, 0x1C
    ctx->pc = 0x48d554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x48d558: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x48d558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x48d55c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x48d55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x48d560: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x48d560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x48d564: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x48d564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x48d568: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x48d568u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x48d56c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48d570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48d570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48d574: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x48d574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x48d578: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48d578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48d57c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48d57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x48d580: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x48D580u;
    {
        const bool branch_taken_0x48d580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d580) {
            ctx->pc = 0x48D520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48d520;
        }
    }
    ctx->pc = 0x48D588u;
label_48d588:
    // 0x48d588: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x48d588u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x48d58c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x48d58cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x48d590: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48d590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x48d594: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48d594u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48d598: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x48d598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x48d59c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48D59Cu;
    {
        const bool branch_taken_0x48d59c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D59Cu;
            // 0x48d5a0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d59c) {
            ctx->pc = 0x48D5ACu;
            goto label_48d5ac;
        }
    }
    ctx->pc = 0x48D5A4u;
    // 0x48d5a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48D5A4u;
    {
        const bool branch_taken_0x48d5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D5A4u;
            // 0x48d5a8: 0x9487000a  lhu         $a3, 0xA($a0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d5a4) {
            ctx->pc = 0x48D5B4u;
            goto label_48d5b4;
        }
    }
    ctx->pc = 0x48D5ACu;
label_48d5ac:
    // 0x48d5ac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x48d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x48d5b0: 0x9447001c  lhu         $a3, 0x1C($v0)
    ctx->pc = 0x48d5b0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
label_48d5b4:
    // 0x48d5b4: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x48d5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x48d5b8: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x48d5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x48d5bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48d5bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48d5c0: 0x8c480018  lw          $t0, 0x18($v0)
    ctx->pc = 0x48d5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x48d5c4: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x48d5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x48d5c8: 0xc1245b4  jal         func_4916D0
    ctx->pc = 0x48D5C8u;
    SET_GPR_U32(ctx, 31, 0x48D5D0u);
    ctx->pc = 0x48D5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D5C8u;
            // 0x48d5cc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4916D0u;
    if (runtime->hasFunction(0x4916D0u)) {
        auto targetFn = runtime->lookupFunction(0x4916D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D5D0u; }
        if (ctx->pc != 0x48D5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004916D0_0x4916d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D5D0u; }
        if (ctx->pc != 0x48D5D0u) { return; }
    }
    ctx->pc = 0x48D5D0u;
label_48d5d0:
    // 0x48d5d0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48d5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x48d5d4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48d5d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x48d5d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48d5dc: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x48d5dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48d5e0: 0x922300c0  lbu         $v1, 0xC0($s1)
    ctx->pc = 0x48d5e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x48d5e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48D5E4u;
    {
        const bool branch_taken_0x48d5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d5e4) {
            ctx->pc = 0x48D608u;
            goto label_48d608;
        }
    }
    ctx->pc = 0x48D5ECu;
    // 0x48d5ec: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x48d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x48d5f0: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x48d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x48d5f4: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x48d5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x48d5f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48d5fc: 0xc04a508  jal         func_129420
    ctx->pc = 0x48D5FCu;
    SET_GPR_U32(ctx, 31, 0x48D604u);
    ctx->pc = 0x48D600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D5FCu;
            // 0x48d600: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D604u; }
        if (ctx->pc != 0x48D604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D604u; }
        if (ctx->pc != 0x48D604u) { return; }
    }
    ctx->pc = 0x48D604u;
label_48d604:
    // 0x48d604: 0xa22000c0  sb          $zero, 0xC0($s1)
    ctx->pc = 0x48d604u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 192), (uint8_t)GPR_U32(ctx, 0));
label_48d608:
    // 0x48d608: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48d608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x48d60c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48d60cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x48d610: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x48d610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x48d614: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x48d614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x48d618: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x48d618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x48d61c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48d620: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x48d620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x48d624: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x48d624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x48d628: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48d628u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48d62c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48d62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x48d630: 0x5460ffad  bnel        $v1, $zero, . + 4 + (-0x53 << 2)
    ctx->pc = 0x48D630u;
    {
        const bool branch_taken_0x48d630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d630) {
            ctx->pc = 0x48D634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D630u;
            // 0x48d634: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D4E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48d4e8;
        }
    }
    ctx->pc = 0x48D638u;
label_48d638:
    // 0x48d638: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48D638u;
    {
        const bool branch_taken_0x48d638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d638) {
            ctx->pc = 0x48D648u;
            goto label_48d648;
        }
    }
    ctx->pc = 0x48D640u;
    // 0x48d640: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x48D640u;
    SET_GPR_U32(ctx, 31, 0x48D648u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D648u; }
        if (ctx->pc != 0x48D648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D648u; }
        if (ctx->pc != 0x48D648u) { return; }
    }
    ctx->pc = 0x48D648u;
label_48d648:
    // 0x48d648: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48d648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_48d64c:
    // 0x48d64c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48d64cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48d650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48d654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48d654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d658: 0x3e00008  jr          $ra
    ctx->pc = 0x48D658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48D65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D658u;
            // 0x48d65c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48D660u;
}
