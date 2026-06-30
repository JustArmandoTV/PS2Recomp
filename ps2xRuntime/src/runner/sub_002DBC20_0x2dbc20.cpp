#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DBC20
// Address: 0x2dbc20 - 0x2dbce0
void sub_002DBC20_0x2dbc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBC20_0x2dbc20");
#endif

    switch (ctx->pc) {
        case 0x2dbc74u: goto label_2dbc74;
        case 0x2dbcb0u: goto label_2dbcb0;
        default: break;
    }

    ctx->pc = 0x2dbc20u;

    // 0x2dbc20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dbc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dbc24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dbc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dbc28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dbc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dbc2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dbc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dbc30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dbc30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc34: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2DBC34u;
    {
        const bool branch_taken_0x2dbc34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC34u;
            // 0x2dbc38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc34) {
            ctx->pc = 0x2DBCC8u;
            goto label_2dbcc8;
        }
    }
    ctx->pc = 0x2DBC3Cu;
    // 0x2dbc3c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2dbc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2dbc40: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2dbc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2dbc44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2dbc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2dbc48: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2DBC48u;
    {
        const bool branch_taken_0x2dbc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbc48) {
            ctx->pc = 0x2DBC4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC48u;
            // 0x2dbc4c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DBC78u;
            goto label_2dbc78;
        }
    }
    ctx->pc = 0x2DBC50u;
    // 0x2dbc50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dbc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2dbc54: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2dbc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2dbc58: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2dbc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2dbc5c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2dbc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2dbc60: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dbc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dbc64: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2dbc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x2dbc68: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2dbc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2dbc6c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2DBC6Cu;
    SET_GPR_U32(ctx, 31, 0x2DBC74u);
    ctx->pc = 0x2DBC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC6Cu;
            // 0x2dbc70: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC74u; }
        if (ctx->pc != 0x2DBC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC74u; }
        if (ctx->pc != 0x2DBC74u) { return; }
    }
    ctx->pc = 0x2DBC74u;
label_2dbc74:
    // 0x2dbc74: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2dbc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2dbc78:
    // 0x2dbc78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dbc78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dbc7c: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DBC7Cu;
    {
        const bool branch_taken_0x2dbc7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dbc7c) {
            ctx->pc = 0x2DBC80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC7Cu;
            // 0x2dbc80: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DBCCCu;
            goto label_2dbccc;
        }
    }
    ctx->pc = 0x2DBC84u;
    // 0x2dbc84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dbc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2dbc88: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x2dbc88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2dbc8c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2dbc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2dbc90: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2dbc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2dbc94: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2dbc94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dbc98: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DBC98u;
    {
        const bool branch_taken_0x2dbc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbc98) {
            ctx->pc = 0x2DBC9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC98u;
            // 0x2dbc9c: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DBCB4u;
            goto label_2dbcb4;
        }
    }
    ctx->pc = 0x2DBCA0u;
    // 0x2dbca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbca4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2dbca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dbca8: 0xc0a79ec  jal         func_29E7B0
    ctx->pc = 0x2DBCA8u;
    SET_GPR_U32(ctx, 31, 0x2DBCB0u);
    ctx->pc = 0x2DBCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBCA8u;
            // 0x2dbcac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBCB0u; }
        if (ctx->pc != 0x2DBCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBCB0u; }
        if (ctx->pc != 0x2DBCB0u) { return; }
    }
    ctx->pc = 0x2DBCB0u;
label_2dbcb0:
    // 0x2dbcb0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2dbcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2dbcb4:
    // 0x2dbcb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dbcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dbcb8: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2dbcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2dbcbc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2dbcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2dbcc0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2dbcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2dbcc4: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2dbcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2dbcc8:
    // 0x2dbcc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dbcc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dbccc:
    // 0x2dbccc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dbcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dbcd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dbcd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbcd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dbcd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBCD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBCD8u;
            // 0x2dbcdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DBCE0u;
}
