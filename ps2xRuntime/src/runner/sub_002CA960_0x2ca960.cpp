#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CA960
// Address: 0x2ca960 - 0x2caac0
void sub_002CA960_0x2ca960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA960_0x2ca960");
#endif

    switch (ctx->pc) {
        case 0x2ca960u: goto label_2ca960;
        case 0x2ca964u: goto label_2ca964;
        case 0x2ca968u: goto label_2ca968;
        case 0x2ca96cu: goto label_2ca96c;
        case 0x2ca970u: goto label_2ca970;
        case 0x2ca974u: goto label_2ca974;
        case 0x2ca978u: goto label_2ca978;
        case 0x2ca97cu: goto label_2ca97c;
        case 0x2ca980u: goto label_2ca980;
        case 0x2ca984u: goto label_2ca984;
        case 0x2ca988u: goto label_2ca988;
        case 0x2ca98cu: goto label_2ca98c;
        case 0x2ca990u: goto label_2ca990;
        case 0x2ca994u: goto label_2ca994;
        case 0x2ca998u: goto label_2ca998;
        case 0x2ca99cu: goto label_2ca99c;
        case 0x2ca9a0u: goto label_2ca9a0;
        case 0x2ca9a4u: goto label_2ca9a4;
        case 0x2ca9a8u: goto label_2ca9a8;
        case 0x2ca9acu: goto label_2ca9ac;
        case 0x2ca9b0u: goto label_2ca9b0;
        case 0x2ca9b4u: goto label_2ca9b4;
        case 0x2ca9b8u: goto label_2ca9b8;
        case 0x2ca9bcu: goto label_2ca9bc;
        case 0x2ca9c0u: goto label_2ca9c0;
        case 0x2ca9c4u: goto label_2ca9c4;
        case 0x2ca9c8u: goto label_2ca9c8;
        case 0x2ca9ccu: goto label_2ca9cc;
        case 0x2ca9d0u: goto label_2ca9d0;
        case 0x2ca9d4u: goto label_2ca9d4;
        case 0x2ca9d8u: goto label_2ca9d8;
        case 0x2ca9dcu: goto label_2ca9dc;
        case 0x2ca9e0u: goto label_2ca9e0;
        case 0x2ca9e4u: goto label_2ca9e4;
        case 0x2ca9e8u: goto label_2ca9e8;
        case 0x2ca9ecu: goto label_2ca9ec;
        case 0x2ca9f0u: goto label_2ca9f0;
        case 0x2ca9f4u: goto label_2ca9f4;
        case 0x2ca9f8u: goto label_2ca9f8;
        case 0x2ca9fcu: goto label_2ca9fc;
        case 0x2caa00u: goto label_2caa00;
        case 0x2caa04u: goto label_2caa04;
        case 0x2caa08u: goto label_2caa08;
        case 0x2caa0cu: goto label_2caa0c;
        case 0x2caa10u: goto label_2caa10;
        case 0x2caa14u: goto label_2caa14;
        case 0x2caa18u: goto label_2caa18;
        case 0x2caa1cu: goto label_2caa1c;
        case 0x2caa20u: goto label_2caa20;
        case 0x2caa24u: goto label_2caa24;
        case 0x2caa28u: goto label_2caa28;
        case 0x2caa2cu: goto label_2caa2c;
        case 0x2caa30u: goto label_2caa30;
        case 0x2caa34u: goto label_2caa34;
        case 0x2caa38u: goto label_2caa38;
        case 0x2caa3cu: goto label_2caa3c;
        case 0x2caa40u: goto label_2caa40;
        case 0x2caa44u: goto label_2caa44;
        case 0x2caa48u: goto label_2caa48;
        case 0x2caa4cu: goto label_2caa4c;
        case 0x2caa50u: goto label_2caa50;
        case 0x2caa54u: goto label_2caa54;
        case 0x2caa58u: goto label_2caa58;
        case 0x2caa5cu: goto label_2caa5c;
        case 0x2caa60u: goto label_2caa60;
        case 0x2caa64u: goto label_2caa64;
        case 0x2caa68u: goto label_2caa68;
        case 0x2caa6cu: goto label_2caa6c;
        case 0x2caa70u: goto label_2caa70;
        case 0x2caa74u: goto label_2caa74;
        case 0x2caa78u: goto label_2caa78;
        case 0x2caa7cu: goto label_2caa7c;
        case 0x2caa80u: goto label_2caa80;
        case 0x2caa84u: goto label_2caa84;
        case 0x2caa88u: goto label_2caa88;
        case 0x2caa8cu: goto label_2caa8c;
        case 0x2caa90u: goto label_2caa90;
        case 0x2caa94u: goto label_2caa94;
        case 0x2caa98u: goto label_2caa98;
        case 0x2caa9cu: goto label_2caa9c;
        case 0x2caaa0u: goto label_2caaa0;
        case 0x2caaa4u: goto label_2caaa4;
        case 0x2caaa8u: goto label_2caaa8;
        case 0x2caaacu: goto label_2caaac;
        case 0x2caab0u: goto label_2caab0;
        case 0x2caab4u: goto label_2caab4;
        case 0x2caab8u: goto label_2caab8;
        case 0x2caabcu: goto label_2caabc;
        default: break;
    }

    ctx->pc = 0x2ca960u;

label_2ca960:
    // 0x2ca960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ca960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ca964:
    // 0x2ca964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ca964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ca968:
    // 0x2ca968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ca96c:
    // 0x2ca96c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ca970:
    // 0x2ca970: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ca970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ca974:
    // 0x2ca974: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2ca978:
    if (ctx->pc == 0x2CA978u) {
        ctx->pc = 0x2CA978u;
            // 0x2ca978: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA97Cu;
        goto label_2ca97c;
    }
    ctx->pc = 0x2CA974u;
    {
        const bool branch_taken_0x2ca974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA974u;
            // 0x2ca978: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca974) {
            ctx->pc = 0x2CAAA8u;
            goto label_2caaa8;
        }
    }
    ctx->pc = 0x2CA97Cu;
label_2ca97c:
    // 0x2ca97c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ca97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2ca980:
    // 0x2ca980: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ca984:
    // 0x2ca984: 0x246302c0  addiu       $v1, $v1, 0x2C0
    ctx->pc = 0x2ca984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
label_2ca988:
    // 0x2ca988: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2ca988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2ca98c:
    // 0x2ca98c: 0x244202f8  addiu       $v0, $v0, 0x2F8
    ctx->pc = 0x2ca98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 760));
label_2ca990:
    // 0x2ca990: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2ca990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2ca994:
    // 0x2ca994: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2ca994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2ca998:
    // 0x2ca998: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2ca998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2ca99c:
    // 0x2ca99c: 0xc0407c0  jal         func_101F00
label_2ca9a0:
    if (ctx->pc == 0x2CA9A0u) {
        ctx->pc = 0x2CA9A0u;
            // 0x2ca9a0: 0x24a5a8f0  addiu       $a1, $a1, -0x5710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945008));
        ctx->pc = 0x2CA9A4u;
        goto label_2ca9a4;
    }
    ctx->pc = 0x2CA99Cu;
    SET_GPR_U32(ctx, 31, 0x2CA9A4u);
    ctx->pc = 0x2CA9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA99Cu;
            // 0x2ca9a0: 0x24a5a8f0  addiu       $a1, $a1, -0x5710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA9A4u; }
        if (ctx->pc != 0x2CA9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA9A4u; }
        if (ctx->pc != 0x2CA9A4u) { return; }
    }
    ctx->pc = 0x2CA9A4u;
label_2ca9a4:
    // 0x2ca9a4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2ca9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2ca9a8:
    // 0x2ca9a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2ca9ac:
    if (ctx->pc == 0x2CA9ACu) {
        ctx->pc = 0x2CA9ACu;
            // 0x2ca9ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2CA9B0u;
        goto label_2ca9b0;
    }
    ctx->pc = 0x2CA9A8u;
    {
        const bool branch_taken_0x2ca9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9a8) {
            ctx->pc = 0x2CA9ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA9A8u;
            // 0x2ca9ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA9BCu;
            goto label_2ca9bc;
        }
    }
    ctx->pc = 0x2CA9B0u;
label_2ca9b0:
    // 0x2ca9b0: 0xc07507c  jal         func_1D41F0
label_2ca9b4:
    if (ctx->pc == 0x2CA9B4u) {
        ctx->pc = 0x2CA9B4u;
            // 0x2ca9b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2CA9B8u;
        goto label_2ca9b8;
    }
    ctx->pc = 0x2CA9B0u;
    SET_GPR_U32(ctx, 31, 0x2CA9B8u);
    ctx->pc = 0x2CA9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA9B0u;
            // 0x2ca9b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA9B8u; }
        if (ctx->pc != 0x2CA9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA9B8u; }
        if (ctx->pc != 0x2CA9B8u) { return; }
    }
    ctx->pc = 0x2CA9B8u;
label_2ca9b8:
    // 0x2ca9b8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2ca9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2ca9bc:
    // 0x2ca9bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2ca9c0:
    if (ctx->pc == 0x2CA9C0u) {
        ctx->pc = 0x2CA9C0u;
            // 0x2ca9c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2CA9C4u;
        goto label_2ca9c4;
    }
    ctx->pc = 0x2CA9BCu;
    {
        const bool branch_taken_0x2ca9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9bc) {
            ctx->pc = 0x2CA9C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA9BCu;
            // 0x2ca9c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA9ECu;
            goto label_2ca9ec;
        }
    }
    ctx->pc = 0x2CA9C4u;
label_2ca9c4:
    // 0x2ca9c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ca9c8:
    if (ctx->pc == 0x2CA9C8u) {
        ctx->pc = 0x2CA9CCu;
        goto label_2ca9cc;
    }
    ctx->pc = 0x2CA9C4u;
    {
        const bool branch_taken_0x2ca9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9c4) {
            ctx->pc = 0x2CA9E8u;
            goto label_2ca9e8;
        }
    }
    ctx->pc = 0x2CA9CCu;
label_2ca9cc:
    // 0x2ca9cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ca9d0:
    if (ctx->pc == 0x2CA9D0u) {
        ctx->pc = 0x2CA9D4u;
        goto label_2ca9d4;
    }
    ctx->pc = 0x2CA9CCu;
    {
        const bool branch_taken_0x2ca9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9cc) {
            ctx->pc = 0x2CA9E8u;
            goto label_2ca9e8;
        }
    }
    ctx->pc = 0x2CA9D4u;
label_2ca9d4:
    // 0x2ca9d4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2ca9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2ca9d8:
    // 0x2ca9d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2ca9dc:
    if (ctx->pc == 0x2CA9DCu) {
        ctx->pc = 0x2CA9E0u;
        goto label_2ca9e0;
    }
    ctx->pc = 0x2CA9D8u;
    {
        const bool branch_taken_0x2ca9d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9d8) {
            ctx->pc = 0x2CA9E8u;
            goto label_2ca9e8;
        }
    }
    ctx->pc = 0x2CA9E0u;
label_2ca9e0:
    // 0x2ca9e0: 0xc0400a8  jal         func_1002A0
label_2ca9e4:
    if (ctx->pc == 0x2CA9E4u) {
        ctx->pc = 0x2CA9E8u;
        goto label_2ca9e8;
    }
    ctx->pc = 0x2CA9E0u;
    SET_GPR_U32(ctx, 31, 0x2CA9E8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA9E8u; }
        if (ctx->pc != 0x2CA9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA9E8u; }
        if (ctx->pc != 0x2CA9E8u) { return; }
    }
    ctx->pc = 0x2CA9E8u;
label_2ca9e8:
    // 0x2ca9e8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2ca9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2ca9ec:
    // 0x2ca9ec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2ca9f0:
    if (ctx->pc == 0x2CA9F0u) {
        ctx->pc = 0x2CA9F0u;
            // 0x2ca9f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2CA9F4u;
        goto label_2ca9f4;
    }
    ctx->pc = 0x2CA9ECu;
    {
        const bool branch_taken_0x2ca9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9ec) {
            ctx->pc = 0x2CA9F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA9ECu;
            // 0x2ca9f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CAA1Cu;
            goto label_2caa1c;
        }
    }
    ctx->pc = 0x2CA9F4u;
label_2ca9f4:
    // 0x2ca9f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ca9f8:
    if (ctx->pc == 0x2CA9F8u) {
        ctx->pc = 0x2CA9FCu;
        goto label_2ca9fc;
    }
    ctx->pc = 0x2CA9F4u;
    {
        const bool branch_taken_0x2ca9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9f4) {
            ctx->pc = 0x2CAA18u;
            goto label_2caa18;
        }
    }
    ctx->pc = 0x2CA9FCu;
label_2ca9fc:
    // 0x2ca9fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2caa00:
    if (ctx->pc == 0x2CAA00u) {
        ctx->pc = 0x2CAA04u;
        goto label_2caa04;
    }
    ctx->pc = 0x2CA9FCu;
    {
        const bool branch_taken_0x2ca9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9fc) {
            ctx->pc = 0x2CAA18u;
            goto label_2caa18;
        }
    }
    ctx->pc = 0x2CAA04u;
label_2caa04:
    // 0x2caa04: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2caa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2caa08:
    // 0x2caa08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2caa0c:
    if (ctx->pc == 0x2CAA0Cu) {
        ctx->pc = 0x2CAA10u;
        goto label_2caa10;
    }
    ctx->pc = 0x2CAA08u;
    {
        const bool branch_taken_0x2caa08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa08) {
            ctx->pc = 0x2CAA18u;
            goto label_2caa18;
        }
    }
    ctx->pc = 0x2CAA10u;
label_2caa10:
    // 0x2caa10: 0xc0400a8  jal         func_1002A0
label_2caa14:
    if (ctx->pc == 0x2CAA14u) {
        ctx->pc = 0x2CAA18u;
        goto label_2caa18;
    }
    ctx->pc = 0x2CAA10u;
    SET_GPR_U32(ctx, 31, 0x2CAA18u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAA18u; }
        if (ctx->pc != 0x2CAA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAA18u; }
        if (ctx->pc != 0x2CAA18u) { return; }
    }
    ctx->pc = 0x2CAA18u;
label_2caa18:
    // 0x2caa18: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2caa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2caa1c:
    // 0x2caa1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2caa20:
    if (ctx->pc == 0x2CAA20u) {
        ctx->pc = 0x2CAA24u;
        goto label_2caa24;
    }
    ctx->pc = 0x2CAA1Cu;
    {
        const bool branch_taken_0x2caa1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa1c) {
            ctx->pc = 0x2CAA38u;
            goto label_2caa38;
        }
    }
    ctx->pc = 0x2CAA24u;
label_2caa24:
    // 0x2caa24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2caa24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2caa28:
    // 0x2caa28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2caa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2caa2c:
    // 0x2caa2c: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x2caa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
label_2caa30:
    // 0x2caa30: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2caa30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2caa34:
    // 0x2caa34: 0xac400d98  sw          $zero, 0xD98($v0)
    ctx->pc = 0x2caa34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3480), GPR_U32(ctx, 0));
label_2caa38:
    // 0x2caa38: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2caa3c:
    if (ctx->pc == 0x2CAA3Cu) {
        ctx->pc = 0x2CAA3Cu;
            // 0x2caa3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CAA40u;
        goto label_2caa40;
    }
    ctx->pc = 0x2CAA38u;
    {
        const bool branch_taken_0x2caa38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa38) {
            ctx->pc = 0x2CAA3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAA38u;
            // 0x2caa3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CAA94u;
            goto label_2caa94;
        }
    }
    ctx->pc = 0x2CAA40u;
label_2caa40:
    // 0x2caa40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2caa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2caa44:
    // 0x2caa44: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2caa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2caa48:
    // 0x2caa48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2caa48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2caa4c:
    // 0x2caa4c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2caa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2caa50:
    // 0x2caa50: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2caa54:
    if (ctx->pc == 0x2CAA54u) {
        ctx->pc = 0x2CAA54u;
            // 0x2caa54: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2CAA58u;
        goto label_2caa58;
    }
    ctx->pc = 0x2CAA50u;
    {
        const bool branch_taken_0x2caa50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa50) {
            ctx->pc = 0x2CAA54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAA50u;
            // 0x2caa54: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CAA6Cu;
            goto label_2caa6c;
        }
    }
    ctx->pc = 0x2CAA58u;
label_2caa58:
    // 0x2caa58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2caa58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2caa5c:
    // 0x2caa5c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2caa5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2caa60:
    // 0x2caa60: 0x320f809  jalr        $t9
label_2caa64:
    if (ctx->pc == 0x2CAA64u) {
        ctx->pc = 0x2CAA64u;
            // 0x2caa64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CAA68u;
        goto label_2caa68;
    }
    ctx->pc = 0x2CAA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CAA68u);
        ctx->pc = 0x2CAA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAA60u;
            // 0x2caa64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CAA68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CAA68u; }
            if (ctx->pc != 0x2CAA68u) { return; }
        }
        }
    }
    ctx->pc = 0x2CAA68u;
label_2caa68:
    // 0x2caa68: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2caa68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2caa6c:
    // 0x2caa6c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2caa70:
    if (ctx->pc == 0x2CAA70u) {
        ctx->pc = 0x2CAA70u;
            // 0x2caa70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAA74u;
        goto label_2caa74;
    }
    ctx->pc = 0x2CAA6Cu;
    {
        const bool branch_taken_0x2caa6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa6c) {
            ctx->pc = 0x2CAA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAA6Cu;
            // 0x2caa70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CAA88u;
            goto label_2caa88;
        }
    }
    ctx->pc = 0x2CAA74u;
label_2caa74:
    // 0x2caa74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2caa74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2caa78:
    // 0x2caa78: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2caa78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2caa7c:
    // 0x2caa7c: 0x320f809  jalr        $t9
label_2caa80:
    if (ctx->pc == 0x2CAA80u) {
        ctx->pc = 0x2CAA80u;
            // 0x2caa80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CAA84u;
        goto label_2caa84;
    }
    ctx->pc = 0x2CAA7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CAA84u);
        ctx->pc = 0x2CAA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAA7Cu;
            // 0x2caa80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CAA84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CAA84u; }
            if (ctx->pc != 0x2CAA84u) { return; }
        }
        }
    }
    ctx->pc = 0x2CAA84u;
label_2caa84:
    // 0x2caa84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2caa84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2caa88:
    // 0x2caa88: 0xc075bf8  jal         func_1D6FE0
label_2caa8c:
    if (ctx->pc == 0x2CAA8Cu) {
        ctx->pc = 0x2CAA8Cu;
            // 0x2caa8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAA90u;
        goto label_2caa90;
    }
    ctx->pc = 0x2CAA88u;
    SET_GPR_U32(ctx, 31, 0x2CAA90u);
    ctx->pc = 0x2CAA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAA88u;
            // 0x2caa8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAA90u; }
        if (ctx->pc != 0x2CAA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAA90u; }
        if (ctx->pc != 0x2CAA90u) { return; }
    }
    ctx->pc = 0x2CAA90u;
label_2caa90:
    // 0x2caa90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2caa90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2caa94:
    // 0x2caa94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2caa94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2caa98:
    // 0x2caa98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2caa9c:
    if (ctx->pc == 0x2CAA9Cu) {
        ctx->pc = 0x2CAA9Cu;
            // 0x2caa9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAAA0u;
        goto label_2caaa0;
    }
    ctx->pc = 0x2CAA98u;
    {
        const bool branch_taken_0x2caa98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2caa98) {
            ctx->pc = 0x2CAA9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAA98u;
            // 0x2caa9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CAAACu;
            goto label_2caaac;
        }
    }
    ctx->pc = 0x2CAAA0u;
label_2caaa0:
    // 0x2caaa0: 0xc0400a8  jal         func_1002A0
label_2caaa4:
    if (ctx->pc == 0x2CAAA4u) {
        ctx->pc = 0x2CAAA4u;
            // 0x2caaa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAAA8u;
        goto label_2caaa8;
    }
    ctx->pc = 0x2CAAA0u;
    SET_GPR_U32(ctx, 31, 0x2CAAA8u);
    ctx->pc = 0x2CAAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAAA0u;
            // 0x2caaa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAAA8u; }
        if (ctx->pc != 0x2CAAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAAA8u; }
        if (ctx->pc != 0x2CAAA8u) { return; }
    }
    ctx->pc = 0x2CAAA8u;
label_2caaa8:
    // 0x2caaa8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2caaa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2caaac:
    // 0x2caaac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2caaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2caab0:
    // 0x2caab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2caab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2caab4:
    // 0x2caab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2caab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2caab8:
    // 0x2caab8: 0x3e00008  jr          $ra
label_2caabc:
    if (ctx->pc == 0x2CAABCu) {
        ctx->pc = 0x2CAABCu;
            // 0x2caabc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CAAC0u;
        goto label_fallthrough_0x2caab8;
    }
    ctx->pc = 0x2CAAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAAB8u;
            // 0x2caabc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2caab8:
    ctx->pc = 0x2CAAC0u;
}
