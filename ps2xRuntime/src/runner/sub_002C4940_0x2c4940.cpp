#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C4940
// Address: 0x2c4940 - 0x2c4ac0
void sub_002C4940_0x2c4940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4940_0x2c4940");
#endif

    switch (ctx->pc) {
        case 0x2c4940u: goto label_2c4940;
        case 0x2c4944u: goto label_2c4944;
        case 0x2c4948u: goto label_2c4948;
        case 0x2c494cu: goto label_2c494c;
        case 0x2c4950u: goto label_2c4950;
        case 0x2c4954u: goto label_2c4954;
        case 0x2c4958u: goto label_2c4958;
        case 0x2c495cu: goto label_2c495c;
        case 0x2c4960u: goto label_2c4960;
        case 0x2c4964u: goto label_2c4964;
        case 0x2c4968u: goto label_2c4968;
        case 0x2c496cu: goto label_2c496c;
        case 0x2c4970u: goto label_2c4970;
        case 0x2c4974u: goto label_2c4974;
        case 0x2c4978u: goto label_2c4978;
        case 0x2c497cu: goto label_2c497c;
        case 0x2c4980u: goto label_2c4980;
        case 0x2c4984u: goto label_2c4984;
        case 0x2c4988u: goto label_2c4988;
        case 0x2c498cu: goto label_2c498c;
        case 0x2c4990u: goto label_2c4990;
        case 0x2c4994u: goto label_2c4994;
        case 0x2c4998u: goto label_2c4998;
        case 0x2c499cu: goto label_2c499c;
        case 0x2c49a0u: goto label_2c49a0;
        case 0x2c49a4u: goto label_2c49a4;
        case 0x2c49a8u: goto label_2c49a8;
        case 0x2c49acu: goto label_2c49ac;
        case 0x2c49b0u: goto label_2c49b0;
        case 0x2c49b4u: goto label_2c49b4;
        case 0x2c49b8u: goto label_2c49b8;
        case 0x2c49bcu: goto label_2c49bc;
        case 0x2c49c0u: goto label_2c49c0;
        case 0x2c49c4u: goto label_2c49c4;
        case 0x2c49c8u: goto label_2c49c8;
        case 0x2c49ccu: goto label_2c49cc;
        case 0x2c49d0u: goto label_2c49d0;
        case 0x2c49d4u: goto label_2c49d4;
        case 0x2c49d8u: goto label_2c49d8;
        case 0x2c49dcu: goto label_2c49dc;
        case 0x2c49e0u: goto label_2c49e0;
        case 0x2c49e4u: goto label_2c49e4;
        case 0x2c49e8u: goto label_2c49e8;
        case 0x2c49ecu: goto label_2c49ec;
        case 0x2c49f0u: goto label_2c49f0;
        case 0x2c49f4u: goto label_2c49f4;
        case 0x2c49f8u: goto label_2c49f8;
        case 0x2c49fcu: goto label_2c49fc;
        case 0x2c4a00u: goto label_2c4a00;
        case 0x2c4a04u: goto label_2c4a04;
        case 0x2c4a08u: goto label_2c4a08;
        case 0x2c4a0cu: goto label_2c4a0c;
        case 0x2c4a10u: goto label_2c4a10;
        case 0x2c4a14u: goto label_2c4a14;
        case 0x2c4a18u: goto label_2c4a18;
        case 0x2c4a1cu: goto label_2c4a1c;
        case 0x2c4a20u: goto label_2c4a20;
        case 0x2c4a24u: goto label_2c4a24;
        case 0x2c4a28u: goto label_2c4a28;
        case 0x2c4a2cu: goto label_2c4a2c;
        case 0x2c4a30u: goto label_2c4a30;
        case 0x2c4a34u: goto label_2c4a34;
        case 0x2c4a38u: goto label_2c4a38;
        case 0x2c4a3cu: goto label_2c4a3c;
        case 0x2c4a40u: goto label_2c4a40;
        case 0x2c4a44u: goto label_2c4a44;
        case 0x2c4a48u: goto label_2c4a48;
        case 0x2c4a4cu: goto label_2c4a4c;
        case 0x2c4a50u: goto label_2c4a50;
        case 0x2c4a54u: goto label_2c4a54;
        case 0x2c4a58u: goto label_2c4a58;
        case 0x2c4a5cu: goto label_2c4a5c;
        case 0x2c4a60u: goto label_2c4a60;
        case 0x2c4a64u: goto label_2c4a64;
        case 0x2c4a68u: goto label_2c4a68;
        case 0x2c4a6cu: goto label_2c4a6c;
        case 0x2c4a70u: goto label_2c4a70;
        case 0x2c4a74u: goto label_2c4a74;
        case 0x2c4a78u: goto label_2c4a78;
        case 0x2c4a7cu: goto label_2c4a7c;
        case 0x2c4a80u: goto label_2c4a80;
        case 0x2c4a84u: goto label_2c4a84;
        case 0x2c4a88u: goto label_2c4a88;
        case 0x2c4a8cu: goto label_2c4a8c;
        case 0x2c4a90u: goto label_2c4a90;
        case 0x2c4a94u: goto label_2c4a94;
        case 0x2c4a98u: goto label_2c4a98;
        case 0x2c4a9cu: goto label_2c4a9c;
        case 0x2c4aa0u: goto label_2c4aa0;
        case 0x2c4aa4u: goto label_2c4aa4;
        case 0x2c4aa8u: goto label_2c4aa8;
        case 0x2c4aacu: goto label_2c4aac;
        case 0x2c4ab0u: goto label_2c4ab0;
        case 0x2c4ab4u: goto label_2c4ab4;
        case 0x2c4ab8u: goto label_2c4ab8;
        case 0x2c4abcu: goto label_2c4abc;
        default: break;
    }

    ctx->pc = 0x2c4940u;

label_2c4940:
    // 0x2c4940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c4944:
    // 0x2c4944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c4944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c4948:
    // 0x2c4948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c494c:
    // 0x2c494c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c494cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c4950:
    // 0x2c4950: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c4950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c4954:
    // 0x2c4954: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_2c4958:
    if (ctx->pc == 0x2C4958u) {
        ctx->pc = 0x2C4958u;
            // 0x2c4958: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C495Cu;
        goto label_2c495c;
    }
    ctx->pc = 0x2C4954u;
    {
        const bool branch_taken_0x2c4954 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4954u;
            // 0x2c4958: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4954) {
            ctx->pc = 0x2C4A9Cu;
            goto label_2c4a9c;
        }
    }
    ctx->pc = 0x2C495Cu;
label_2c495c:
    // 0x2c495c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c495cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c4960:
    // 0x2c4960: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c4960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c4964:
    // 0x2c4964: 0x24630f10  addiu       $v1, $v1, 0xF10
    ctx->pc = 0x2c4964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3856));
label_2c4968:
    // 0x2c4968: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c4968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c496c:
    // 0x2c496c: 0x24420f48  addiu       $v0, $v0, 0xF48
    ctx->pc = 0x2c496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3912));
label_2c4970:
    // 0x2c4970: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c4970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c4974:
    // 0x2c4974: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c4974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c4978:
    // 0x2c4978: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c4978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c497c:
    // 0x2c497c: 0xc0407c0  jal         func_101F00
label_2c4980:
    if (ctx->pc == 0x2C4980u) {
        ctx->pc = 0x2C4980u;
            // 0x2c4980: 0x24a54890  addiu       $a1, $a1, 0x4890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18576));
        ctx->pc = 0x2C4984u;
        goto label_2c4984;
    }
    ctx->pc = 0x2C497Cu;
    SET_GPR_U32(ctx, 31, 0x2C4984u);
    ctx->pc = 0x2C4980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C497Cu;
            // 0x2c4980: 0x24a54890  addiu       $a1, $a1, 0x4890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4984u; }
        if (ctx->pc != 0x2C4984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4984u; }
        if (ctx->pc != 0x2C4984u) { return; }
    }
    ctx->pc = 0x2C4984u;
label_2c4984:
    // 0x2c4984: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c4984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c4988:
    // 0x2c4988: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2c498c:
    if (ctx->pc == 0x2C498Cu) {
        ctx->pc = 0x2C498Cu;
            // 0x2c498c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C4990u;
        goto label_2c4990;
    }
    ctx->pc = 0x2C4988u;
    {
        const bool branch_taken_0x2c4988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4988) {
            ctx->pc = 0x2C498Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4988u;
            // 0x2c498c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C49B0u;
            goto label_2c49b0;
        }
    }
    ctx->pc = 0x2C4990u;
label_2c4990:
    // 0x2c4990: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x2c4990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2c4994:
    // 0x2c4994: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2c4998:
    if (ctx->pc == 0x2C4998u) {
        ctx->pc = 0x2C4998u;
            // 0x2c4998: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x2C499Cu;
        goto label_2c499c;
    }
    ctx->pc = 0x2C4994u;
    {
        const bool branch_taken_0x2c4994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4994) {
            ctx->pc = 0x2C4998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4994u;
            // 0x2c4998: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C49ACu;
            goto label_2c49ac;
        }
    }
    ctx->pc = 0x2C499Cu;
label_2c499c:
    // 0x2c499c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2c499cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2c49a0:
    // 0x2c49a0: 0xc0407c0  jal         func_101F00
label_2c49a4:
    if (ctx->pc == 0x2C49A4u) {
        ctx->pc = 0x2C49A4u;
            // 0x2c49a4: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->pc = 0x2C49A8u;
        goto label_2c49a8;
    }
    ctx->pc = 0x2C49A0u;
    SET_GPR_U32(ctx, 31, 0x2C49A8u);
    ctx->pc = 0x2C49A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C49A0u;
            // 0x2c49a4: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C49A8u; }
        if (ctx->pc != 0x2C49A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C49A8u; }
        if (ctx->pc != 0x2C49A8u) { return; }
    }
    ctx->pc = 0x2C49A8u;
label_2c49a8:
    // 0x2c49a8: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2c49a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_2c49ac:
    // 0x2c49ac: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c49acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c49b0:
    // 0x2c49b0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c49b4:
    if (ctx->pc == 0x2C49B4u) {
        ctx->pc = 0x2C49B4u;
            // 0x2c49b4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C49B8u;
        goto label_2c49b8;
    }
    ctx->pc = 0x2C49B0u;
    {
        const bool branch_taken_0x2c49b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c49b0) {
            ctx->pc = 0x2C49B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C49B0u;
            // 0x2c49b4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C49E0u;
            goto label_2c49e0;
        }
    }
    ctx->pc = 0x2C49B8u;
label_2c49b8:
    // 0x2c49b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c49bc:
    if (ctx->pc == 0x2C49BCu) {
        ctx->pc = 0x2C49C0u;
        goto label_2c49c0;
    }
    ctx->pc = 0x2C49B8u;
    {
        const bool branch_taken_0x2c49b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c49b8) {
            ctx->pc = 0x2C49DCu;
            goto label_2c49dc;
        }
    }
    ctx->pc = 0x2C49C0u;
label_2c49c0:
    // 0x2c49c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c49c4:
    if (ctx->pc == 0x2C49C4u) {
        ctx->pc = 0x2C49C8u;
        goto label_2c49c8;
    }
    ctx->pc = 0x2C49C0u;
    {
        const bool branch_taken_0x2c49c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c49c0) {
            ctx->pc = 0x2C49DCu;
            goto label_2c49dc;
        }
    }
    ctx->pc = 0x2C49C8u;
label_2c49c8:
    // 0x2c49c8: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c49c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c49cc:
    // 0x2c49cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c49d0:
    if (ctx->pc == 0x2C49D0u) {
        ctx->pc = 0x2C49D4u;
        goto label_2c49d4;
    }
    ctx->pc = 0x2C49CCu;
    {
        const bool branch_taken_0x2c49cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c49cc) {
            ctx->pc = 0x2C49DCu;
            goto label_2c49dc;
        }
    }
    ctx->pc = 0x2C49D4u;
label_2c49d4:
    // 0x2c49d4: 0xc0400a8  jal         func_1002A0
label_2c49d8:
    if (ctx->pc == 0x2C49D8u) {
        ctx->pc = 0x2C49DCu;
        goto label_2c49dc;
    }
    ctx->pc = 0x2C49D4u;
    SET_GPR_U32(ctx, 31, 0x2C49DCu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C49DCu; }
        if (ctx->pc != 0x2C49DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C49DCu; }
        if (ctx->pc != 0x2C49DCu) { return; }
    }
    ctx->pc = 0x2C49DCu;
label_2c49dc:
    // 0x2c49dc: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c49e0:
    // 0x2c49e0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c49e4:
    if (ctx->pc == 0x2C49E4u) {
        ctx->pc = 0x2C49E4u;
            // 0x2c49e4: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C49E8u;
        goto label_2c49e8;
    }
    ctx->pc = 0x2C49E0u;
    {
        const bool branch_taken_0x2c49e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c49e0) {
            ctx->pc = 0x2C49E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C49E0u;
            // 0x2c49e4: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4A10u;
            goto label_2c4a10;
        }
    }
    ctx->pc = 0x2C49E8u;
label_2c49e8:
    // 0x2c49e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c49ec:
    if (ctx->pc == 0x2C49ECu) {
        ctx->pc = 0x2C49F0u;
        goto label_2c49f0;
    }
    ctx->pc = 0x2C49E8u;
    {
        const bool branch_taken_0x2c49e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c49e8) {
            ctx->pc = 0x2C4A0Cu;
            goto label_2c4a0c;
        }
    }
    ctx->pc = 0x2C49F0u;
label_2c49f0:
    // 0x2c49f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c49f4:
    if (ctx->pc == 0x2C49F4u) {
        ctx->pc = 0x2C49F8u;
        goto label_2c49f8;
    }
    ctx->pc = 0x2C49F0u;
    {
        const bool branch_taken_0x2c49f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c49f0) {
            ctx->pc = 0x2C4A0Cu;
            goto label_2c4a0c;
        }
    }
    ctx->pc = 0x2C49F8u;
label_2c49f8:
    // 0x2c49f8: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c49f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c49fc:
    // 0x2c49fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c4a00:
    if (ctx->pc == 0x2C4A00u) {
        ctx->pc = 0x2C4A04u;
        goto label_2c4a04;
    }
    ctx->pc = 0x2C49FCu;
    {
        const bool branch_taken_0x2c49fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c49fc) {
            ctx->pc = 0x2C4A0Cu;
            goto label_2c4a0c;
        }
    }
    ctx->pc = 0x2C4A04u;
label_2c4a04:
    // 0x2c4a04: 0xc0400a8  jal         func_1002A0
label_2c4a08:
    if (ctx->pc == 0x2C4A08u) {
        ctx->pc = 0x2C4A0Cu;
        goto label_2c4a0c;
    }
    ctx->pc = 0x2C4A04u;
    SET_GPR_U32(ctx, 31, 0x2C4A0Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A0Cu; }
        if (ctx->pc != 0x2C4A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A0Cu; }
        if (ctx->pc != 0x2C4A0Cu) { return; }
    }
    ctx->pc = 0x2C4A0Cu;
label_2c4a0c:
    // 0x2c4a0c: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c4a10:
    // 0x2c4a10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c4a14:
    if (ctx->pc == 0x2C4A14u) {
        ctx->pc = 0x2C4A18u;
        goto label_2c4a18;
    }
    ctx->pc = 0x2C4A10u;
    {
        const bool branch_taken_0x2c4a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4a10) {
            ctx->pc = 0x2C4A2Cu;
            goto label_2c4a2c;
        }
    }
    ctx->pc = 0x2C4A18u;
label_2c4a18:
    // 0x2c4a18: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c4a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c4a1c:
    // 0x2c4a1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c4a20:
    // 0x2c4a20: 0x24630ef8  addiu       $v1, $v1, 0xEF8
    ctx->pc = 0x2c4a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3832));
label_2c4a24:
    // 0x2c4a24: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c4a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c4a28:
    // 0x2c4a28: 0xac400dd8  sw          $zero, 0xDD8($v0)
    ctx->pc = 0x2c4a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3544), GPR_U32(ctx, 0));
label_2c4a2c:
    // 0x2c4a2c: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c4a30:
    if (ctx->pc == 0x2C4A30u) {
        ctx->pc = 0x2C4A30u;
            // 0x2c4a30: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C4A34u;
        goto label_2c4a34;
    }
    ctx->pc = 0x2C4A2Cu;
    {
        const bool branch_taken_0x2c4a2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4a2c) {
            ctx->pc = 0x2C4A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4A2Cu;
            // 0x2c4a30: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4A88u;
            goto label_2c4a88;
        }
    }
    ctx->pc = 0x2C4A34u;
label_2c4a34:
    // 0x2c4a34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c4a38:
    // 0x2c4a38: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c4a3c:
    // 0x2c4a3c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c4a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c4a40:
    // 0x2c4a40: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c4a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c4a44:
    // 0x2c4a44: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c4a48:
    if (ctx->pc == 0x2C4A48u) {
        ctx->pc = 0x2C4A48u;
            // 0x2c4a48: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C4A4Cu;
        goto label_2c4a4c;
    }
    ctx->pc = 0x2C4A44u;
    {
        const bool branch_taken_0x2c4a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4a44) {
            ctx->pc = 0x2C4A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4A44u;
            // 0x2c4a48: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4A60u;
            goto label_2c4a60;
        }
    }
    ctx->pc = 0x2C4A4Cu;
label_2c4a4c:
    // 0x2c4a4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c4a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c4a50:
    // 0x2c4a50: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c4a50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c4a54:
    // 0x2c4a54: 0x320f809  jalr        $t9
label_2c4a58:
    if (ctx->pc == 0x2C4A58u) {
        ctx->pc = 0x2C4A58u;
            // 0x2c4a58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C4A5Cu;
        goto label_2c4a5c;
    }
    ctx->pc = 0x2C4A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C4A5Cu);
        ctx->pc = 0x2C4A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4A54u;
            // 0x2c4a58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C4A5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A5Cu; }
            if (ctx->pc != 0x2C4A5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C4A5Cu;
label_2c4a5c:
    // 0x2c4a5c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c4a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c4a60:
    // 0x2c4a60: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c4a64:
    if (ctx->pc == 0x2C4A64u) {
        ctx->pc = 0x2C4A64u;
            // 0x2c4a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4A68u;
        goto label_2c4a68;
    }
    ctx->pc = 0x2C4A60u;
    {
        const bool branch_taken_0x2c4a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4a60) {
            ctx->pc = 0x2C4A64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4A60u;
            // 0x2c4a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4A7Cu;
            goto label_2c4a7c;
        }
    }
    ctx->pc = 0x2C4A68u;
label_2c4a68:
    // 0x2c4a68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c4a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c4a6c:
    // 0x2c4a6c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c4a6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c4a70:
    // 0x2c4a70: 0x320f809  jalr        $t9
label_2c4a74:
    if (ctx->pc == 0x2C4A74u) {
        ctx->pc = 0x2C4A74u;
            // 0x2c4a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C4A78u;
        goto label_2c4a78;
    }
    ctx->pc = 0x2C4A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C4A78u);
        ctx->pc = 0x2C4A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4A70u;
            // 0x2c4a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C4A78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A78u; }
            if (ctx->pc != 0x2C4A78u) { return; }
        }
        }
    }
    ctx->pc = 0x2C4A78u;
label_2c4a78:
    // 0x2c4a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c4a7c:
    // 0x2c4a7c: 0xc075bf8  jal         func_1D6FE0
label_2c4a80:
    if (ctx->pc == 0x2C4A80u) {
        ctx->pc = 0x2C4A80u;
            // 0x2c4a80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4A84u;
        goto label_2c4a84;
    }
    ctx->pc = 0x2C4A7Cu;
    SET_GPR_U32(ctx, 31, 0x2C4A84u);
    ctx->pc = 0x2C4A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4A7Cu;
            // 0x2c4a80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A84u; }
        if (ctx->pc != 0x2C4A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A84u; }
        if (ctx->pc != 0x2C4A84u) { return; }
    }
    ctx->pc = 0x2C4A84u;
label_2c4a84:
    // 0x2c4a84: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c4a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c4a88:
    // 0x2c4a88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c4a88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c4a8c:
    // 0x2c4a8c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c4a90:
    if (ctx->pc == 0x2C4A90u) {
        ctx->pc = 0x2C4A90u;
            // 0x2c4a90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4A94u;
        goto label_2c4a94;
    }
    ctx->pc = 0x2C4A8Cu;
    {
        const bool branch_taken_0x2c4a8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c4a8c) {
            ctx->pc = 0x2C4A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4A8Cu;
            // 0x2c4a90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4AA0u;
            goto label_2c4aa0;
        }
    }
    ctx->pc = 0x2C4A94u;
label_2c4a94:
    // 0x2c4a94: 0xc0400a8  jal         func_1002A0
label_2c4a98:
    if (ctx->pc == 0x2C4A98u) {
        ctx->pc = 0x2C4A98u;
            // 0x2c4a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4A9Cu;
        goto label_2c4a9c;
    }
    ctx->pc = 0x2C4A94u;
    SET_GPR_U32(ctx, 31, 0x2C4A9Cu);
    ctx->pc = 0x2C4A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4A94u;
            // 0x2c4a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A9Cu; }
        if (ctx->pc != 0x2C4A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A9Cu; }
        if (ctx->pc != 0x2C4A9Cu) { return; }
    }
    ctx->pc = 0x2C4A9Cu;
label_2c4a9c:
    // 0x2c4a9c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c4a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c4aa0:
    // 0x2c4aa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c4aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c4aa4:
    // 0x2c4aa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c4aa8:
    // 0x2c4aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4aac:
    // 0x2c4aac: 0x3e00008  jr          $ra
label_2c4ab0:
    if (ctx->pc == 0x2C4AB0u) {
        ctx->pc = 0x2C4AB0u;
            // 0x2c4ab0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C4AB4u;
        goto label_2c4ab4;
    }
    ctx->pc = 0x2C4AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4AACu;
            // 0x2c4ab0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C4AB4u;
label_2c4ab4:
    // 0x2c4ab4: 0x0  nop
    ctx->pc = 0x2c4ab4u;
    // NOP
label_2c4ab8:
    // 0x2c4ab8: 0x0  nop
    ctx->pc = 0x2c4ab8u;
    // NOP
label_2c4abc:
    // 0x2c4abc: 0x0  nop
    ctx->pc = 0x2c4abcu;
    // NOP
}
