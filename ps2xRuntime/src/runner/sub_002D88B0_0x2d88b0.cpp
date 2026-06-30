#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D88B0
// Address: 0x2d88b0 - 0x2d8a80
void sub_002D88B0_0x2d88b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D88B0_0x2d88b0");
#endif

    switch (ctx->pc) {
        case 0x2d88b0u: goto label_2d88b0;
        case 0x2d88b4u: goto label_2d88b4;
        case 0x2d88b8u: goto label_2d88b8;
        case 0x2d88bcu: goto label_2d88bc;
        case 0x2d88c0u: goto label_2d88c0;
        case 0x2d88c4u: goto label_2d88c4;
        case 0x2d88c8u: goto label_2d88c8;
        case 0x2d88ccu: goto label_2d88cc;
        case 0x2d88d0u: goto label_2d88d0;
        case 0x2d88d4u: goto label_2d88d4;
        case 0x2d88d8u: goto label_2d88d8;
        case 0x2d88dcu: goto label_2d88dc;
        case 0x2d88e0u: goto label_2d88e0;
        case 0x2d88e4u: goto label_2d88e4;
        case 0x2d88e8u: goto label_2d88e8;
        case 0x2d88ecu: goto label_2d88ec;
        case 0x2d88f0u: goto label_2d88f0;
        case 0x2d88f4u: goto label_2d88f4;
        case 0x2d88f8u: goto label_2d88f8;
        case 0x2d88fcu: goto label_2d88fc;
        case 0x2d8900u: goto label_2d8900;
        case 0x2d8904u: goto label_2d8904;
        case 0x2d8908u: goto label_2d8908;
        case 0x2d890cu: goto label_2d890c;
        case 0x2d8910u: goto label_2d8910;
        case 0x2d8914u: goto label_2d8914;
        case 0x2d8918u: goto label_2d8918;
        case 0x2d891cu: goto label_2d891c;
        case 0x2d8920u: goto label_2d8920;
        case 0x2d8924u: goto label_2d8924;
        case 0x2d8928u: goto label_2d8928;
        case 0x2d892cu: goto label_2d892c;
        case 0x2d8930u: goto label_2d8930;
        case 0x2d8934u: goto label_2d8934;
        case 0x2d8938u: goto label_2d8938;
        case 0x2d893cu: goto label_2d893c;
        case 0x2d8940u: goto label_2d8940;
        case 0x2d8944u: goto label_2d8944;
        case 0x2d8948u: goto label_2d8948;
        case 0x2d894cu: goto label_2d894c;
        case 0x2d8950u: goto label_2d8950;
        case 0x2d8954u: goto label_2d8954;
        case 0x2d8958u: goto label_2d8958;
        case 0x2d895cu: goto label_2d895c;
        case 0x2d8960u: goto label_2d8960;
        case 0x2d8964u: goto label_2d8964;
        case 0x2d8968u: goto label_2d8968;
        case 0x2d896cu: goto label_2d896c;
        case 0x2d8970u: goto label_2d8970;
        case 0x2d8974u: goto label_2d8974;
        case 0x2d8978u: goto label_2d8978;
        case 0x2d897cu: goto label_2d897c;
        case 0x2d8980u: goto label_2d8980;
        case 0x2d8984u: goto label_2d8984;
        case 0x2d8988u: goto label_2d8988;
        case 0x2d898cu: goto label_2d898c;
        case 0x2d8990u: goto label_2d8990;
        case 0x2d8994u: goto label_2d8994;
        case 0x2d8998u: goto label_2d8998;
        case 0x2d899cu: goto label_2d899c;
        case 0x2d89a0u: goto label_2d89a0;
        case 0x2d89a4u: goto label_2d89a4;
        case 0x2d89a8u: goto label_2d89a8;
        case 0x2d89acu: goto label_2d89ac;
        case 0x2d89b0u: goto label_2d89b0;
        case 0x2d89b4u: goto label_2d89b4;
        case 0x2d89b8u: goto label_2d89b8;
        case 0x2d89bcu: goto label_2d89bc;
        case 0x2d89c0u: goto label_2d89c0;
        case 0x2d89c4u: goto label_2d89c4;
        case 0x2d89c8u: goto label_2d89c8;
        case 0x2d89ccu: goto label_2d89cc;
        case 0x2d89d0u: goto label_2d89d0;
        case 0x2d89d4u: goto label_2d89d4;
        case 0x2d89d8u: goto label_2d89d8;
        case 0x2d89dcu: goto label_2d89dc;
        case 0x2d89e0u: goto label_2d89e0;
        case 0x2d89e4u: goto label_2d89e4;
        case 0x2d89e8u: goto label_2d89e8;
        case 0x2d89ecu: goto label_2d89ec;
        case 0x2d89f0u: goto label_2d89f0;
        case 0x2d89f4u: goto label_2d89f4;
        case 0x2d89f8u: goto label_2d89f8;
        case 0x2d89fcu: goto label_2d89fc;
        case 0x2d8a00u: goto label_2d8a00;
        case 0x2d8a04u: goto label_2d8a04;
        case 0x2d8a08u: goto label_2d8a08;
        case 0x2d8a0cu: goto label_2d8a0c;
        case 0x2d8a10u: goto label_2d8a10;
        case 0x2d8a14u: goto label_2d8a14;
        case 0x2d8a18u: goto label_2d8a18;
        case 0x2d8a1cu: goto label_2d8a1c;
        case 0x2d8a20u: goto label_2d8a20;
        case 0x2d8a24u: goto label_2d8a24;
        case 0x2d8a28u: goto label_2d8a28;
        case 0x2d8a2cu: goto label_2d8a2c;
        case 0x2d8a30u: goto label_2d8a30;
        case 0x2d8a34u: goto label_2d8a34;
        case 0x2d8a38u: goto label_2d8a38;
        case 0x2d8a3cu: goto label_2d8a3c;
        case 0x2d8a40u: goto label_2d8a40;
        case 0x2d8a44u: goto label_2d8a44;
        case 0x2d8a48u: goto label_2d8a48;
        case 0x2d8a4cu: goto label_2d8a4c;
        case 0x2d8a50u: goto label_2d8a50;
        case 0x2d8a54u: goto label_2d8a54;
        case 0x2d8a58u: goto label_2d8a58;
        case 0x2d8a5cu: goto label_2d8a5c;
        case 0x2d8a60u: goto label_2d8a60;
        case 0x2d8a64u: goto label_2d8a64;
        case 0x2d8a68u: goto label_2d8a68;
        case 0x2d8a6cu: goto label_2d8a6c;
        case 0x2d8a70u: goto label_2d8a70;
        case 0x2d8a74u: goto label_2d8a74;
        case 0x2d8a78u: goto label_2d8a78;
        case 0x2d8a7cu: goto label_2d8a7c;
        default: break;
    }

    ctx->pc = 0x2d88b0u;

label_2d88b0:
    // 0x2d88b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d88b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d88b4:
    // 0x2d88b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d88b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d88b8:
    // 0x2d88b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d88b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d88bc:
    // 0x2d88bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d88bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d88c0:
    // 0x2d88c0: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x2d88c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2d88c4:
    // 0x2d88c4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2d88c8:
    if (ctx->pc == 0x2D88C8u) {
        ctx->pc = 0x2D88C8u;
            // 0x2d88c8: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x2D88CCu;
        goto label_2d88cc;
    }
    ctx->pc = 0x2D88C4u;
    {
        const bool branch_taken_0x2d88c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d88c4) {
            ctx->pc = 0x2D88C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D88C4u;
            // 0x2d88c8: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D88D8u;
            goto label_2d88d8;
        }
    }
    ctx->pc = 0x2D88CCu;
label_2d88cc:
    // 0x2d88cc: 0xc04008c  jal         func_100230
label_2d88d0:
    if (ctx->pc == 0x2D88D0u) {
        ctx->pc = 0x2D88D4u;
        goto label_2d88d4;
    }
    ctx->pc = 0x2D88CCu;
    SET_GPR_U32(ctx, 31, 0x2D88D4u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D88D4u; }
        if (ctx->pc != 0x2D88D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D88D4u; }
        if (ctx->pc != 0x2D88D4u) { return; }
    }
    ctx->pc = 0x2D88D4u;
label_2d88d4:
    // 0x2d88d4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2d88d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2d88d8:
    // 0x2d88d8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2d88d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2d88dc:
    // 0x2d88dc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2d88e0:
    if (ctx->pc == 0x2D88E0u) {
        ctx->pc = 0x2D88E0u;
            // 0x2d88e0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x2D88E4u;
        goto label_2d88e4;
    }
    ctx->pc = 0x2D88DCu;
    {
        const bool branch_taken_0x2d88dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d88dc) {
            ctx->pc = 0x2D88E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D88DCu;
            // 0x2d88e0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D88F4u;
            goto label_2d88f4;
        }
    }
    ctx->pc = 0x2D88E4u;
label_2d88e4:
    // 0x2d88e4: 0x3c05002e  lui         $a1, 0x2E
    ctx->pc = 0x2d88e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46 << 16));
label_2d88e8:
    // 0x2d88e8: 0xc0407c0  jal         func_101F00
label_2d88ec:
    if (ctx->pc == 0x2D88ECu) {
        ctx->pc = 0x2D88ECu;
            // 0x2d88ec: 0x24a58910  addiu       $a1, $a1, -0x76F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
        ctx->pc = 0x2D88F0u;
        goto label_2d88f0;
    }
    ctx->pc = 0x2D88E8u;
    SET_GPR_U32(ctx, 31, 0x2D88F0u);
    ctx->pc = 0x2D88ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D88E8u;
            // 0x2d88ec: 0x24a58910  addiu       $a1, $a1, -0x76F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D88F0u; }
        if (ctx->pc != 0x2D88F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D88F0u; }
        if (ctx->pc != 0x2D88F0u) { return; }
    }
    ctx->pc = 0x2D88F0u;
label_2d88f0:
    // 0x2d88f0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2d88f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2d88f4:
    // 0x2d88f4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d88f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2d88f8:
    // 0x2d88f8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2d88f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2d88fc:
    // 0x2d88fc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2d88fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2d8900:
    // 0x2d8900: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d8900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8904:
    // 0x2d8904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8908:
    // 0x2d8908: 0x3e00008  jr          $ra
label_2d890c:
    if (ctx->pc == 0x2D890Cu) {
        ctx->pc = 0x2D890Cu;
            // 0x2d890c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2D8910u;
        goto label_2d8910;
    }
    ctx->pc = 0x2D8908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D890Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8908u;
            // 0x2d890c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8910u;
label_2d8910:
    // 0x2d8910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d8910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d8914:
    // 0x2d8914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d8918:
    // 0x2d8918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d891c:
    // 0x2d891c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d891cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d8920:
    // 0x2d8920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d8920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8924:
    // 0x2d8924: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_2d8928:
    if (ctx->pc == 0x2D8928u) {
        ctx->pc = 0x2D8928u;
            // 0x2d8928: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D892Cu;
        goto label_2d892c;
    }
    ctx->pc = 0x2D8924u;
    {
        const bool branch_taken_0x2d8924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8924u;
            // 0x2d8928: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8924) {
            ctx->pc = 0x2D8988u;
            goto label_2d8988;
        }
    }
    ctx->pc = 0x2D892Cu;
label_2d892c:
    // 0x2d892c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d892cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d8930:
    // 0x2d8930: 0x24422dd0  addiu       $v0, $v0, 0x2DD0
    ctx->pc = 0x2d8930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11728));
label_2d8934:
    // 0x2d8934: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d8934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d8938:
    // 0x2d8938: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d8938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d893c:
    // 0x2d893c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2d893cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2d8940:
    // 0x2d8940: 0x320f809  jalr        $t9
label_2d8944:
    if (ctx->pc == 0x2D8944u) {
        ctx->pc = 0x2D8948u;
        goto label_2d8948;
    }
    ctx->pc = 0x2D8940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8948u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8948u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8948u; }
            if (ctx->pc != 0x2D8948u) { return; }
        }
        }
    }
    ctx->pc = 0x2D8948u;
label_2d8948:
    // 0x2d8948: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_2d894c:
    if (ctx->pc == 0x2D894Cu) {
        ctx->pc = 0x2D894Cu;
            // 0x2d894c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2D8950u;
        goto label_2d8950;
    }
    ctx->pc = 0x2D8948u;
    {
        const bool branch_taken_0x2d8948 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8948) {
            ctx->pc = 0x2D894Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8948u;
            // 0x2d894c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8974u;
            goto label_2d8974;
        }
    }
    ctx->pc = 0x2D8950u;
label_2d8950:
    // 0x2d8950: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d8950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d8954:
    // 0x2d8954: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2d8954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2d8958:
    // 0x2d8958: 0x24632e00  addiu       $v1, $v1, 0x2E00
    ctx->pc = 0x2d8958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11776));
label_2d895c:
    // 0x2d895c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2d8960:
    if (ctx->pc == 0x2D8960u) {
        ctx->pc = 0x2D8960u;
            // 0x2d8960: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2D8964u;
        goto label_2d8964;
    }
    ctx->pc = 0x2D895Cu;
    {
        const bool branch_taken_0x2d895c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D895Cu;
            // 0x2d8960: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d895c) {
            ctx->pc = 0x2D8970u;
            goto label_2d8970;
        }
    }
    ctx->pc = 0x2D8964u;
label_2d8964:
    // 0x2d8964: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d8964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d8968:
    // 0x2d8968: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x2d8968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_2d896c:
    // 0x2d896c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2d896cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2d8970:
    // 0x2d8970: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d8970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2d8974:
    // 0x2d8974: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d8974u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d8978:
    // 0x2d8978: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d897c:
    if (ctx->pc == 0x2D897Cu) {
        ctx->pc = 0x2D897Cu;
            // 0x2d897c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8980u;
        goto label_2d8980;
    }
    ctx->pc = 0x2D8978u;
    {
        const bool branch_taken_0x2d8978 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d8978) {
            ctx->pc = 0x2D897Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8978u;
            // 0x2d897c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D898Cu;
            goto label_2d898c;
        }
    }
    ctx->pc = 0x2D8980u;
label_2d8980:
    // 0x2d8980: 0xc0400a8  jal         func_1002A0
label_2d8984:
    if (ctx->pc == 0x2D8984u) {
        ctx->pc = 0x2D8984u;
            // 0x2d8984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8988u;
        goto label_2d8988;
    }
    ctx->pc = 0x2D8980u;
    SET_GPR_U32(ctx, 31, 0x2D8988u);
    ctx->pc = 0x2D8984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8980u;
            // 0x2d8984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8988u; }
        if (ctx->pc != 0x2D8988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8988u; }
        if (ctx->pc != 0x2D8988u) { return; }
    }
    ctx->pc = 0x2D8988u;
label_2d8988:
    // 0x2d8988: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d8988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d898c:
    // 0x2d898c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d898cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d8990:
    // 0x2d8990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8994:
    // 0x2d8994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8998:
    // 0x2d8998: 0x3e00008  jr          $ra
label_2d899c:
    if (ctx->pc == 0x2D899Cu) {
        ctx->pc = 0x2D899Cu;
            // 0x2d899c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D89A0u;
        goto label_2d89a0;
    }
    ctx->pc = 0x2D8998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D899Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8998u;
            // 0x2d899c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D89A0u;
label_2d89a0:
    // 0x2d89a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d89a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d89a4:
    // 0x2d89a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d89a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d89a8:
    // 0x2d89a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d89a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d89ac:
    // 0x2d89ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d89acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d89b0:
    // 0x2d89b0: 0x8c9001d4  lw          $s0, 0x1D4($a0)
    ctx->pc = 0x2d89b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_2d89b4:
    // 0x2d89b4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2d89b8:
    if (ctx->pc == 0x2D89B8u) {
        ctx->pc = 0x2D89B8u;
            // 0x2d89b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D89BCu;
        goto label_2d89bc;
    }
    ctx->pc = 0x2D89B4u;
    {
        const bool branch_taken_0x2d89b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D89B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D89B4u;
            // 0x2d89b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89b4) {
            ctx->pc = 0x2D89D0u;
            goto label_2d89d0;
        }
    }
    ctx->pc = 0x2D89BCu;
label_2d89bc:
    // 0x2d89bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d89bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d89c0:
    // 0x2d89c0: 0xc0b6158  jal         func_2D8560
label_2d89c4:
    if (ctx->pc == 0x2D89C4u) {
        ctx->pc = 0x2D89C4u;
            // 0x2d89c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2D89C8u;
        goto label_2d89c8;
    }
    ctx->pc = 0x2D89C0u;
    SET_GPR_U32(ctx, 31, 0x2D89C8u);
    ctx->pc = 0x2D89C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D89C0u;
            // 0x2d89c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8560u;
    if (runtime->hasFunction(0x2D8560u)) {
        auto targetFn = runtime->lookupFunction(0x2D8560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D89C8u; }
        if (ctx->pc != 0x2D89C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8560_0x2d8560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D89C8u; }
        if (ctx->pc != 0x2D89C8u) { return; }
    }
    ctx->pc = 0x2D89C8u;
label_2d89c8:
    // 0x2d89c8: 0xc0400a8  jal         func_1002A0
label_2d89cc:
    if (ctx->pc == 0x2D89CCu) {
        ctx->pc = 0x2D89CCu;
            // 0x2d89cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D89D0u;
        goto label_2d89d0;
    }
    ctx->pc = 0x2D89C8u;
    SET_GPR_U32(ctx, 31, 0x2D89D0u);
    ctx->pc = 0x2D89CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D89C8u;
            // 0x2d89cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D89D0u; }
        if (ctx->pc != 0x2D89D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D89D0u; }
        if (ctx->pc != 0x2D89D0u) { return; }
    }
    ctx->pc = 0x2D89D0u;
label_2d89d0:
    // 0x2d89d0: 0xae2001d4  sw          $zero, 0x1D4($s1)
    ctx->pc = 0x2d89d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 0));
label_2d89d4:
    // 0x2d89d4: 0x8e2401ec  lw          $a0, 0x1EC($s1)
    ctx->pc = 0x2d89d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_2d89d8:
    // 0x2d89d8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2d89dc:
    if (ctx->pc == 0x2D89DCu) {
        ctx->pc = 0x2D89DCu;
            // 0x2d89dc: 0xae2001ec  sw          $zero, 0x1EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 0));
        ctx->pc = 0x2D89E0u;
        goto label_2d89e0;
    }
    ctx->pc = 0x2D89D8u;
    {
        const bool branch_taken_0x2d89d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d89d8) {
            ctx->pc = 0x2D89DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D89D8u;
            // 0x2d89dc: 0xae2001ec  sw          $zero, 0x1EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D89F4u;
            goto label_2d89f4;
        }
    }
    ctx->pc = 0x2D89E0u;
label_2d89e0:
    // 0x2d89e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d89e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d89e4:
    // 0x2d89e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2d89e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2d89e8:
    // 0x2d89e8: 0x320f809  jalr        $t9
label_2d89ec:
    if (ctx->pc == 0x2D89ECu) {
        ctx->pc = 0x2D89ECu;
            // 0x2d89ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2D89F0u;
        goto label_2d89f0;
    }
    ctx->pc = 0x2D89E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D89F0u);
        ctx->pc = 0x2D89ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D89E8u;
            // 0x2d89ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D89F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D89F0u; }
            if (ctx->pc != 0x2D89F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2D89F0u;
label_2d89f0:
    // 0x2d89f0: 0xae2001ec  sw          $zero, 0x1EC($s1)
    ctx->pc = 0x2d89f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 0));
label_2d89f4:
    // 0x2d89f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d89f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d89f8:
    // 0x2d89f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d89f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d89fc:
    // 0x2d89fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d89fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8a00:
    // 0x2d8a00: 0x3e00008  jr          $ra
label_2d8a04:
    if (ctx->pc == 0x2D8A04u) {
        ctx->pc = 0x2D8A04u;
            // 0x2d8a04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D8A08u;
        goto label_2d8a08;
    }
    ctx->pc = 0x2D8A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8A00u;
            // 0x2d8a04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8A08u;
label_2d8a08:
    // 0x2d8a08: 0x0  nop
    ctx->pc = 0x2d8a08u;
    // NOP
label_2d8a0c:
    // 0x2d8a0c: 0x0  nop
    ctx->pc = 0x2d8a0cu;
    // NOP
label_2d8a10:
    // 0x2d8a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d8a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d8a14:
    // 0x2d8a14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d8a18:
    // 0x2d8a18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d8a1c:
    // 0x2d8a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d8a20:
    // 0x2d8a20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d8a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8a24:
    // 0x2d8a24: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2d8a28:
    if (ctx->pc == 0x2D8A28u) {
        ctx->pc = 0x2D8A28u;
            // 0x2d8a28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A2Cu;
        goto label_2d8a2c;
    }
    ctx->pc = 0x2D8A24u;
    {
        const bool branch_taken_0x2d8a24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8A24u;
            // 0x2d8a28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a24) {
            ctx->pc = 0x2D8A5Cu;
            goto label_2d8a5c;
        }
    }
    ctx->pc = 0x2D8A2Cu;
label_2d8a2c:
    // 0x2d8a2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d8a30:
    // 0x2d8a30: 0x24422db8  addiu       $v0, $v0, 0x2DB8
    ctx->pc = 0x2d8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11704));
label_2d8a34:
    // 0x2d8a34: 0xc122c94  jal         func_48B250
label_2d8a38:
    if (ctx->pc == 0x2D8A38u) {
        ctx->pc = 0x2D8A38u;
            // 0x2d8a38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D8A3Cu;
        goto label_2d8a3c;
    }
    ctx->pc = 0x2D8A34u;
    SET_GPR_U32(ctx, 31, 0x2D8A3Cu);
    ctx->pc = 0x2D8A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8A34u;
            // 0x2d8a38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A3Cu; }
        if (ctx->pc != 0x2D8A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A3Cu; }
        if (ctx->pc != 0x2D8A3Cu) { return; }
    }
    ctx->pc = 0x2D8A3Cu;
label_2d8a3c:
    // 0x2d8a3c: 0xc04008c  jal         func_100230
label_2d8a40:
    if (ctx->pc == 0x2D8A40u) {
        ctx->pc = 0x2D8A40u;
            // 0x2d8a40: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x2D8A44u;
        goto label_2d8a44;
    }
    ctx->pc = 0x2D8A3Cu;
    SET_GPR_U32(ctx, 31, 0x2D8A44u);
    ctx->pc = 0x2D8A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8A3Cu;
            // 0x2d8a40: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A44u; }
        if (ctx->pc != 0x2D8A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A44u; }
        if (ctx->pc != 0x2D8A44u) { return; }
    }
    ctx->pc = 0x2D8A44u;
label_2d8a44:
    // 0x2d8a44: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d8a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d8a48:
    // 0x2d8a48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d8a48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d8a4c:
    // 0x2d8a4c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2d8a50:
    if (ctx->pc == 0x2D8A50u) {
        ctx->pc = 0x2D8A50u;
            // 0x2d8a50: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2D8A54u;
        goto label_2d8a54;
    }
    ctx->pc = 0x2D8A4Cu;
    {
        const bool branch_taken_0x2d8a4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D8A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8A4Cu;
            // 0x2d8a50: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a4c) {
            ctx->pc = 0x2D8A5Cu;
            goto label_2d8a5c;
        }
    }
    ctx->pc = 0x2D8A54u;
label_2d8a54:
    // 0x2d8a54: 0xc0400a8  jal         func_1002A0
label_2d8a58:
    if (ctx->pc == 0x2D8A58u) {
        ctx->pc = 0x2D8A58u;
            // 0x2d8a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A5Cu;
        goto label_2d8a5c;
    }
    ctx->pc = 0x2D8A54u;
    SET_GPR_U32(ctx, 31, 0x2D8A5Cu);
    ctx->pc = 0x2D8A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8A54u;
            // 0x2d8a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A5Cu; }
        if (ctx->pc != 0x2D8A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A5Cu; }
        if (ctx->pc != 0x2D8A5Cu) { return; }
    }
    ctx->pc = 0x2D8A5Cu;
label_2d8a5c:
    // 0x2d8a5c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d8a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d8a60:
    // 0x2d8a60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d8a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d8a64:
    // 0x2d8a64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8a68:
    // 0x2d8a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8a6c:
    // 0x2d8a6c: 0x3e00008  jr          $ra
label_2d8a70:
    if (ctx->pc == 0x2D8A70u) {
        ctx->pc = 0x2D8A70u;
            // 0x2d8a70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D8A74u;
        goto label_2d8a74;
    }
    ctx->pc = 0x2D8A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8A6Cu;
            // 0x2d8a70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8A74u;
label_2d8a74:
    // 0x2d8a74: 0x0  nop
    ctx->pc = 0x2d8a74u;
    // NOP
label_2d8a78:
    // 0x2d8a78: 0x0  nop
    ctx->pc = 0x2d8a78u;
    // NOP
label_2d8a7c:
    // 0x2d8a7c: 0x0  nop
    ctx->pc = 0x2d8a7cu;
    // NOP
}
