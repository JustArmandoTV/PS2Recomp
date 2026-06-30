#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AC130
// Address: 0x2ac130 - 0x2ac1b0
void sub_002AC130_0x2ac130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC130_0x2ac130");
#endif

    ctx->pc = 0x2ac130u;

    // 0x2ac130: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x2ac130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2ac134: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x2ac134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x2ac138: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2ac138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ac13c: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x2ac13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x2ac140: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2ac140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ac144: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x2ac144u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2ac148: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x2ac148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2ac14c: 0x1810  mfhi        $v1
    ctx->pc = 0x2ac14cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ac150: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x2ac150u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2ac154: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x2ac154u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x2ac158: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ac158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ac15c: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2AC15Cu;
    {
        const bool branch_taken_0x2ac15c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ac15c) {
            ctx->pc = 0x2AC160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC15Cu;
            // 0x2ac160: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC19Cu;
            goto label_2ac19c;
        }
    }
    ctx->pc = 0x2AC164u;
    // 0x2ac164: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ac164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ac168: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ac168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ac16c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC16Cu;
    {
        const bool branch_taken_0x2ac16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ac16c) {
            ctx->pc = 0x2AC170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC16Cu;
            // 0x2ac170: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC180u;
            goto label_2ac180;
        }
    }
    ctx->pc = 0x2AC174u;
    // 0x2ac174: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2ac174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ac178: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2ac178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2ac17c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ac17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ac180:
    // 0x2ac180: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x2ac180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2ac184: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2ac184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2ac188: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x2ac188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x2ac18c: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x2ac18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x2ac190: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2ac190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2ac194: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2ac194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2ac198: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2ac198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2ac19c:
    // 0x2ac19c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ac19cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac1a0: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x2ac1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x2ac1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC1A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC1A4u;
            // 0x2ac1a8: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AC1ACu;
    // 0x2ac1ac: 0x0  nop
    ctx->pc = 0x2ac1acu;
    // NOP
}
