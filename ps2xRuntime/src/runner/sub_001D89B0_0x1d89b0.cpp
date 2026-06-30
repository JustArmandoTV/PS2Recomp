#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D89B0
// Address: 0x1d89b0 - 0x1d8ad0
void sub_001D89B0_0x1d89b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D89B0_0x1d89b0");
#endif

    switch (ctx->pc) {
        case 0x1d89b0u: goto label_1d89b0;
        case 0x1d89b4u: goto label_1d89b4;
        case 0x1d89b8u: goto label_1d89b8;
        case 0x1d89bcu: goto label_1d89bc;
        case 0x1d89c0u: goto label_1d89c0;
        case 0x1d89c4u: goto label_1d89c4;
        case 0x1d89c8u: goto label_1d89c8;
        case 0x1d89ccu: goto label_1d89cc;
        case 0x1d89d0u: goto label_1d89d0;
        case 0x1d89d4u: goto label_1d89d4;
        case 0x1d89d8u: goto label_1d89d8;
        case 0x1d89dcu: goto label_1d89dc;
        case 0x1d89e0u: goto label_1d89e0;
        case 0x1d89e4u: goto label_1d89e4;
        case 0x1d89e8u: goto label_1d89e8;
        case 0x1d89ecu: goto label_1d89ec;
        case 0x1d89f0u: goto label_1d89f0;
        case 0x1d89f4u: goto label_1d89f4;
        case 0x1d89f8u: goto label_1d89f8;
        case 0x1d89fcu: goto label_1d89fc;
        case 0x1d8a00u: goto label_1d8a00;
        case 0x1d8a04u: goto label_1d8a04;
        case 0x1d8a08u: goto label_1d8a08;
        case 0x1d8a0cu: goto label_1d8a0c;
        case 0x1d8a10u: goto label_1d8a10;
        case 0x1d8a14u: goto label_1d8a14;
        case 0x1d8a18u: goto label_1d8a18;
        case 0x1d8a1cu: goto label_1d8a1c;
        case 0x1d8a20u: goto label_1d8a20;
        case 0x1d8a24u: goto label_1d8a24;
        case 0x1d8a28u: goto label_1d8a28;
        case 0x1d8a2cu: goto label_1d8a2c;
        case 0x1d8a30u: goto label_1d8a30;
        case 0x1d8a34u: goto label_1d8a34;
        case 0x1d8a38u: goto label_1d8a38;
        case 0x1d8a3cu: goto label_1d8a3c;
        case 0x1d8a40u: goto label_1d8a40;
        case 0x1d8a44u: goto label_1d8a44;
        case 0x1d8a48u: goto label_1d8a48;
        case 0x1d8a4cu: goto label_1d8a4c;
        case 0x1d8a50u: goto label_1d8a50;
        case 0x1d8a54u: goto label_1d8a54;
        case 0x1d8a58u: goto label_1d8a58;
        case 0x1d8a5cu: goto label_1d8a5c;
        case 0x1d8a60u: goto label_1d8a60;
        case 0x1d8a64u: goto label_1d8a64;
        case 0x1d8a68u: goto label_1d8a68;
        case 0x1d8a6cu: goto label_1d8a6c;
        case 0x1d8a70u: goto label_1d8a70;
        case 0x1d8a74u: goto label_1d8a74;
        case 0x1d8a78u: goto label_1d8a78;
        case 0x1d8a7cu: goto label_1d8a7c;
        case 0x1d8a80u: goto label_1d8a80;
        case 0x1d8a84u: goto label_1d8a84;
        case 0x1d8a88u: goto label_1d8a88;
        case 0x1d8a8cu: goto label_1d8a8c;
        case 0x1d8a90u: goto label_1d8a90;
        case 0x1d8a94u: goto label_1d8a94;
        case 0x1d8a98u: goto label_1d8a98;
        case 0x1d8a9cu: goto label_1d8a9c;
        case 0x1d8aa0u: goto label_1d8aa0;
        case 0x1d8aa4u: goto label_1d8aa4;
        case 0x1d8aa8u: goto label_1d8aa8;
        case 0x1d8aacu: goto label_1d8aac;
        case 0x1d8ab0u: goto label_1d8ab0;
        case 0x1d8ab4u: goto label_1d8ab4;
        case 0x1d8ab8u: goto label_1d8ab8;
        case 0x1d8abcu: goto label_1d8abc;
        case 0x1d8ac0u: goto label_1d8ac0;
        case 0x1d8ac4u: goto label_1d8ac4;
        case 0x1d8ac8u: goto label_1d8ac8;
        case 0x1d8accu: goto label_1d8acc;
        default: break;
    }

    ctx->pc = 0x1d89b0u;

label_1d89b0:
    // 0x1d89b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d89b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d89b4:
    // 0x1d89b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d89b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1d89b8:
    // 0x1d89b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d89b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d89bc:
    // 0x1d89bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d89bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d89c0:
    // 0x1d89c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d89c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d89c4:
    // 0x1d89c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d89c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d89c8:
    // 0x1d89c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d89c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d89cc:
    // 0x1d89cc: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1d89ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1d89d0:
    // 0x1d89d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d89d4:
    // 0x1d89d4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d89d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1d89d8:
    // 0x1d89d8: 0x8c640ea0  lw          $a0, 0xEA0($v1)
    ctx->pc = 0x1d89d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3744)));
label_1d89dc:
    // 0x1d89dc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1d89e0:
    if (ctx->pc == 0x1D89E0u) {
        ctx->pc = 0x1D89E0u;
            // 0x1d89e0: 0x24720ea0  addiu       $s2, $v1, 0xEA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3744));
        ctx->pc = 0x1D89E4u;
        goto label_1d89e4;
    }
    ctx->pc = 0x1D89DCu;
    {
        const bool branch_taken_0x1d89dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D89E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D89DCu;
            // 0x1d89e0: 0x24720ea0  addiu       $s2, $v1, 0xEA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89dc) {
            ctx->pc = 0x1D89F8u;
            goto label_1d89f8;
        }
    }
    ctx->pc = 0x1D89E4u;
label_1d89e4:
    // 0x1d89e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d89e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d89e8:
    // 0x1d89e8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1d89e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1d89ec:
    // 0x1d89ec: 0x320f809  jalr        $t9
label_1d89f0:
    if (ctx->pc == 0x1D89F0u) {
        ctx->pc = 0x1D89F0u;
            // 0x1d89f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D89F4u;
        goto label_1d89f4;
    }
    ctx->pc = 0x1D89ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D89F4u);
        ctx->pc = 0x1D89F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D89ECu;
            // 0x1d89f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D89F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D89F4u; }
            if (ctx->pc != 0x1D89F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D89F4u;
label_1d89f4:
    // 0x1d89f4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1d89f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1d89f8:
    // 0x1d89f8: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x1d89f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_1d89fc:
    // 0x1d89fc: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x1d89fcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d8a00:
    // 0x1d8a00: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
label_1d8a04:
    if (ctx->pc == 0x1D8A04u) {
        ctx->pc = 0x1D8A04u;
            // 0x1d8a04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A08u;
        goto label_1d8a08;
    }
    ctx->pc = 0x1D8A00u;
    {
        const bool branch_taken_0x1d8a00 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D8A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8A00u;
            // 0x1d8a04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a00) {
            ctx->pc = 0x1D8A18u;
            goto label_1d8a18;
        }
    }
    ctx->pc = 0x1D8A08u;
label_1d8a08:
    // 0x1d8a08: 0x28810004  slti        $at, $a0, 0x4
    ctx->pc = 0x1d8a08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_1d8a0c:
    // 0x1d8a0c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1d8a10:
    if (ctx->pc == 0x1D8A10u) {
        ctx->pc = 0x1D8A14u;
        goto label_1d8a14;
    }
    ctx->pc = 0x1D8A0Cu;
    {
        const bool branch_taken_0x1d8a0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a0c) {
            ctx->pc = 0x1D8A18u;
            goto label_1d8a18;
        }
    }
    ctx->pc = 0x1D8A14u;
label_1d8a14:
    // 0x1d8a14: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1d8a14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d8a18:
    // 0x1d8a18: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1d8a1c:
    if (ctx->pc == 0x1D8A1Cu) {
        ctx->pc = 0x1D8A20u;
        goto label_1d8a20;
    }
    ctx->pc = 0x1D8A18u;
    {
        const bool branch_taken_0x1d8a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a18) {
            ctx->pc = 0x1D8A58u;
            goto label_1d8a58;
        }
    }
    ctx->pc = 0x1D8A20u;
label_1d8a20:
    // 0x1d8a20: 0x822311aa  lb          $v1, 0x11AA($s1)
    ctx->pc = 0x1d8a20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_1d8a24:
    // 0x1d8a24: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x1d8a24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1d8a28:
    // 0x1d8a28: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d8a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1d8a2c:
    // 0x1d8a2c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1d8a30:
    if (ctx->pc == 0x1D8A30u) {
        ctx->pc = 0x1D8A34u;
        goto label_1d8a34;
    }
    ctx->pc = 0x1D8A2Cu;
    {
        const bool branch_taken_0x1d8a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a2c) {
            ctx->pc = 0x1D8A4Cu;
            goto label_1d8a4c;
        }
    }
    ctx->pc = 0x1D8A34u;
label_1d8a34:
    // 0x1d8a34: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1d8a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1d8a38:
    // 0x1d8a38: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x1d8a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_1d8a3c:
    // 0x1d8a3c: 0x8063008d  lb          $v1, 0x8D($v1)
    ctx->pc = 0x1d8a3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 141)));
label_1d8a40:
    // 0x1d8a40: 0x601827  not         $v1, $v1
    ctx->pc = 0x1d8a40u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_1d8a44:
    // 0x1d8a44: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d8a44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1d8a48:
    // 0x1d8a48: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d8a48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1d8a4c:
    // 0x1d8a4c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1d8a50:
    if (ctx->pc == 0x1D8A50u) {
        ctx->pc = 0x1D8A54u;
        goto label_1d8a54;
    }
    ctx->pc = 0x1D8A4Cu;
    {
        const bool branch_taken_0x1d8a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a4c) {
            ctx->pc = 0x1D8A58u;
            goto label_1d8a58;
        }
    }
    ctx->pc = 0x1D8A54u;
label_1d8a54:
    // 0x1d8a54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8a58:
    // 0x1d8a58: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_1d8a5c:
    if (ctx->pc == 0x1D8A5Cu) {
        ctx->pc = 0x1D8A60u;
        goto label_1d8a60;
    }
    ctx->pc = 0x1D8A58u;
    {
        const bool branch_taken_0x1d8a58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a58) {
            ctx->pc = 0x1D8A6Cu;
            goto label_1d8a6c;
        }
    }
    ctx->pc = 0x1D8A60u;
label_1d8a60:
    // 0x1d8a60: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d8a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d8a64:
    // 0x1d8a64: 0x54830012  bnel        $a0, $v1, . + 4 + (0x12 << 2)
label_1d8a68:
    if (ctx->pc == 0x1D8A68u) {
        ctx->pc = 0x1D8A68u;
            // 0x1d8a68: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1D8A6Cu;
        goto label_1d8a6c;
    }
    ctx->pc = 0x1D8A64u;
    {
        const bool branch_taken_0x1d8a64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d8a64) {
            ctx->pc = 0x1D8A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8A64u;
            // 0x1d8a68: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8AB0u;
            goto label_1d8ab0;
        }
    }
    ctx->pc = 0x1D8A6Cu;
label_1d8a6c:
    // 0x1d8a6c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1d8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_1d8a70:
    // 0x1d8a70: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1d8a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d8a74:
    // 0x1d8a74: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x1d8a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_1d8a78:
    // 0x1d8a78: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x1d8a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_1d8a7c:
    // 0x1d8a7c: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
label_1d8a80:
    if (ctx->pc == 0x1D8A80u) {
        ctx->pc = 0x1D8A84u;
        goto label_1d8a84;
    }
    ctx->pc = 0x1D8A7Cu;
    {
        const bool branch_taken_0x1d8a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d8a7c) {
            ctx->pc = 0x1D8AACu;
            goto label_1d8aac;
        }
    }
    ctx->pc = 0x1D8A84u;
label_1d8a84:
    // 0x1d8a84: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1d8a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1d8a88:
    // 0x1d8a88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d8a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d8a8c:
    // 0x1d8a8c: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_1d8a90:
    if (ctx->pc == 0x1D8A90u) {
        ctx->pc = 0x1D8A94u;
        goto label_1d8a94;
    }
    ctx->pc = 0x1D8A8Cu;
    {
        const bool branch_taken_0x1d8a8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d8a8c) {
            ctx->pc = 0x1D8AACu;
            goto label_1d8aac;
        }
    }
    ctx->pc = 0x1D8A94u;
label_1d8a94:
    // 0x1d8a94: 0xc072b78  jal         func_1CADE0
label_1d8a98:
    if (ctx->pc == 0x1D8A98u) {
        ctx->pc = 0x1D8A98u;
            // 0x1d8a98: 0x92240084  lbu         $a0, 0x84($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->pc = 0x1D8A9Cu;
        goto label_1d8a9c;
    }
    ctx->pc = 0x1D8A94u;
    SET_GPR_U32(ctx, 31, 0x1D8A9Cu);
    ctx->pc = 0x1D8A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8A94u;
            // 0x1d8a98: 0x92240084  lbu         $a0, 0x84($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A9Cu; }
        if (ctx->pc != 0x1D8A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A9Cu; }
        if (ctx->pc != 0x1D8A9Cu) { return; }
    }
    ctx->pc = 0x1D8A9Cu;
label_1d8a9c:
    // 0x1d8a9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d8aa0:
    if (ctx->pc == 0x1D8AA0u) {
        ctx->pc = 0x1D8AA4u;
        goto label_1d8aa4;
    }
    ctx->pc = 0x1D8A9Cu;
    {
        const bool branch_taken_0x1d8a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a9c) {
            ctx->pc = 0x1D8AACu;
            goto label_1d8aac;
        }
    }
    ctx->pc = 0x1D8AA4u;
label_1d8aa4:
    // 0x1d8aa4: 0xc072aaa  jal         func_1CAAA8
label_1d8aa8:
    if (ctx->pc == 0x1D8AA8u) {
        ctx->pc = 0x1D8AA8u;
            // 0x1d8aa8: 0x92240084  lbu         $a0, 0x84($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->pc = 0x1D8AACu;
        goto label_1d8aac;
    }
    ctx->pc = 0x1D8AA4u;
    SET_GPR_U32(ctx, 31, 0x1D8AACu);
    ctx->pc = 0x1D8AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8AA4u;
            // 0x1d8aa8: 0x92240084  lbu         $a0, 0x84($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AACu; }
        if (ctx->pc != 0x1D8AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AACu; }
        if (ctx->pc != 0x1D8AACu) { return; }
    }
    ctx->pc = 0x1D8AACu;
label_1d8aac:
    // 0x1d8aac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d8aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d8ab0:
    // 0x1d8ab0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d8ab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d8ab4:
    // 0x1d8ab4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8ab8:
    // 0x1d8ab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8abc:
    // 0x1d8abc: 0x3e00008  jr          $ra
label_1d8ac0:
    if (ctx->pc == 0x1D8AC0u) {
        ctx->pc = 0x1D8AC0u;
            // 0x1d8ac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1D8AC4u;
        goto label_1d8ac4;
    }
    ctx->pc = 0x1D8ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8ABCu;
            // 0x1d8ac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8AC4u;
label_1d8ac4:
    // 0x1d8ac4: 0x0  nop
    ctx->pc = 0x1d8ac4u;
    // NOP
label_1d8ac8:
    // 0x1d8ac8: 0x0  nop
    ctx->pc = 0x1d8ac8u;
    // NOP
label_1d8acc:
    // 0x1d8acc: 0x0  nop
    ctx->pc = 0x1d8accu;
    // NOP
}
