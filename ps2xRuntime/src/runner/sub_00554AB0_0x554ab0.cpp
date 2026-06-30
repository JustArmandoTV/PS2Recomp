#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00554AB0
// Address: 0x554ab0 - 0x554e30
void sub_00554AB0_0x554ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00554AB0_0x554ab0");
#endif

    switch (ctx->pc) {
        case 0x554ab0u: goto label_554ab0;
        case 0x554ab4u: goto label_554ab4;
        case 0x554ab8u: goto label_554ab8;
        case 0x554abcu: goto label_554abc;
        case 0x554ac0u: goto label_554ac0;
        case 0x554ac4u: goto label_554ac4;
        case 0x554ac8u: goto label_554ac8;
        case 0x554accu: goto label_554acc;
        case 0x554ad0u: goto label_554ad0;
        case 0x554ad4u: goto label_554ad4;
        case 0x554ad8u: goto label_554ad8;
        case 0x554adcu: goto label_554adc;
        case 0x554ae0u: goto label_554ae0;
        case 0x554ae4u: goto label_554ae4;
        case 0x554ae8u: goto label_554ae8;
        case 0x554aecu: goto label_554aec;
        case 0x554af0u: goto label_554af0;
        case 0x554af4u: goto label_554af4;
        case 0x554af8u: goto label_554af8;
        case 0x554afcu: goto label_554afc;
        case 0x554b00u: goto label_554b00;
        case 0x554b04u: goto label_554b04;
        case 0x554b08u: goto label_554b08;
        case 0x554b0cu: goto label_554b0c;
        case 0x554b10u: goto label_554b10;
        case 0x554b14u: goto label_554b14;
        case 0x554b18u: goto label_554b18;
        case 0x554b1cu: goto label_554b1c;
        case 0x554b20u: goto label_554b20;
        case 0x554b24u: goto label_554b24;
        case 0x554b28u: goto label_554b28;
        case 0x554b2cu: goto label_554b2c;
        case 0x554b30u: goto label_554b30;
        case 0x554b34u: goto label_554b34;
        case 0x554b38u: goto label_554b38;
        case 0x554b3cu: goto label_554b3c;
        case 0x554b40u: goto label_554b40;
        case 0x554b44u: goto label_554b44;
        case 0x554b48u: goto label_554b48;
        case 0x554b4cu: goto label_554b4c;
        case 0x554b50u: goto label_554b50;
        case 0x554b54u: goto label_554b54;
        case 0x554b58u: goto label_554b58;
        case 0x554b5cu: goto label_554b5c;
        case 0x554b60u: goto label_554b60;
        case 0x554b64u: goto label_554b64;
        case 0x554b68u: goto label_554b68;
        case 0x554b6cu: goto label_554b6c;
        case 0x554b70u: goto label_554b70;
        case 0x554b74u: goto label_554b74;
        case 0x554b78u: goto label_554b78;
        case 0x554b7cu: goto label_554b7c;
        case 0x554b80u: goto label_554b80;
        case 0x554b84u: goto label_554b84;
        case 0x554b88u: goto label_554b88;
        case 0x554b8cu: goto label_554b8c;
        case 0x554b90u: goto label_554b90;
        case 0x554b94u: goto label_554b94;
        case 0x554b98u: goto label_554b98;
        case 0x554b9cu: goto label_554b9c;
        case 0x554ba0u: goto label_554ba0;
        case 0x554ba4u: goto label_554ba4;
        case 0x554ba8u: goto label_554ba8;
        case 0x554bacu: goto label_554bac;
        case 0x554bb0u: goto label_554bb0;
        case 0x554bb4u: goto label_554bb4;
        case 0x554bb8u: goto label_554bb8;
        case 0x554bbcu: goto label_554bbc;
        case 0x554bc0u: goto label_554bc0;
        case 0x554bc4u: goto label_554bc4;
        case 0x554bc8u: goto label_554bc8;
        case 0x554bccu: goto label_554bcc;
        case 0x554bd0u: goto label_554bd0;
        case 0x554bd4u: goto label_554bd4;
        case 0x554bd8u: goto label_554bd8;
        case 0x554bdcu: goto label_554bdc;
        case 0x554be0u: goto label_554be0;
        case 0x554be4u: goto label_554be4;
        case 0x554be8u: goto label_554be8;
        case 0x554becu: goto label_554bec;
        case 0x554bf0u: goto label_554bf0;
        case 0x554bf4u: goto label_554bf4;
        case 0x554bf8u: goto label_554bf8;
        case 0x554bfcu: goto label_554bfc;
        case 0x554c00u: goto label_554c00;
        case 0x554c04u: goto label_554c04;
        case 0x554c08u: goto label_554c08;
        case 0x554c0cu: goto label_554c0c;
        case 0x554c10u: goto label_554c10;
        case 0x554c14u: goto label_554c14;
        case 0x554c18u: goto label_554c18;
        case 0x554c1cu: goto label_554c1c;
        case 0x554c20u: goto label_554c20;
        case 0x554c24u: goto label_554c24;
        case 0x554c28u: goto label_554c28;
        case 0x554c2cu: goto label_554c2c;
        case 0x554c30u: goto label_554c30;
        case 0x554c34u: goto label_554c34;
        case 0x554c38u: goto label_554c38;
        case 0x554c3cu: goto label_554c3c;
        case 0x554c40u: goto label_554c40;
        case 0x554c44u: goto label_554c44;
        case 0x554c48u: goto label_554c48;
        case 0x554c4cu: goto label_554c4c;
        case 0x554c50u: goto label_554c50;
        case 0x554c54u: goto label_554c54;
        case 0x554c58u: goto label_554c58;
        case 0x554c5cu: goto label_554c5c;
        case 0x554c60u: goto label_554c60;
        case 0x554c64u: goto label_554c64;
        case 0x554c68u: goto label_554c68;
        case 0x554c6cu: goto label_554c6c;
        case 0x554c70u: goto label_554c70;
        case 0x554c74u: goto label_554c74;
        case 0x554c78u: goto label_554c78;
        case 0x554c7cu: goto label_554c7c;
        case 0x554c80u: goto label_554c80;
        case 0x554c84u: goto label_554c84;
        case 0x554c88u: goto label_554c88;
        case 0x554c8cu: goto label_554c8c;
        case 0x554c90u: goto label_554c90;
        case 0x554c94u: goto label_554c94;
        case 0x554c98u: goto label_554c98;
        case 0x554c9cu: goto label_554c9c;
        case 0x554ca0u: goto label_554ca0;
        case 0x554ca4u: goto label_554ca4;
        case 0x554ca8u: goto label_554ca8;
        case 0x554cacu: goto label_554cac;
        case 0x554cb0u: goto label_554cb0;
        case 0x554cb4u: goto label_554cb4;
        case 0x554cb8u: goto label_554cb8;
        case 0x554cbcu: goto label_554cbc;
        case 0x554cc0u: goto label_554cc0;
        case 0x554cc4u: goto label_554cc4;
        case 0x554cc8u: goto label_554cc8;
        case 0x554cccu: goto label_554ccc;
        case 0x554cd0u: goto label_554cd0;
        case 0x554cd4u: goto label_554cd4;
        case 0x554cd8u: goto label_554cd8;
        case 0x554cdcu: goto label_554cdc;
        case 0x554ce0u: goto label_554ce0;
        case 0x554ce4u: goto label_554ce4;
        case 0x554ce8u: goto label_554ce8;
        case 0x554cecu: goto label_554cec;
        case 0x554cf0u: goto label_554cf0;
        case 0x554cf4u: goto label_554cf4;
        case 0x554cf8u: goto label_554cf8;
        case 0x554cfcu: goto label_554cfc;
        case 0x554d00u: goto label_554d00;
        case 0x554d04u: goto label_554d04;
        case 0x554d08u: goto label_554d08;
        case 0x554d0cu: goto label_554d0c;
        case 0x554d10u: goto label_554d10;
        case 0x554d14u: goto label_554d14;
        case 0x554d18u: goto label_554d18;
        case 0x554d1cu: goto label_554d1c;
        case 0x554d20u: goto label_554d20;
        case 0x554d24u: goto label_554d24;
        case 0x554d28u: goto label_554d28;
        case 0x554d2cu: goto label_554d2c;
        case 0x554d30u: goto label_554d30;
        case 0x554d34u: goto label_554d34;
        case 0x554d38u: goto label_554d38;
        case 0x554d3cu: goto label_554d3c;
        case 0x554d40u: goto label_554d40;
        case 0x554d44u: goto label_554d44;
        case 0x554d48u: goto label_554d48;
        case 0x554d4cu: goto label_554d4c;
        case 0x554d50u: goto label_554d50;
        case 0x554d54u: goto label_554d54;
        case 0x554d58u: goto label_554d58;
        case 0x554d5cu: goto label_554d5c;
        case 0x554d60u: goto label_554d60;
        case 0x554d64u: goto label_554d64;
        case 0x554d68u: goto label_554d68;
        case 0x554d6cu: goto label_554d6c;
        case 0x554d70u: goto label_554d70;
        case 0x554d74u: goto label_554d74;
        case 0x554d78u: goto label_554d78;
        case 0x554d7cu: goto label_554d7c;
        case 0x554d80u: goto label_554d80;
        case 0x554d84u: goto label_554d84;
        case 0x554d88u: goto label_554d88;
        case 0x554d8cu: goto label_554d8c;
        case 0x554d90u: goto label_554d90;
        case 0x554d94u: goto label_554d94;
        case 0x554d98u: goto label_554d98;
        case 0x554d9cu: goto label_554d9c;
        case 0x554da0u: goto label_554da0;
        case 0x554da4u: goto label_554da4;
        case 0x554da8u: goto label_554da8;
        case 0x554dacu: goto label_554dac;
        case 0x554db0u: goto label_554db0;
        case 0x554db4u: goto label_554db4;
        case 0x554db8u: goto label_554db8;
        case 0x554dbcu: goto label_554dbc;
        case 0x554dc0u: goto label_554dc0;
        case 0x554dc4u: goto label_554dc4;
        case 0x554dc8u: goto label_554dc8;
        case 0x554dccu: goto label_554dcc;
        case 0x554dd0u: goto label_554dd0;
        case 0x554dd4u: goto label_554dd4;
        case 0x554dd8u: goto label_554dd8;
        case 0x554ddcu: goto label_554ddc;
        case 0x554de0u: goto label_554de0;
        case 0x554de4u: goto label_554de4;
        case 0x554de8u: goto label_554de8;
        case 0x554decu: goto label_554dec;
        case 0x554df0u: goto label_554df0;
        case 0x554df4u: goto label_554df4;
        case 0x554df8u: goto label_554df8;
        case 0x554dfcu: goto label_554dfc;
        case 0x554e00u: goto label_554e00;
        case 0x554e04u: goto label_554e04;
        case 0x554e08u: goto label_554e08;
        case 0x554e0cu: goto label_554e0c;
        case 0x554e10u: goto label_554e10;
        case 0x554e14u: goto label_554e14;
        case 0x554e18u: goto label_554e18;
        case 0x554e1cu: goto label_554e1c;
        case 0x554e20u: goto label_554e20;
        case 0x554e24u: goto label_554e24;
        case 0x554e28u: goto label_554e28;
        case 0x554e2cu: goto label_554e2c;
        default: break;
    }

    ctx->pc = 0x554ab0u;

label_554ab0:
    // 0x554ab0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x554ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_554ab4:
    // 0x554ab4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x554ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_554ab8:
    // 0x554ab8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x554ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_554abc:
    // 0x554abc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x554abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_554ac0:
    // 0x554ac0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x554ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_554ac4:
    // 0x554ac4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x554ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_554ac8:
    // 0x554ac8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x554ac8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_554acc:
    // 0x554acc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x554accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_554ad0:
    // 0x554ad0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x554ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_554ad4:
    // 0x554ad4: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x554ad4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_554ad8:
    // 0x554ad8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x554ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_554adc:
    // 0x554adc: 0x2673f430  addiu       $s3, $s3, -0xBD0
    ctx->pc = 0x554adcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964272));
label_554ae0:
    // 0x554ae0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x554ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_554ae4:
    // 0x554ae4: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x554ae4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_554ae8:
    // 0x554ae8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x554ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_554aec:
    // 0x554aec: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x554aecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_554af0:
    // 0x554af0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x554af0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_554af4:
    // 0x554af4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x554af4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_554af8:
    // 0x554af8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x554af8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_554afc:
    // 0x554afc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x554afcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_554b00:
    // 0x554b00: 0x8c5489e0  lw          $s4, -0x7620($v0)
    ctx->pc = 0x554b00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_554b04:
    // 0x554b04: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x554b04u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
label_554b08:
    // 0x554b08: 0x9484007e  lhu         $a0, 0x7E($a0)
    ctx->pc = 0x554b08u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 126)));
label_554b0c:
    // 0x554b0c: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x554b0cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
label_554b10:
    // 0x554b10: 0x9472dbf8  lhu         $s2, -0x2408($v1)
    ctx->pc = 0x554b10u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294958072)));
label_554b14:
    // 0x554b14: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x554b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_554b18:
    // 0x554b18: 0x9451dbfa  lhu         $s1, -0x2406($v0)
    ctx->pc = 0x554b18u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958074)));
label_554b1c:
    // 0x554b1c: 0x28810100  slti        $at, $a0, 0x100
    ctx->pc = 0x554b1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
label_554b20:
    // 0x554b20: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_554b24:
    if (ctx->pc == 0x554B24u) {
        ctx->pc = 0x554B24u;
            // 0x554b24: 0x4600c586  mov.s       $f22, $f24 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x554B28u;
        goto label_554b28;
    }
    ctx->pc = 0x554B20u;
    {
        const bool branch_taken_0x554b20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x554B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554B20u;
            // 0x554b24: 0x4600c586  mov.s       $f22, $f24 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x554b20) {
            ctx->pc = 0x554B30u;
            goto label_554b30;
        }
    }
    ctx->pc = 0x554B28u;
label_554b28:
    // 0x554b28: 0x10000008  b           . + 4 + (0x8 << 2)
label_554b2c:
    if (ctx->pc == 0x554B2Cu) {
        ctx->pc = 0x554B2Cu;
            // 0x554b2c: 0x309500ff  andi        $s5, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x554B30u;
        goto label_554b30;
    }
    ctx->pc = 0x554B28u;
    {
        const bool branch_taken_0x554b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554B28u;
            // 0x554b2c: 0x309500ff  andi        $s5, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x554b28) {
            ctx->pc = 0x554B4Cu;
            goto label_554b4c;
        }
    }
    ctx->pc = 0x554B30u;
label_554b30:
    // 0x554b30: 0x28810200  slti        $at, $a0, 0x200
    ctx->pc = 0x554b30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)512) ? 1 : 0);
label_554b34:
    // 0x554b34: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
label_554b38:
    if (ctx->pc == 0x554B38u) {
        ctx->pc = 0x554B38u;
            // 0x554b38: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x554B3Cu;
        goto label_554b3c;
    }
    ctx->pc = 0x554B34u;
    {
        const bool branch_taken_0x554b34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x554b34) {
            ctx->pc = 0x554B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x554B34u;
            // 0x554b38: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x554B50u;
            goto label_554b50;
        }
    }
    ctx->pc = 0x554B3Cu;
label_554b3c:
    // 0x554b3c: 0x2482ff00  addiu       $v0, $a0, -0x100
    ctx->pc = 0x554b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
label_554b40:
    // 0x554b40: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x554b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_554b44:
    // 0x554b44: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x554b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_554b48:
    // 0x554b48: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x554b48u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_554b4c:
    // 0x554b4c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x554b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_554b50:
    // 0x554b50: 0xc6750008  lwc1        $f21, 0x8($s3)
    ctx->pc = 0x554b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_554b54:
    // 0x554b54: 0xc674000c  lwc1        $f20, 0xC($s3)
    ctx->pc = 0x554b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_554b58:
    // 0x554b58: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x554b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_554b5c:
    // 0x554b5c: 0xc0506ac  jal         func_141AB0
label_554b60:
    if (ctx->pc == 0x554B60u) {
        ctx->pc = 0x554B60u;
            // 0x554b60: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x554B64u;
        goto label_554b64;
    }
    ctx->pc = 0x554B5Cu;
    SET_GPR_U32(ctx, 31, 0x554B64u);
    ctx->pc = 0x554B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x554B5Cu;
            // 0x554b60: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554B64u; }
        if (ctx->pc != 0x554B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554B64u; }
        if (ctx->pc != 0x554B64u) { return; }
    }
    ctx->pc = 0x554B64u;
label_554b64:
    // 0x554b64: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x554b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_554b68:
    // 0x554b68: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x554b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_554b6c:
    // 0x554b6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x554b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_554b70:
    // 0x554b70: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x554b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_554b74:
    // 0x554b74: 0x320f809  jalr        $t9
label_554b78:
    if (ctx->pc == 0x554B78u) {
        ctx->pc = 0x554B78u;
            // 0x554b78: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x554B7Cu;
        goto label_554b7c;
    }
    ctx->pc = 0x554B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x554B7Cu);
        ctx->pc = 0x554B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554B74u;
            // 0x554b78: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x554B7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x554B7Cu; }
            if (ctx->pc != 0x554B7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x554B7Cu;
label_554b7c:
    // 0x554b7c: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x554b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_554b80:
    // 0x554b80: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x554b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_554b84:
    // 0x554b84: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x554b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_554b88:
    // 0x554b88: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x554b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_554b8c:
    // 0x554b8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x554b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_554b90:
    // 0x554b90: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x554b90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_554b94:
    // 0x554b94: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x554b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_554b98:
    // 0x554b98: 0x62a825  or          $s5, $v1, $v0
    ctx->pc = 0x554b98u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554b9c:
    // 0x554b9c: 0xc6790018  lwc1        $f25, 0x18($s3)
    ctx->pc = 0x554b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_554ba0:
    // 0x554ba0: 0x4614bd00  add.s       $f20, $f23, $f20
    ctx->pc = 0x554ba0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
label_554ba4:
    // 0x554ba4: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_554ba8:
    if (ctx->pc == 0x554BA8u) {
        ctx->pc = 0x554BA8u;
            // 0x554ba8: 0x46190541  sub.s       $f21, $f0, $f25 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
        ctx->pc = 0x554BACu;
        goto label_554bac;
    }
    ctx->pc = 0x554BA4u;
    {
        const bool branch_taken_0x554ba4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x554BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554BA4u;
            // 0x554ba8: 0x46190541  sub.s       $f21, $f0, $f25 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x554ba4) {
            ctx->pc = 0x554BB8u;
            goto label_554bb8;
        }
    }
    ctx->pc = 0x554BACu;
label_554bac:
    // 0x554bac: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x554bacu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554bb0:
    // 0x554bb0: 0x10000008  b           . + 4 + (0x8 << 2)
label_554bb4:
    if (ctx->pc == 0x554BB4u) {
        ctx->pc = 0x554BB4u;
            // 0x554bb4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x554BB8u;
        goto label_554bb8;
    }
    ctx->pc = 0x554BB0u;
    {
        const bool branch_taken_0x554bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554BB0u;
            // 0x554bb4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554bb0) {
            ctx->pc = 0x554BD4u;
            goto label_554bd4;
        }
    }
    ctx->pc = 0x554BB8u;
label_554bb8:
    // 0x554bb8: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x554bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_554bbc:
    // 0x554bbc: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x554bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_554bc0:
    // 0x554bc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554bc4:
    // 0x554bc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554bc8:
    // 0x554bc8: 0x0  nop
    ctx->pc = 0x554bc8u;
    // NOP
label_554bcc:
    // 0x554bcc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x554bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_554bd0:
    // 0x554bd0: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x554bd0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_554bd4:
    // 0x554bd4: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_554bd8:
    if (ctx->pc == 0x554BD8u) {
        ctx->pc = 0x554BD8u;
            // 0x554bd8: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x554BDCu;
        goto label_554bdc;
    }
    ctx->pc = 0x554BD4u;
    {
        const bool branch_taken_0x554bd4 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x554bd4) {
            ctx->pc = 0x554BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x554BD4u;
            // 0x554bd8: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x554BE8u;
            goto label_554be8;
        }
    }
    ctx->pc = 0x554BDCu;
label_554bdc:
    // 0x554bdc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x554bdcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554be0:
    // 0x554be0: 0x10000007  b           . + 4 + (0x7 << 2)
label_554be4:
    if (ctx->pc == 0x554BE4u) {
        ctx->pc = 0x554BE4u;
            // 0x554be4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x554BE8u;
        goto label_554be8;
    }
    ctx->pc = 0x554BE0u;
    {
        const bool branch_taken_0x554be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554BE0u;
            // 0x554be4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554be0) {
            ctx->pc = 0x554C00u;
            goto label_554c00;
        }
    }
    ctx->pc = 0x554BE8u;
label_554be8:
    // 0x554be8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x554be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_554bec:
    // 0x554bec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554bf0:
    // 0x554bf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554bf4:
    // 0x554bf4: 0x0  nop
    ctx->pc = 0x554bf4u;
    // NOP
label_554bf8:
    // 0x554bf8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x554bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_554bfc:
    // 0x554bfc: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x554bfcu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_554c00:
    // 0x554c00: 0x4619c380  add.s       $f14, $f24, $f25
    ctx->pc = 0x554c00u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[25]);
label_554c04:
    // 0x554c04: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x554c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_554c08:
    // 0x554c08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x554c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_554c0c:
    // 0x554c0c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x554c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_554c10:
    // 0x554c10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x554c10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_554c14:
    // 0x554c14: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x554c14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_554c18:
    // 0x554c18: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x554c18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_554c1c:
    // 0x554c1c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x554c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_554c20:
    // 0x554c20: 0xc0bc284  jal         func_2F0A10
label_554c24:
    if (ctx->pc == 0x554C24u) {
        ctx->pc = 0x554C24u;
            // 0x554c24: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x554C28u;
        goto label_554c28;
    }
    ctx->pc = 0x554C20u;
    SET_GPR_U32(ctx, 31, 0x554C28u);
    ctx->pc = 0x554C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x554C20u;
            // 0x554c24: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554C28u; }
        if (ctx->pc != 0x554C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554C28u; }
        if (ctx->pc != 0x554C28u) { return; }
    }
    ctx->pc = 0x554C28u;
label_554c28:
    // 0x554c28: 0x4619b580  add.s       $f22, $f22, $f25
    ctx->pc = 0x554c28u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[25]);
label_554c2c:
    // 0x554c2c: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_554c30:
    if (ctx->pc == 0x554C30u) {
        ctx->pc = 0x554C30u;
            // 0x554c30: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x554C34u;
        goto label_554c34;
    }
    ctx->pc = 0x554C2Cu;
    {
        const bool branch_taken_0x554c2c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x554C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554C2Cu;
            // 0x554c30: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x554c2c) {
            ctx->pc = 0x554C40u;
            goto label_554c40;
        }
    }
    ctx->pc = 0x554C34u;
label_554c34:
    // 0x554c34: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x554c34u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554c38:
    // 0x554c38: 0x10000008  b           . + 4 + (0x8 << 2)
label_554c3c:
    if (ctx->pc == 0x554C3Cu) {
        ctx->pc = 0x554C3Cu;
            // 0x554c3c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x554C40u;
        goto label_554c40;
    }
    ctx->pc = 0x554C38u;
    {
        const bool branch_taken_0x554c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554C38u;
            // 0x554c3c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554c38) {
            ctx->pc = 0x554C5Cu;
            goto label_554c5c;
        }
    }
    ctx->pc = 0x554C40u;
label_554c40:
    // 0x554c40: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x554c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_554c44:
    // 0x554c44: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x554c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_554c48:
    // 0x554c48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554c4c:
    // 0x554c4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554c4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554c50:
    // 0x554c50: 0x0  nop
    ctx->pc = 0x554c50u;
    // NOP
label_554c54:
    // 0x554c54: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x554c54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_554c58:
    // 0x554c58: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x554c58u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_554c5c:
    // 0x554c5c: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_554c60:
    if (ctx->pc == 0x554C60u) {
        ctx->pc = 0x554C60u;
            // 0x554c60: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x554C64u;
        goto label_554c64;
    }
    ctx->pc = 0x554C5Cu;
    {
        const bool branch_taken_0x554c5c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x554c5c) {
            ctx->pc = 0x554C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x554C5Cu;
            // 0x554c60: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x554C70u;
            goto label_554c70;
        }
    }
    ctx->pc = 0x554C64u;
label_554c64:
    // 0x554c64: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x554c64u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554c68:
    // 0x554c68: 0x10000007  b           . + 4 + (0x7 << 2)
label_554c6c:
    if (ctx->pc == 0x554C6Cu) {
        ctx->pc = 0x554C6Cu;
            // 0x554c6c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x554C70u;
        goto label_554c70;
    }
    ctx->pc = 0x554C68u;
    {
        const bool branch_taken_0x554c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554C68u;
            // 0x554c6c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554c68) {
            ctx->pc = 0x554C88u;
            goto label_554c88;
        }
    }
    ctx->pc = 0x554C70u;
label_554c70:
    // 0x554c70: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x554c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_554c74:
    // 0x554c74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554c78:
    // 0x554c78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554c7c:
    // 0x554c7c: 0x0  nop
    ctx->pc = 0x554c7cu;
    // NOP
label_554c80:
    // 0x554c80: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x554c80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_554c84:
    // 0x554c84: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x554c84u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_554c88:
    // 0x554c88: 0x4615b380  add.s       $f14, $f22, $f21
    ctx->pc = 0x554c88u;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
label_554c8c:
    // 0x554c8c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x554c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_554c90:
    // 0x554c90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x554c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_554c94:
    // 0x554c94: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x554c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_554c98:
    // 0x554c98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x554c98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_554c9c:
    // 0x554c9c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x554c9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_554ca0:
    // 0x554ca0: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x554ca0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_554ca4:
    // 0x554ca4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x554ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_554ca8:
    // 0x554ca8: 0xc0bc284  jal         func_2F0A10
label_554cac:
    if (ctx->pc == 0x554CACu) {
        ctx->pc = 0x554CACu;
            // 0x554cac: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x554CB0u;
        goto label_554cb0;
    }
    ctx->pc = 0x554CA8u;
    SET_GPR_U32(ctx, 31, 0x554CB0u);
    ctx->pc = 0x554CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x554CA8u;
            // 0x554cac: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554CB0u; }
        if (ctx->pc != 0x554CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554CB0u; }
        if (ctx->pc != 0x554CB0u) { return; }
    }
    ctx->pc = 0x554CB0u;
label_554cb0:
    // 0x554cb0: 0x4615b580  add.s       $f22, $f22, $f21
    ctx->pc = 0x554cb0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
label_554cb4:
    // 0x554cb4: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x554cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_554cb8:
    // 0x554cb8: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_554cbc:
    if (ctx->pc == 0x554CBCu) {
        ctx->pc = 0x554CBCu;
            // 0x554cbc: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->pc = 0x554CC0u;
        goto label_554cc0;
    }
    ctx->pc = 0x554CB8u;
    {
        const bool branch_taken_0x554cb8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x554CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554CB8u;
            // 0x554cbc: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x554cb8) {
            ctx->pc = 0x554CCCu;
            goto label_554ccc;
        }
    }
    ctx->pc = 0x554CC0u;
label_554cc0:
    // 0x554cc0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x554cc0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554cc4:
    // 0x554cc4: 0x10000008  b           . + 4 + (0x8 << 2)
label_554cc8:
    if (ctx->pc == 0x554CC8u) {
        ctx->pc = 0x554CC8u;
            // 0x554cc8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x554CCCu;
        goto label_554ccc;
    }
    ctx->pc = 0x554CC4u;
    {
        const bool branch_taken_0x554cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554CC4u;
            // 0x554cc8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554cc4) {
            ctx->pc = 0x554CE8u;
            goto label_554ce8;
        }
    }
    ctx->pc = 0x554CCCu;
label_554ccc:
    // 0x554ccc: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x554cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_554cd0:
    // 0x554cd0: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x554cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_554cd4:
    // 0x554cd4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554cd8:
    // 0x554cd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554cd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554cdc:
    // 0x554cdc: 0x0  nop
    ctx->pc = 0x554cdcu;
    // NOP
label_554ce0:
    // 0x554ce0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x554ce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_554ce4:
    // 0x554ce4: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x554ce4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_554ce8:
    // 0x554ce8: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_554cec:
    if (ctx->pc == 0x554CECu) {
        ctx->pc = 0x554CECu;
            // 0x554cec: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x554CF0u;
        goto label_554cf0;
    }
    ctx->pc = 0x554CE8u;
    {
        const bool branch_taken_0x554ce8 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x554ce8) {
            ctx->pc = 0x554CECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x554CE8u;
            // 0x554cec: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x554CFCu;
            goto label_554cfc;
        }
    }
    ctx->pc = 0x554CF0u;
label_554cf0:
    // 0x554cf0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x554cf0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554cf4:
    // 0x554cf4: 0x10000007  b           . + 4 + (0x7 << 2)
label_554cf8:
    if (ctx->pc == 0x554CF8u) {
        ctx->pc = 0x554CF8u;
            // 0x554cf8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x554CFCu;
        goto label_554cfc;
    }
    ctx->pc = 0x554CF4u;
    {
        const bool branch_taken_0x554cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554CF4u;
            // 0x554cf8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554cf4) {
            ctx->pc = 0x554D14u;
            goto label_554d14;
        }
    }
    ctx->pc = 0x554CFCu;
label_554cfc:
    // 0x554cfc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x554cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_554d00:
    // 0x554d00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554d04:
    // 0x554d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554d08:
    // 0x554d08: 0x0  nop
    ctx->pc = 0x554d08u;
    // NOP
label_554d0c:
    // 0x554d0c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x554d0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_554d10:
    // 0x554d10: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x554d10u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_554d14:
    // 0x554d14: 0x4601b380  add.s       $f14, $f22, $f1
    ctx->pc = 0x554d14u;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
label_554d18:
    // 0x554d18: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x554d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_554d1c:
    // 0x554d1c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x554d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_554d20:
    // 0x554d20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x554d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_554d24:
    // 0x554d24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x554d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_554d28:
    // 0x554d28: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x554d28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_554d2c:
    // 0x554d2c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x554d2cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_554d30:
    // 0x554d30: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x554d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_554d34:
    // 0x554d34: 0xc0bc284  jal         func_2F0A10
label_554d38:
    if (ctx->pc == 0x554D38u) {
        ctx->pc = 0x554D38u;
            // 0x554d38: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x554D3Cu;
        goto label_554d3c;
    }
    ctx->pc = 0x554D34u;
    SET_GPR_U32(ctx, 31, 0x554D3Cu);
    ctx->pc = 0x554D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x554D34u;
            // 0x554d38: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554D3Cu; }
        if (ctx->pc != 0x554D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554D3Cu; }
        if (ctx->pc != 0x554D3Cu) { return; }
    }
    ctx->pc = 0x554D3Cu;
label_554d3c:
    // 0x554d3c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x554d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_554d40:
    // 0x554d40: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x554d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_554d44:
    // 0x554d44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x554d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_554d48:
    // 0x554d48: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x554d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_554d4c:
    // 0x554d4c: 0x320f809  jalr        $t9
label_554d50:
    if (ctx->pc == 0x554D50u) {
        ctx->pc = 0x554D54u;
        goto label_554d54;
    }
    ctx->pc = 0x554D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x554D54u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x554D54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x554D54u; }
            if (ctx->pc != 0x554D54u) { return; }
        }
        }
    }
    ctx->pc = 0x554D54u;
label_554d54:
    // 0x554d54: 0x9602007c  lhu         $v0, 0x7C($s0)
    ctx->pc = 0x554d54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
label_554d58:
    // 0x554d58: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x554d58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
label_554d5c:
    // 0x554d5c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_554d60:
    if (ctx->pc == 0x554D60u) {
        ctx->pc = 0x554D60u;
            // 0x554d60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x554D64u;
        goto label_554d64;
    }
    ctx->pc = 0x554D5Cu;
    {
        const bool branch_taken_0x554d5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x554D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554D5Cu;
            // 0x554d60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x554d5c) {
            ctx->pc = 0x554D6Cu;
            goto label_554d6c;
        }
    }
    ctx->pc = 0x554D64u;
label_554d64:
    // 0x554d64: 0x10000008  b           . + 4 + (0x8 << 2)
label_554d68:
    if (ctx->pc == 0x554D68u) {
        ctx->pc = 0x554D68u;
            // 0x554d68: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x554D6Cu;
        goto label_554d6c;
    }
    ctx->pc = 0x554D64u;
    {
        const bool branch_taken_0x554d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554D64u;
            // 0x554d68: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x554d64) {
            ctx->pc = 0x554D88u;
            goto label_554d88;
        }
    }
    ctx->pc = 0x554D6Cu;
label_554d6c:
    // 0x554d6c: 0x28410200  slti        $at, $v0, 0x200
    ctx->pc = 0x554d6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
label_554d70:
    // 0x554d70: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
label_554d74:
    if (ctx->pc == 0x554D74u) {
        ctx->pc = 0x554D74u;
            // 0x554d74: 0x8e990008  lw          $t9, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x554D78u;
        goto label_554d78;
    }
    ctx->pc = 0x554D70u;
    {
        const bool branch_taken_0x554d70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x554d70) {
            ctx->pc = 0x554D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x554D70u;
            // 0x554d74: 0x8e990008  lw          $t9, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x554D8Cu;
            goto label_554d8c;
        }
    }
    ctx->pc = 0x554D78u;
label_554d78:
    // 0x554d78: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x554d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
label_554d7c:
    // 0x554d7c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x554d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_554d80:
    // 0x554d80: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x554d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_554d84:
    // 0x554d84: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x554d84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_554d88:
    // 0x554d88: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x554d88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_554d8c:
    // 0x554d8c: 0xc6750008  lwc1        $f21, 0x8($s3)
    ctx->pc = 0x554d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_554d90:
    // 0x554d90: 0xc674000c  lwc1        $f20, 0xC($s3)
    ctx->pc = 0x554d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_554d94:
    // 0x554d94: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x554d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_554d98:
    // 0x554d98: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x554d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_554d9c:
    // 0x554d9c: 0x320f809  jalr        $t9
label_554da0:
    if (ctx->pc == 0x554DA0u) {
        ctx->pc = 0x554DA0u;
            // 0x554da0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x554DA4u;
        goto label_554da4;
    }
    ctx->pc = 0x554D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x554DA4u);
        ctx->pc = 0x554DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554D9Cu;
            // 0x554da0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x554DA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x554DA4u; }
            if (ctx->pc != 0x554DA4u) { return; }
        }
        }
    }
    ctx->pc = 0x554DA4u;
label_554da4:
    // 0x554da4: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x554da4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_554da8:
    // 0x554da8: 0x4615c380  add.s       $f14, $f24, $f21
    ctx->pc = 0x554da8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_554dac:
    // 0x554dac: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x554dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_554db0:
    // 0x554db0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x554db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_554db4:
    // 0x554db4: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x554db4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554db8:
    // 0x554db8: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x554db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_554dbc:
    // 0x554dbc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x554dbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_554dc0:
    // 0x554dc0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x554dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_554dc4:
    // 0x554dc4: 0x4614bbc0  add.s       $f15, $f23, $f20
    ctx->pc = 0x554dc4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
label_554dc8:
    // 0x554dc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x554dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_554dcc:
    // 0x554dcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x554dccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_554dd0:
    // 0x554dd0: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x554dd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_554dd4:
    // 0x554dd4: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x554dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_554dd8:
    // 0x554dd8: 0x320f809  jalr        $t9
label_554ddc:
    if (ctx->pc == 0x554DDCu) {
        ctx->pc = 0x554DDCu;
            // 0x554ddc: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x554DE0u;
        goto label_554de0;
    }
    ctx->pc = 0x554DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x554DE0u);
        ctx->pc = 0x554DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554DD8u;
            // 0x554ddc: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x554DE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x554DE0u; }
            if (ctx->pc != 0x554DE0u) { return; }
        }
        }
    }
    ctx->pc = 0x554DE0u;
label_554de0:
    // 0x554de0: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x554de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_554de4:
    // 0x554de4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x554de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_554de8:
    // 0x554de8: 0x320f809  jalr        $t9
label_554dec:
    if (ctx->pc == 0x554DECu) {
        ctx->pc = 0x554DECu;
            // 0x554dec: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x554DF0u;
        goto label_554df0;
    }
    ctx->pc = 0x554DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x554DF0u);
        ctx->pc = 0x554DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554DE8u;
            // 0x554dec: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x554DF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x554DF0u; }
            if (ctx->pc != 0x554DF0u) { return; }
        }
        }
    }
    ctx->pc = 0x554DF0u;
label_554df0:
    // 0x554df0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x554df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_554df4:
    // 0x554df4: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x554df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_554df8:
    // 0x554df8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x554df8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_554dfc:
    // 0x554dfc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x554dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_554e00:
    // 0x554e00: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x554e00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_554e04:
    // 0x554e04: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x554e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_554e08:
    // 0x554e08: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x554e08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_554e0c:
    // 0x554e0c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x554e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_554e10:
    // 0x554e10: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x554e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_554e14:
    // 0x554e14: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x554e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_554e18:
    // 0x554e18: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x554e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_554e1c:
    // 0x554e1c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x554e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_554e20:
    // 0x554e20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x554e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_554e24:
    // 0x554e24: 0x3e00008  jr          $ra
label_554e28:
    if (ctx->pc == 0x554E28u) {
        ctx->pc = 0x554E28u;
            // 0x554e28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x554E2Cu;
        goto label_554e2c;
    }
    ctx->pc = 0x554E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x554E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554E24u;
            // 0x554e28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x554E2Cu;
label_554e2c:
    // 0x554e2c: 0x0  nop
    ctx->pc = 0x554e2cu;
    // NOP
}
