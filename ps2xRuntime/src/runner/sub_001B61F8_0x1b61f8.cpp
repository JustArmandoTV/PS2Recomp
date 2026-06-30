#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B61F8
// Address: 0x1b61f8 - 0x1b6298
void sub_001B61F8_0x1b61f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B61F8_0x1b61f8");
#endif

    switch (ctx->pc) {
        case 0x1b6214u: goto label_1b6214;
        case 0x1b6244u: goto label_1b6244;
        default: break;
    }

    ctx->pc = 0x1b61f8u;

    // 0x1b61f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b61f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b61fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b61fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6204: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b620c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B620Cu;
    SET_GPR_U32(ctx, 31, 0x1B6214u);
    ctx->pc = 0x1B6210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B620Cu;
            // 0x1b6210: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6214u; }
        if (ctx->pc != 0x1B6214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6214u; }
        if (ctx->pc != 0x1B6214u) { return; }
    }
    ctx->pc = 0x1B6214u;
label_1b6214:
    // 0x1b6214: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6214u;
    {
        const bool branch_taken_0x1b6214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6214u;
            // 0x1b6218: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6214) {
            ctx->pc = 0x1B6238u;
            goto label_1b6238;
        }
    }
    ctx->pc = 0x1B621Cu;
    // 0x1b621c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b621cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b6220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6224: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b622c: 0x34a50119  ori         $a1, $a1, 0x119
    ctx->pc = 0x1b622cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)281);
    // 0x1b6230: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B6230u;
    ctx->pc = 0x1B6234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6230u;
            // 0x1b6234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B6238u;
label_1b6238:
    // 0x1b6238: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b6238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b623c: 0x260209f0  addiu       $v0, $s0, 0x9F0
    ctx->pc = 0x1b623cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2544));
    // 0x1b6240: 0x26040950  addiu       $a0, $s0, 0x950
    ctx->pc = 0x1b6240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
label_1b6244:
    // 0x1b6244: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1b6244u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b6248: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x1b6248u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b624c: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x1b624cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b6250: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x1b6250u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b6254: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1b6254u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1b6258: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x1b6258u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x1b625c: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x1b625cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x1b6260: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x1b6260u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x1b6264: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1b6264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1b6268: 0x0  nop
    ctx->pc = 0x1b6268u;
    // NOP
    // 0x1b626c: 0x0  nop
    ctx->pc = 0x1b626cu;
    // NOP
    // 0x1b6270: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B6270u;
    {
        const bool branch_taken_0x1b6270 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B6274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6270u;
            // 0x1b6274: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6270) {
            ctx->pc = 0x1B6244u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6244;
        }
    }
    ctx->pc = 0x1B6278u;
    // 0x1b6278: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1b6278u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b627c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b627cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6280: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1b6280u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x1b6284: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b6284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6288: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b628c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b628cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6290: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6290u;
            // 0x1b6294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6298u;
}
