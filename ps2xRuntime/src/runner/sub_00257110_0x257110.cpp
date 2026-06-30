#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00257110
// Address: 0x257110 - 0x2571c0
void sub_00257110_0x257110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257110_0x257110");
#endif

    switch (ctx->pc) {
        case 0x257130u: goto label_257130;
        case 0x257198u: goto label_257198;
        default: break;
    }

    ctx->pc = 0x257110u;

    // 0x257110: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x257110u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x257114: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257114u;
    {
        const bool branch_taken_0x257114 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x257118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257114u;
            // 0x257118: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257114) {
            ctx->pc = 0x257124u;
            goto label_257124;
        }
    }
    ctx->pc = 0x25711Cu;
    // 0x25711c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x25711cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x257120: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x257120u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_257124:
    // 0x257124: 0x28610011  slti        $at, $v1, 0x11
    ctx->pc = 0x257124u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x257128: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x257128u;
    {
        const bool branch_taken_0x257128 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25712Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257128u;
            // 0x25712c: 0x30e4ffff  andi        $a0, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257128) {
            ctx->pc = 0x257180u;
            goto label_257180;
        }
    }
    ctx->pc = 0x257130u;
label_257130:
    // 0x257130: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x257130u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x257134: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x257134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257138: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x257138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25713c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x25713cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x257140: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x257140u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x257144: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x257144u;
    {
        const bool branch_taken_0x257144 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x257144) {
            ctx->pc = 0x257158u;
            goto label_257158;
        }
    }
    ctx->pc = 0x25714Cu;
    // 0x25714c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25714Cu;
    {
        const bool branch_taken_0x25714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25714Cu;
            // 0x257150: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25714c) {
            ctx->pc = 0x257160u;
            goto label_257160;
        }
    }
    ctx->pc = 0x257154u;
    // 0x257154: 0x0  nop
    ctx->pc = 0x257154u;
    // NOP
label_257158:
    // 0x257158: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x257158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25715c: 0x0  nop
    ctx->pc = 0x25715cu;
    // NOP
label_257160:
    // 0x257160: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x257160u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x257164: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257164u;
    {
        const bool branch_taken_0x257164 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x257168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257164u;
            // 0x257168: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257164) {
            ctx->pc = 0x257174u;
            goto label_257174;
        }
    }
    ctx->pc = 0x25716Cu;
    // 0x25716c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x25716cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x257170: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x257170u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_257174:
    // 0x257174: 0x28610011  slti        $at, $v1, 0x11
    ctx->pc = 0x257174u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x257178: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x257178u;
    {
        const bool branch_taken_0x257178 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x257178) {
            ctx->pc = 0x257130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_257130;
        }
    }
    ctx->pc = 0x257180u;
label_257180:
    // 0x257180: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x257180u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x257184: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x257184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x257188: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x257188u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25718c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x25718Cu;
    {
        const bool branch_taken_0x25718c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25718c) {
            ctx->pc = 0x2571B8u;
            goto label_2571b8;
        }
    }
    ctx->pc = 0x257194u;
    // 0x257194: 0x0  nop
    ctx->pc = 0x257194u;
    // NOP
label_257198:
    // 0x257198: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x257198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x25719c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x25719cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2571a0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2571a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2571a4: 0x0  nop
    ctx->pc = 0x2571a4u;
    // NOP
    // 0x2571a8: 0x0  nop
    ctx->pc = 0x2571a8u;
    // NOP
    // 0x2571ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2571ACu;
    {
        const bool branch_taken_0x2571ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2571ac) {
            ctx->pc = 0x257198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_257198;
        }
    }
    ctx->pc = 0x2571B4u;
    // 0x2571b4: 0x0  nop
    ctx->pc = 0x2571b4u;
    // NOP
label_2571b8:
    // 0x2571b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2571B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2571BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2571B8u;
            // 0x2571bc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2571C0u;
}
