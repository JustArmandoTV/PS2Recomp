#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026DB60
// Address: 0x26db60 - 0x26dc10
void sub_0026DB60_0x26db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DB60_0x26db60");
#endif

    ctx->pc = 0x26db60u;

    // 0x26db60: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x26db60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x26db64: 0xace30034  sw          $v1, 0x34($a3)
    ctx->pc = 0x26db64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
    // 0x26db68: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x26db68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x26db6c: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x26db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x26db70: 0x8ce40038  lw          $a0, 0x38($a3)
    ctx->pc = 0x26db70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x26db74: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x26db74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26db78: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x26db78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26db7c: 0x2d030020  sltiu       $v1, $t0, 0x20
    ctx->pc = 0x26db7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x26db80: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x26DB80u;
    {
        const bool branch_taken_0x26db80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB80u;
            // 0x26db84: 0x2c810003  sltiu       $at, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db80) {
            ctx->pc = 0x26DC08u;
            goto label_26dc08;
        }
    }
    ctx->pc = 0x26DB88u;
    // 0x26db88: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DB88u;
    {
        const bool branch_taken_0x26db88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB88u;
            // 0x26db8c: 0x2d030100  sltiu       $v1, $t0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db88) {
            ctx->pc = 0x26DB98u;
            goto label_26db98;
        }
    }
    ctx->pc = 0x26DB90u;
    // 0x26db90: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x26DB90u;
    {
        const bool branch_taken_0x26db90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26db90) {
            ctx->pc = 0x26DC08u;
            goto label_26dc08;
        }
    }
    ctx->pc = 0x26DB98u;
label_26db98:
    // 0x26db98: 0x2c810020  sltiu       $at, $a0, 0x20
    ctx->pc = 0x26db98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x26db9c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x26DB9Cu;
    {
        const bool branch_taken_0x26db9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26db9c) {
            ctx->pc = 0x26DBB8u;
            goto label_26dbb8;
        }
    }
    ctx->pc = 0x26DBA4u;
    // 0x26dba4: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x26dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x26dba8: 0x2c610020  sltiu       $at, $v1, 0x20
    ctx->pc = 0x26dba8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x26dbac: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x26DBACu;
    {
        const bool branch_taken_0x26dbac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dbac) {
            ctx->pc = 0x26DC00u;
            goto label_26dc00;
        }
    }
    ctx->pc = 0x26DBB4u;
    // 0x26dbb4: 0x0  nop
    ctx->pc = 0x26dbb4u;
    // NOP
label_26dbb8:
    // 0x26dbb8: 0x2c810100  sltiu       $at, $a0, 0x100
    ctx->pc = 0x26dbb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x26dbbc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x26DBBCu;
    {
        const bool branch_taken_0x26dbbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dbbc) {
            ctx->pc = 0x26DBD8u;
            goto label_26dbd8;
        }
    }
    ctx->pc = 0x26DBC4u;
    // 0x26dbc4: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x26dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x26dbc8: 0x2c610100  sltiu       $at, $v1, 0x100
    ctx->pc = 0x26dbc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x26dbcc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x26DBCCu;
    {
        const bool branch_taken_0x26dbcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dbcc) {
            ctx->pc = 0x26DC00u;
            goto label_26dc00;
        }
    }
    ctx->pc = 0x26DBD4u;
    // 0x26dbd4: 0x0  nop
    ctx->pc = 0x26dbd4u;
    // NOP
label_26dbd8:
    // 0x26dbd8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x26dbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x26dbdc: 0x81082b  sltu        $at, $a0, $at
    ctx->pc = 0x26dbdcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x26dbe0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x26DBE0u;
    {
        const bool branch_taken_0x26dbe0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dbe0) {
            ctx->pc = 0x26DC08u;
            goto label_26dc08;
        }
    }
    ctx->pc = 0x26DBE8u;
    // 0x26dbe8: 0x8cc40038  lw          $a0, 0x38($a2)
    ctx->pc = 0x26dbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x26dbec: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x26dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x26dbf0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x26dbf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x26dbf4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DBF4u;
    {
        const bool branch_taken_0x26dbf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26dbf4) {
            ctx->pc = 0x26DC08u;
            goto label_26dc08;
        }
    }
    ctx->pc = 0x26DBFCu;
    // 0x26dbfc: 0x0  nop
    ctx->pc = 0x26dbfcu;
    // NOP
label_26dc00:
    // 0x26dc00: 0xace50034  sw          $a1, 0x34($a3)
    ctx->pc = 0x26dc00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 5));
    // 0x26dc04: 0x0  nop
    ctx->pc = 0x26dc04u;
    // NOP
label_26dc08:
    // 0x26dc08: 0x3e00008  jr          $ra
    ctx->pc = 0x26DC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26DC10u;
}
