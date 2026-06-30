#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005331F0
// Address: 0x5331f0 - 0x5332b0
void sub_005331F0_0x5331f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005331F0_0x5331f0");
#endif

    switch (ctx->pc) {
        case 0x533260u: goto label_533260;
        default: break;
    }

    ctx->pc = 0x5331f0u;

    // 0x5331f0: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5331F0u;
    {
        const bool branch_taken_0x5331f0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x5331F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5331F0u;
            // 0x5331f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5331f0) {
            ctx->pc = 0x533204u;
            goto label_533204;
        }
    }
    ctx->pc = 0x5331F8u;
    // 0x5331f8: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x5331f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x5331fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x5331FCu;
    {
        const bool branch_taken_0x5331fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5331FCu;
            // 0x533200: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5331fc) {
            ctx->pc = 0x53322Cu;
            goto label_53322c;
        }
    }
    ctx->pc = 0x533204u;
label_533204:
    // 0x533204: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x533204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x533208: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x533208u;
    {
        const bool branch_taken_0x533208 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x533208) {
            ctx->pc = 0x53320Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533208u;
            // 0x53320c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53322Cu;
            goto label_53322c;
        }
    }
    ctx->pc = 0x533210u;
    // 0x533210: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x533210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x533214: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x533214u;
    {
        const bool branch_taken_0x533214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x533214) {
            ctx->pc = 0x533218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533214u;
            // 0x533218: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53322Cu;
            goto label_53322c;
        }
    }
    ctx->pc = 0x53321Cu;
    // 0x53321c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x53321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x533220: 0x50a20002  beql        $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x533220u;
    {
        const bool branch_taken_0x533220 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x533220) {
            ctx->pc = 0x533224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533220u;
            // 0x533224: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53322Cu;
            goto label_53322c;
        }
    }
    ctx->pc = 0x533228u;
    // 0x533228: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x533228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_53322c:
    // 0x53322c: 0x3e00008  jr          $ra
    ctx->pc = 0x53322Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x533234u;
    // 0x533234: 0x0  nop
    ctx->pc = 0x533234u;
    // NOP
    // 0x533238: 0x0  nop
    ctx->pc = 0x533238u;
    // NOP
    // 0x53323c: 0x0  nop
    ctx->pc = 0x53323cu;
    // NOP
    // 0x533240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x533240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x533244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x533244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x533248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x533248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x53324c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53324cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x533250: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x533250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x533254: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x533254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x533258: 0xc0486a2  jal         func_121A88
    ctx->pc = 0x533258u;
    SET_GPR_U32(ctx, 31, 0x533260u);
    ctx->pc = 0x53325Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x533258u;
            // 0x53325c: 0x8c840050  lw          $a0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121A88u;
    if (runtime->hasFunction(0x121A88u)) {
        auto targetFn = runtime->lookupFunction(0x121A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533260u; }
        if (ctx->pc != 0x533260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121A88_0x121a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533260u; }
        if (ctx->pc != 0x533260u) { return; }
    }
    ctx->pc = 0x533260u;
label_533260:
    // 0x533260: 0x2403ff2e  addiu       $v1, $zero, -0xD2
    ctx->pc = 0x533260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
    // 0x533264: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x533264u;
    {
        const bool branch_taken_0x533264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x533268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533264u;
            // 0x533268: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533264) {
            ctx->pc = 0x533298u;
            goto label_533298;
        }
    }
    ctx->pc = 0x53326Cu;
    // 0x53326c: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x53326cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x533270: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x533270u;
    {
        const bool branch_taken_0x533270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x533270) {
            ctx->pc = 0x533274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533270u;
            // 0x533274: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53329Cu;
            goto label_53329c;
        }
    }
    ctx->pc = 0x533278u;
    // 0x533278: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x533278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x53327c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x53327Cu;
    {
        const bool branch_taken_0x53327c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x53327c) {
            ctx->pc = 0x533298u;
            goto label_533298;
        }
    }
    ctx->pc = 0x533284u;
    // 0x533284: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x533284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
    // 0x533288: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x533288u;
    {
        const bool branch_taken_0x533288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x533288) {
            ctx->pc = 0x533298u;
            goto label_533298;
        }
    }
    ctx->pc = 0x533290u;
    // 0x533290: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x533290u;
    {
        const bool branch_taken_0x533290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x533290) {
            ctx->pc = 0x533294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533290u;
            // 0x533294: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53329Cu;
            goto label_53329c;
        }
    }
    ctx->pc = 0x533298u;
label_533298:
    // 0x533298: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x533298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_53329c:
    // 0x53329c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x53329cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x5332a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5332a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5332a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5332a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5332a8: 0x3e00008  jr          $ra
    ctx->pc = 0x5332A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5332ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5332A8u;
            // 0x5332ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5332B0u;
}
